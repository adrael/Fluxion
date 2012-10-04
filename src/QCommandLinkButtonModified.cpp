/****************************************************************************
*  Copyright (C) 2011 Raphaël MARQUES <adrael_boy@live.fr>
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

#include "QCommandLinkButtonModified.hpp"

/** --------------------------------------------------------------------------------------------------------------- **/

QCommandLinkButtonModified::QCommandLinkButtonModified(const QString & title, QWidget * parent) :
    deleteButton(new QToolButton(this)),
    used(false),
    locked(false),
    path(""),
    QCommandLinkButton(title, parent)
{
    setIconSize(QSize(50, 50));
    setCursor(Qt::PointingHandCursor);

    deleteButton->setIcon(QIcon(":/icons/clear.png"));
    deleteButton->setIconSize(QSize(16, 16));
    deleteButton->setCursor(Qt::OpenHandCursor);
    deleteButton->setStyleSheet("QToolButton {border: none; padding: 0px;}");
    deleteButton->setToolTip(tr("Supprimer l'application"));
    deleteButton -> hide();
    connect(deleteButton, SIGNAL(clicked()), this, SLOT(launchSignal()));
}

/** --------------------------------------------------------------------------------------------------------------- **/

QCommandLinkButtonModified::~QCommandLinkButtonModified()
{

}

/** --------------------------------------------------------------------------------------------------------------- **/

void QCommandLinkButtonModified::setUsed(const bool & u)
{
    used = u;
}

/** --------------------------------------------------------------------------------------------------------------- **/

bool QCommandLinkButtonModified::isUsed()
{
    return used;
}

/** --------------------------------------------------------------------------------------------------------------- **/

void QCommandLinkButtonModified::setLocked(const bool & l)
{
    locked = l;
}

/** --------------------------------------------------------------------------------------------------------------- **/

bool QCommandLinkButtonModified::isLocked()
{
    return locked;
}

/** --------------------------------------------------------------------------------------------------------------- **/

void QCommandLinkButtonModified::setID(const int & i)
{
    ID = i;
}

/** --------------------------------------------------------------------------------------------------------------- **/

int QCommandLinkButtonModified::getID()
{
    return ID;
}

/** --------------------------------------------------------------------------------------------------------------- **/

void QCommandLinkButtonModified::setPath(const QString & p)
{
    path = p;
}

/** --------------------------------------------------------------------------------------------------------------- **/

QString QCommandLinkButtonModified::getPath()
{
    return path;
}

/** --------------------------------------------------------------------------------------------------------------- **/

void QCommandLinkButtonModified::launchSignal()
{
    emit deleteMe(ID);
}

/** --------------------------------------------------------------------------------------------------------------- **/

void QCommandLinkButtonModified::setDeleteVisible(const bool & v)
{
    deleteButton->setVisible(v);
}

/** --------------------------------------------------------------------------------------------------------------- **/




