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

#include "audiocontrols.hpp"

/** --------------------------------------------------------------------------------------------------------------- **/

AudioControls::AudioControls(QWidget * parent) : QWidget(parent)
{
    displayGlobal = new QVBoxLayout(this);
    displayGlobal->setContentsMargins(2, 0, 2, 0);

    buttonPlay = new QPushButton(QIcon(":/icons/play.png"), "", this);
    buttonPlay->setFlat(true);
    buttonPlay->setCursor(Qt::PointingHandCursor);
    buttonPlay->setToolTip(tr("Lecture"));
    buttonPlay->setFixedSize(22, 22);

    buttonPause = new QPushButton(QIcon(":/icons/pause.png"), "", this);
    buttonPause->setFlat(true);
    buttonPause->setCursor(Qt::PointingHandCursor);
    buttonPause->setToolTip(tr("Pause"));
    buttonPause->setFixedSize(22, 22);
    buttonPause->setVisible(false);

    buttonStop = new QPushButton(QIcon(":/icons/stop.png"), "", this);
    buttonStop->setFlat(true);
    buttonStop->setCursor(Qt::PointingHandCursor);
    buttonStop->setToolTip(tr("Stop"));
    buttonStop->setFixedSize(16, 16);

    buttonForward = new QPushButton(QIcon(":/icons/forward.png"), "", this);
    buttonForward->setFlat(true);
    buttonForward->setCursor(Qt::PointingHandCursor);
    buttonForward->setToolTip(tr("Avance rapide"));
    buttonForward->setFixedSize(16, 16);

    buttonBackward = new QPushButton(QIcon(":/icons/backward.png"), "", this);
    buttonBackward->setFlat(true);
    buttonBackward->setCursor(Qt::PointingHandCursor);
    buttonBackward->setToolTip(tr("Retour rapide"));
    buttonBackward->setFixedSize(16, 16);

    buttonPrevious = new QPushButton(QIcon(":/icons/previous.png"), "", this);
    buttonPrevious->setFlat(true);
    buttonPrevious->setCursor(Qt::PointingHandCursor);
    buttonPrevious->setToolTip(tr("Précédent"));
    buttonPrevious->setFixedSize(16, 16);

    buttonNext = new QPushButton(QIcon(":/icons/next.png"), "", this);
    buttonNext->setFlat(true);
    buttonNext->setCursor(Qt::PointingHandCursor);
    buttonNext->setToolTip(tr("Suivant"));
    buttonNext->setFixedSize(16, 16);

    buttonShuffle = new QPushButton(QIcon(":/icons/shuffle.png"), "", this);
    buttonShuffle->setFlat(true);
    buttonShuffle->setCursor(Qt::PointingHandCursor);
    buttonShuffle->setToolTip(tr("Aléatoire"));
    buttonShuffle->setFixedSize(16, 16);

    buttonRepeat = new QPushButton(QIcon(":/icons/repeat.png"), "", this);
    buttonRepeat->setFlat(true);
    buttonRepeat->setCursor(Qt::PointingHandCursor);
    buttonRepeat->setToolTip(tr("Boucle"));
    buttonRepeat->setFixedSize(16, 16);

    trackInfo = new QLabel("Lecture en cours", this);

    QHBoxLayout * displayControls = new QHBoxLayout();
    displayControls->addStretch();
    displayControls->addWidget(buttonBackward);
    displayControls->addWidget(buttonPrevious);
    displayControls->addWidget(buttonPlay);
    displayControls->addWidget(buttonPause);
    displayControls->addWidget(buttonNext);
    displayControls->addWidget(buttonForward);
    displayControls->addWidget(buttonStop);
    displayControls->addWidget(buttonRepeat);
    displayControls->addWidget(buttonShuffle);
    displayControls->addStretch();

    QHBoxLayout * displayInformation = new QHBoxLayout();
    displayInformation->addStretch();
    displayInformation->addWidget(trackInfo);
    displayInformation->addStretch();

    displayGlobal->addLayout(displayControls);
    displayGlobal->addLayout(displayInformation);

    connect(buttonPlay,     SIGNAL(clicked()), this, SLOT(play()));
    connect(buttonPause,    SIGNAL(clicked()), this, SLOT(pause()));
    connect(buttonStop,     SIGNAL(clicked()), this, SLOT(stop()));
    connect(buttonForward,  SIGNAL(clicked()), this, SLOT(forward()));
    connect(buttonBackward, SIGNAL(clicked()), this, SLOT(backward()));
    connect(buttonPrevious, SIGNAL(clicked()), this, SLOT(previous()));
    connect(buttonNext,     SIGNAL(clicked()), this, SLOT(next()));
    connect(buttonShuffle,  SIGNAL(clicked()), this, SLOT(shuffle()));
    connect(buttonRepeat,   SIGNAL(clicked()), this, SLOT(repeat()));
}

/** --------------------------------------------------------------------------------------------------------------- **/

AudioControls::~AudioControls()
{

}

/** --------------------------------------------------------------------------------------------------------------- **/

void AudioControls::play()
{
    buttonPlay->setVisible(false);
    buttonPause->setVisible(true);
    emit playPressed();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void AudioControls::pause()
{
    buttonPause->setVisible(false);
    buttonPlay->setVisible(true);
    emit pausePressed();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void AudioControls::stop()
{
    emit stopPressed();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void AudioControls::forward()
{
    emit forwardPressed();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void AudioControls::backward()
{
    emit backwardPressed();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void AudioControls::previous()
{
    emit previousPressed();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void AudioControls::next()
{
    emit nextPressed();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void AudioControls::shuffle()
{
    emit shufflePresed();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void AudioControls::repeat()
{
    emit repeatPressed();
}

/** --------------------------------------------------------------------------------------------------------------- **/




