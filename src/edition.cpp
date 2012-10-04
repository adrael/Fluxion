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

#include "edition.hpp"

/** --------------------------------------------------------------------------------------------------------------- **/

Edition::Edition(QWidget * parent) : QWidget(parent)
{
    displayEditionTools = new QHBoxLayout(this);

    addApp = new QPushButton(QIcon(":/icons/addApp.png"), "", this);
    addApp->setFixedSize(24, 24);
    addApp->setFlat(true);
    addApp->setShortcut(Qt::Key_Plus);
    addApp->setToolTip(tr("Ajouter une application à la liste"));
    addApp->setCursor(Qt::PointingHandCursor);

    editApp = new QPushButton(QIcon(":/icons/editApp.png"), "", this);
    editApp->setFixedSize(24, 24);
    editApp->setFlat(true);
    editApp->setShortcut(Qt::CTRL + Qt::Key_E);
    editApp->setToolTip(tr("Éditer la liste d'application"));
    editApp->setCursor(Qt::PointingHandCursor);

    validApp = new QPushButton(QIcon(":/icons/validApp.png"), "", this);
    validApp->setFixedSize(24, 24);
    validApp->setFlat(true);
    validApp->setShortcut(Qt::Key_Enter);
    validApp->setToolTip(tr("Finaliser la liste d'application"));
    validApp->setCursor(Qt::PointingHandCursor);
    validApp->setVisible(false);

    cancelApp = new QPushButton(QIcon(":/icons/deleteApp.png"), "", this);
    cancelApp->setFixedSize(24, 24);
    cancelApp->setFlat(true);
    cancelApp->setShortcut(Qt::Key_Enter);
    cancelApp->setToolTip(tr("Annuler la modification en cours"));
    cancelApp->setCursor(Qt::PointingHandCursor);
    cancelApp->setVisible(false);

    displayEditionTools->addWidget(addApp);
    displayEditionTools->addWidget(editApp);
    displayEditionTools->addWidget(validApp);
    displayEditionTools->addWidget(cancelApp);

    connect(addApp, SIGNAL(clicked()), this, SLOT(addButton()));
    connect(validApp, SIGNAL(clicked()), this, SLOT(validButton()));
    connect(cancelApp, SIGNAL(clicked()), this, SLOT(cancelButton()));
    connect(editApp, SIGNAL(clicked()), this, SLOT(editButton()));
}

/** --------------------------------------------------------------------------------------------------------------- **/

Edition::~Edition()
{

}

/** --------------------------------------------------------------------------------------------------------------- **/

void Edition::addButton()
{
    addApp->setVisible(false);
    editApp->setVisible(false);
    validApp->setVisible(true);
    cancelApp->setVisible(true);
    emit addClicked();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Edition::validButton()
{
    validApp->setVisible(false);
    cancelApp->setVisible(false);
    addApp->setVisible(true);
    editApp->setVisible(true);
    emit validClicked();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Edition::cancelButton()
{
    validApp->setVisible(false);
    cancelApp->setVisible(false);
    addApp->setVisible(true);
    editApp->setVisible(true);
    emit cancelClicked();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Edition::editButton()
{
    addApp->setVisible(false);
    editApp->setVisible(false);
    validApp->setVisible(true);
    cancelApp->setVisible(true);
    emit editClicked();
}

/** --------------------------------------------------------------------------------------------------------------- **/
