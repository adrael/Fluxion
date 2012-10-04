/****************************************************************************
*  Copyright (C) 2011 Raphaël MARQUES <work.rmarques@gmail.com>
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

#ifndef SOFT_HPP
#define SOFT_HPP

/** --------------------------------------------------------------------------------------------------------------- **/

#include <qwidget.h>
#include <qlayout.h>
#include <qvector.h>
#include <qpushbutton.h>
#include <qmessagebox.h>

/** --------------------------------------------------------------------------------------------------------------- **/

#include "QCommandLinkButtonModified.hpp"

/** --------------------------------------------------------------------------------------------------------------- **/

class Soft : public QWidget
{
    Q_OBJECT

public:
    Soft(QWidget * parent = 0);
    ~Soft();

    void displayDefault();
    QCommandLinkButtonModified * createButton();
    void displayPage();
    void addPage();
    void removePage();
    void addApp(const QString &, const QString &, const QIcon &, const QString &);
    void nextPage();
    void previousPage();
    void deleteUnusedItems();
    void setDeleteVisible(const bool &);

private slots:
    void removeApp(const int &);

private:
    void createDefault();
    int calculateIndex();
    QString findAppName(const int &);
    int newID();

    int currentIndex;

    QVector<QCommandLinkButtonModified * > buttonList;

    QHBoxLayout * displayStretching;
    QGridLayout * displayComponents;

    QCommandLinkButtonModified * iPhoneManager,
                               * BegInfo,
                               * Switch,
                               * xTremAudio,
                               * SensorText,
                               * FlyWeb;

Q_SIGNALS:
    void deletePage();
    void needPage();
};

/** --------------------------------------------------------------------------------------------------------------- **/

#endif // SOFT_HPP

/** --------------------------------------------------------------------------------------------------------------- **/
