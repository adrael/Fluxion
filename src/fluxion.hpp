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

#ifndef FLUXION_HPP
#define FLUXION_HPP

/** --------------------------------------------------------------------------------------------------------------- **/

#include "soft.hpp"
#include "pages.hpp"
#include "edition.hpp"
#include "marquee.hpp"
#include "audiocontrols.hpp"

/** --------------------------------------------------------------------------------------------------------------- **/

#include <qapplication.h>
#include <qmainwindow.h>
#include <qstatusbar.h>
#include <qmenubar.h>
#include <qmenu.h>
#include <qaction.h>

/** --------------------------------------------------------------------------------------------------------------- **/

class Fluxion : public QMainWindow
{
    Q_OBJECT

public:
    Fluxion(QWidget * parent = 0);
    ~Fluxion();

private slots:
    void goLeft();
    void goRight();
    void addPage();
    void editPage();
    void cancelPage();
    void validPage();

private:
    void loadMenus();
    void loadStatusBar();
    void loadDisplay();
    void loadConnections();

    Pages         * gestionPages;
    Edition       * gestionEdition;
    Marquee       * gestionMarquee;
    Soft          * gestionSoft;
    AudioControls * gestionAudio;

    QMenu * fileMenu,
          * appsMenu,
          * helpMenu;

    // File menu
    QAction * addAction,
            * editAction,
            * preferencesAction,
            * quitAction;

    // Apps menu
    QAction * iManagerAction,
            * SwitchAction,
            * begInfoAction,
            * xTremAction,
            * flyWebAction,
            * sensorTextAction;

    // Help menu
    QAction * aboutAction,
            * helpAction;
};

/** --------------------------------------------------------------------------------------------------------------- **/

#endif // FLUXION_HPP

/** --------------------------------------------------------------------------------------------------------------- **/
