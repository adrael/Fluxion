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

#ifndef PAGES_HPP
#define PAGES_HPP

/** --------------------------------------------------------------------------------------------------------------- **/

#include <qdebug.h>

#include <qwidget.h>
#include <qvector.h>
#include <qpixmap.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qpushbutton.h>

/** --------------------------------------------------------------------------------------------------------------- **/

class Pages : public QWidget
{
    Q_OBJECT

public:
    Pages(QWidget * parent = 0);
    ~Pages();

    void refresh();
    void updateEdges();
    void previous();
    void next();

public slots:
    void goLeft();
    void goRight();
    void addPage();
    void removePage();
    void end();

private:
    void displayOrNot();

    QVector<QLabel *> pages;

    QHBoxLayout * displayArrows;

    QPushButton * left,
                * right;

    int currentPlentyEdge;

Q_SIGNALS:
    void rightClicked();
    void leftClicked();
};

/** --------------------------------------------------------------------------------------------------------------- **/

#endif // PAGES_HPP

/** --------------------------------------------------------------------------------------------------------------- **/
