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

#include "marquee.hpp"

/** --------------------------------------------------------------------------------------------------------------- **/

Marquee::Marquee(QWidget * parent) :
    currentMarquee(0),
    QWidget(parent)
{
    listMarquee.push_back(tr("Fluxion v0.4"));
    listMarquee.push_back(tr("123456789123456789123456789"));
    listMarquee.push_back(tr("Bienvenue !"));
    listMarquee.push_back(tr("Blah blah blah blah"));
    listMarquee.push_back(tr("Raphaël Marques"));
    listMarquee.push_back(tr("MàJ le 25/09/2012"));
    listMarquee.push_back(tr("En lecture : Trois Nuits Par Semaine - Louise Attaque"));

    displayMarquee = new QHBoxLayout(this);

    marquee = new QLabel(this);
    marquee->setText(listMarquee.at(currentMarquee));

    QTimer * timerMarquee = new QTimer(this);
    timerMarquee->start(1000);
    connect(timerMarquee, SIGNAL(timeout()), this, SLOT(updateMarquee()));

    displayMarquee->addWidget(marquee);
}

/** --------------------------------------------------------------------------------------------------------------- **/

Marquee::~Marquee()
{

}

/** --------------------------------------------------------------------------------------------------------------- **/

void Marquee::updateMarquee()
{
    // Aléatoire ??

    ++currentMarquee;
    if(currentMarquee >= listMarquee.size())
        currentMarquee = 0;

    marquee->setText(listMarquee.at(currentMarquee));
}

/** --------------------------------------------------------------------------------------------------------------- **/


