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

#ifndef AUDIOCONTROLS_HPP
#define AUDIOCONTROLS_HPP

/** --------------------------------------------------------------------------------------------------------------- **/

#include <qdebug.h>

#include <qwidget.h>
#include <qlayout.h>
#include <qlabel.h>
#include <qpushbutton.h>

/** --------------------------------------------------------------------------------------------------------------- **/

class AudioControls : public QWidget
{
    Q_OBJECT

public:
    AudioControls(QWidget * parent = 0);
    ~AudioControls();

private slots:
    void play();
    void pause();
    void stop();
    void forward();
    void backward();
    void next();
    void previous();
    void shuffle();
    void repeat();

private:
    QVBoxLayout * displayGlobal;

    QPushButton * buttonPlay,
                * buttonPause,
                * buttonStop,
                * buttonForward,
                * buttonBackward,
                * buttonPrevious,
                * buttonNext,
                * buttonShuffle,
                * buttonRepeat;

    QLabel      * trackInfo;

Q_SIGNALS:
    void playPressed();
    void pausePressed();
    void stopPressed();
    void forwardPressed();
    void backwardPressed();
    void previousPressed();
    void nextPressed();
    void shufflePresed();
    void repeatPressed();
};

/** --------------------------------------------------------------------------------------------------------------- **/

#endif // AUDIOCONTROLS_HPP

/** --------------------------------------------------------------------------------------------------------------- **/
