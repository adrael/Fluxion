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

#include "pages.hpp"

/** --------------------------------------------------------------------------------------------------------------- **/

Pages::Pages(QWidget * parent) :
    currentPlentyEdge(0),
    QWidget(parent)
{
    displayArrows = new QHBoxLayout(this);

    left = new QPushButton(QIcon(":/icons/pageLeft.png"), "", this);
    left->setFixedSize(16, 16);
    left->setFlat(true);
    left->setShortcut(Qt::Key_Left);
    left->setToolTip(tr("Page précédente"));
    left->setCursor(Qt::PointingHandCursor);

    right = new QPushButton(QIcon(":/icons/pageRight.png"), "", this);
    right->setFixedSize(16, 16);
    right->setFlat(true);
    right->setShortcut(Qt::Key_Right);
    right->setToolTip(tr("Page suivante"));
    right->setCursor(Qt::PointingHandCursor);

    connect(right, SIGNAL(clicked()), this, SLOT(goRight()));
    connect(left, SIGNAL(clicked()), this, SLOT(goLeft()));
}

/** --------------------------------------------------------------------------------------------------------------- **/

Pages::~Pages()
{

}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::removePage()
{
    if(pages.size() > 0) {
        QLabel * tmpPage = pages.at(pages.size() - 1);
        pages.remove(pages.size() - 1);
        delete tmpPage;
        --currentPlentyEdge;
        refresh();
    }
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::end()
{
    currentPlentyEdge = pages.size() - 1;
    updateEdges();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::addPage()
{
    QLabel * tmpPage = new QLabel(this);
    tmpPage->setPixmap(QPixmap(":/icons/emptyCursor.png"));
    pages.push_back(tmpPage);
    refresh();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::refresh()
{
    while(displayArrows->count() > 0)
        displayArrows->removeItem(displayArrows->itemAt(0));

    QHBoxLayout * tmp = new QHBoxLayout();
    for(QVector<QLabel *>::iterator it(pages.begin()); it != pages.end(); ++it)
        tmp->addWidget(*it);

    displayArrows->addWidget(left);
    displayArrows->addLayout(tmp);
    displayArrows->addWidget(right);

    updateEdges();
    displayOrNot();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::updateEdges()
{
    QLabel * tmpPage;

    if(currentPlentyEdge > 0) {
        tmpPage = pages.at(currentPlentyEdge - 1);
        tmpPage->setPixmap(QPixmap(":/icons/emptyCursor.png"));
    }

    if(currentPlentyEdge < pages.size() - 1) {
        tmpPage = pages.at(currentPlentyEdge + 1);
        tmpPage->setPixmap(QPixmap(":/icons/emptyCursor.png"));
    }

    tmpPage = pages.at(currentPlentyEdge);
    tmpPage->setPixmap(QPixmap(":/icons/plentyCursor.png"));

    displayOrNot();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::goLeft()
{
    if(currentPlentyEdge > 0) {
        --currentPlentyEdge;
        updateEdges();
        emit leftClicked();
    }
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::goRight()
{
    if(currentPlentyEdge < pages.size() - 1) {
        ++currentPlentyEdge;
        updateEdges();
        emit rightClicked();
    }
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::next()
{
    if(currentPlentyEdge < pages.size() - 1) {
        ++currentPlentyEdge;
        updateEdges();
    }
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::previous()
{
    if(currentPlentyEdge > 0) {
        --currentPlentyEdge;
        updateEdges();
    }
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Pages::displayOrNot()
{
    if(pages.size() == 1)
        setVisible(false);
    else
        setVisible(true);
}

/** --------------------------------------------------------------------------------------------------------------- **/
