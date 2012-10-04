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

#ifndef QCOMMANDLINKBUTTONMODIFIED_HPP
#define QCOMMANDLINKBUTTONMODIFIED_HPP

/** --------------------------------------------------------------------------------------------------------------- **/

#include <qdebug.h>

#include <qstyle.h>
#include <qtoolbutton.h>
#include <qcommandlinkbutton.h>

/** --------------------------------------------------------------------------------------------------------------- **/

class QCommandLinkButtonModified : public QCommandLinkButton
{
    Q_OBJECT

public:
    QCommandLinkButtonModified(const QString &, QWidget * parent = 0);
    ~QCommandLinkButtonModified();

    bool isUsed();
    void setUsed(const bool &);

    bool isLocked();
    void setLocked(const bool &);

    int getID();
    void setID(const int &);

    QString getPath();
    void setPath(const QString &);

    void setDeleteVisible(const bool &);

private slots:
    void launchSignal();

private:
    QToolButton * deleteButton;

    bool used, locked;
    int ID;
    QString path;

Q_SIGNALS:
    void deleteMe(const int &);
};

/** --------------------------------------------------------------------------------------------------------------- **/

#endif // QCOMMANDLINKBUTTONMODIFIED_HPP

/** --------------------------------------------------------------------------------------------------------------- **/
