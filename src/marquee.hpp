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

#ifndef MARQUEE_HPP
#define MARQUEE_HPP

/** --------------------------------------------------------------------------------------------------------------- **/

#include <qdebug.h>

#include <qwidget.h>
#include <qlayout.h>
#include <qvector.h>
#include <qlabel.h>
#include <qtimer.h>
#include <qpushbutton.h>

/** --------------------------------------------------------------------------------------------------------------- **/

class Marquee : public QWidget
{
    Q_OBJECT

public:
    Marquee(QWidget * parent = 0);
    ~Marquee();

private slots:
    void updateMarquee();

private:
    QHBoxLayout * displayMarquee;
    QLabel * marquee;
    QVector<QString> listMarquee;
    int currentMarquee;
};

/** --------------------------------------------------------------------------------------------------------------- **/

#endif // MARQUEE_HPP

/** --------------------------------------------------------------------------------------------------------------- **/
