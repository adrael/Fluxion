/****************************************************************************
*  Copyright (C) 2011 RaphaÃ«l MARQUES <adrael_boy@live.fr>
*
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
****************************************************************************/

/** --------------------------------------------------------------------------------------------------------------- **/

#include "fluxion.hpp"

/** --------------------------------------------------------------------------------------------------------------- **/

Fluxion::Fluxion(QWidget * parent) :
    gestionPages(new Pages(this)),
    gestionEdition(new Edition(this)),
    gestionMarquee(new Marquee(this)),
    gestionSoft(new Soft(this)),
    gestionAudio(new AudioControls(this)),
    QMainWindow(parent)
{
    loadMenus();
    loadStatusBar();
    loadDisplay();
    loadConnections();

    gestionPages->addPage();
    gestionPages->updateEdges();
}

/** --------------------------------------------------------------------------------------------------------------- **/

Fluxion::~Fluxion()
{
    Q_CLEANUP_RESOURCE(resources);
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::loadMenus()
{
    fileMenu = menuBar()->addMenu(tr("&Fichiers"));

    addAction = fileMenu->addAction(tr("Ajouter une application"));
    addAction->setShortcut(QKeySequence("Ctrl+A"));
    addAction->setIcon(QIcon(":/icons/addApp.png"));
    connect(addAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    editAction = fileMenu->addAction(tr("Editer les applications"));
    editAction->setShortcut(QKeySequence("Ctrl+E"));
    editAction->setIcon(QIcon(":/icons/editApp.png"));
    connect(editAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    preferencesAction = fileMenu->addAction(tr("Paramètres"));
    preferencesAction->setShortcut(QKeySequence("Ctrl+P"));
    preferencesAction->setIcon(QIcon(":/icons/preferences.png"));
    connect(preferencesAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    fileMenu->addSeparator();

    quitAction = fileMenu->addAction(tr("Quitter"));
    quitAction->setShortcut(QKeySequence("Ctrl+Q"));
    quitAction->setIcon(QIcon(":/icons/quit.png"));
    connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    appsMenu = menuBar()->addMenu(tr("&Applications"));

    iManagerAction = appsMenu->addAction(tr("iPhoneManager"));
    iManagerAction->setIcon(QIcon(":/icons/iManager.png"));
    connect(iManagerAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    SwitchAction = appsMenu->addAction(tr("Switch"));
    SwitchAction->setIcon(QIcon(":/icons/Switch.png"));
    connect(SwitchAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    begInfoAction = appsMenu->addAction(tr("BegInfo"));
    begInfoAction->setIcon(QIcon(":/icons/BegInfo.png"));
    connect(begInfoAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    xTremAction = appsMenu->addAction(tr("xTremAudio"));
    xTremAction->setIcon(QIcon(":/icons/xTrem.png"));
    connect(xTremAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    flyWebAction = appsMenu->addAction(tr("FlyWeb"));
    flyWebAction->setIcon(QIcon(":/icons/FlyWeb.png"));
    connect(flyWebAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    sensorTextAction = appsMenu->addAction(tr("SensorText"));
    sensorTextAction->setIcon(QIcon(":/icons/SensorText.png"));
    connect(sensorTextAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    helpMenu = menuBar()->addMenu(tr("&?"));

    aboutAction = helpMenu->addAction(tr("A propos"));
    aboutAction->setIcon(QIcon(":/icons/help.png"));
    connect(aboutAction, SIGNAL(triggered()), qApp, SLOT(quit()));

    helpAction = helpMenu->addAction(tr("Aide"));
    helpAction->setIcon(QIcon(":/icons/about.png"));
    connect(helpAction, SIGNAL(triggered()), qApp, SLOT(quit()));
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::loadStatusBar()
{
    statusBar()->setFixedHeight(50);
    statusBar()->addPermanentWidget(gestionMarquee, 1);
    statusBar()->addPermanentWidget(gestionEdition);
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::loadDisplay()
{
    QHBoxLayout * bottomLayout = new QHBoxLayout();
    bottomLayout->addStretch();
    bottomLayout->addWidget(gestionPages);
    bottomLayout->addStretch();

    QVBoxLayout * centralLayout = new QVBoxLayout();
    centralLayout->addWidget(gestionAudio);
    centralLayout->addStretch();
    centralLayout->addWidget(gestionSoft);
    centralLayout->addStretch();
    centralLayout->addLayout(bottomLayout);

    QWidget * centralWidget = new QWidget(this);
    centralWidget->setLayout(centralLayout);

    setCentralWidget(centralWidget);
    setMinimumSize(470, 547);
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::loadConnections()
{
    connect(gestionPages,   SIGNAL(leftClicked()),   this, SLOT(goLeft()));
    connect(gestionPages,   SIGNAL(rightClicked()),  this, SLOT(goRight()));

    connect(gestionEdition, SIGNAL(addClicked()),    this, SLOT(addPage()));
    connect(gestionEdition, SIGNAL(editClicked()),   this, SLOT(editPage()));
    connect(gestionEdition, SIGNAL(cancelClicked()), this, SLOT(cancelPage()));
    connect(gestionEdition, SIGNAL(validClicked()),  this, SLOT(validPage()));

    connect(gestionSoft,    SIGNAL(deletePage()),    gestionPages, SLOT(removePage()));
    connect(gestionSoft,    SIGNAL(needPage()),      gestionPages, SLOT(addPage()));
    connect(gestionSoft,    SIGNAL(needPage()),      gestionPages, SLOT(end()));
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::goLeft()
{
    qDebug() << "left";
    gestionSoft->previousPage();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::goRight()
{
    qDebug() << "right";
    gestionSoft->nextPage();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::addPage()
{
    gestionPages->end();
    gestionSoft->addPage();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::editPage()
{
    gestionSoft->setDeleteVisible(true);
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::validPage()
{
    gestionSoft->deleteUnusedItems();
    gestionSoft->setDeleteVisible(false);
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Fluxion::cancelPage()
{
    gestionSoft->deleteUnusedItems();
    gestionSoft->setDeleteVisible(false);
}

/** --------------------------------------------------------------------------------------------------------------- **/
