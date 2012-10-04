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

#ifndef EDITION_HPP
#define EDITION_HPP

/** --------------------------------------------------------------------------------------------------------------- **/

#include <qdebug.h>

#include <qwidget.h>
#include <qlayout.h>
#include <qpushbutton.h>

/** --------------------------------------------------------------------------------------------------------------- **/

class Edition : public QWidget
{
    Q_OBJECT

public:
    Edition(QWidget * parent = 0);
    ~Edition();

private slots:
    void addButton();
    void validButton();
    void cancelButton();
    void editButton();

private:
    QHBoxLayout * displayEditionTools;

    QPushButton * addApp,
                * editApp,
                * cancelApp,
                * validApp;

Q_SIGNALS:
    void addClicked();
    void editClicked();
    void cancelClicked();
    void validClicked();
};

/** --------------------------------------------------------------------------------------------------------------- **/

#endif // EDITION_HPP

/** --------------------------------------------------------------------------------------------------------------- **/
