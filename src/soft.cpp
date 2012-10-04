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

#include "soft.hpp"

/** --------------------------------------------------------------------------------------------------------------- **/

Soft::Soft(QWidget * parent) :
    currentIndex(0),
    QWidget(parent)
{
    createDefault();
    displayDefault();
}

/** --------------------------------------------------------------------------------------------------------------- **/

Soft::~Soft()
{

}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::createDefault()
{
    displayStretching = new QHBoxLayout(this);

    displayComponents = new QGridLayout();
    displayComponents->setVerticalSpacing(10);
    displayComponents->setHorizontalSpacing(30);

    iPhoneManager = new QCommandLinkButtonModified(tr("iPhoneManager"), this);
    iPhoneManager->setIcon(QIcon(":/icons/iManager.png"));
    iPhoneManager->setToolTip(tr("Lancer iPhoneManager"));
    iPhoneManager->setDescription(tr("iPhoneManager permet de récupérer, sauvegarder et crypter les données présentent sur votre iPhone."));
    iPhoneManager->setUsed(true);
    iPhoneManager->setLocked(true);
    iPhoneManager->setID(0);

    BegInfo = new QCommandLinkButtonModified(tr("BegInfo"), this);
    BegInfo->setIcon(QIcon(":/icons/BegInfo.png"));
    BegInfo->setToolTip(tr("Lancer BegInfo"));
    BegInfo->setDescription(tr("BegInfo simplifie l'utilisation que vous avez de votre ordinateur."));
    BegInfo->setUsed(true);
    BegInfo->setLocked(true);
    BegInfo->setID(1);

    Switch = new QCommandLinkButtonModified(tr("Switch"), this);
    Switch->setIcon(QIcon(":/icons/Switch.png"));
    Switch->setToolTip(tr("Lancer Switch"));
    Switch->setDescription(tr("Marre d'avoir à vous connecter et d'ouvrir 10 onglets web à chaque fois ? Switch est fait pour vous."));
    Switch->setUsed(true);
    Switch->setLocked(true);
    Switch->setID(2);

    xTremAudio = new QCommandLinkButtonModified(tr("xTremAudio"), this);
    xTremAudio->setIcon(QIcon(":/icons/xTrem.png"));
    xTremAudio->setToolTip(tr("Lancer xTremAudio"));
    xTremAudio->setDescription(tr("Simple, efficace, élégant et puissant sont les maîtres mots qui constituent xTremAudio."));
    xTremAudio->setUsed(true);
    xTremAudio->setLocked(true);
    xTremAudio->setID(3);

    SensorText = new QCommandLinkButtonModified(tr("SensorText"), this);
    SensorText->setIcon(QIcon(":/icons/SensorText.png"));
    SensorText->setToolTip(tr("Lancer SensorText"));
    SensorText->setDescription(tr("Bientôt votre environnement de développement intégré favoris !"));
    SensorText->setUsed(true);
    SensorText->setLocked(true);
    SensorText->setID(4);

    FlyWeb = new QCommandLinkButtonModified(tr("FlyWeb"), this);
    FlyWeb->setIcon(QIcon(":/icons/FlyWeb.png"));
    FlyWeb->setToolTip(tr("Lancer FlyWeb"));
    FlyWeb->setDescription(tr("Rapide et discret, ce navigateur vous accompagnera partout où vous irez."));
    FlyWeb->setUsed(true);
    FlyWeb->setLocked(true);
    FlyWeb->setID(5);

    buttonList.push_back(iPhoneManager);
    buttonList.push_back(BegInfo);
    buttonList.push_back(Switch);
    buttonList.push_back(xTremAudio);
    buttonList.push_back(SensorText);
    buttonList.push_back(FlyWeb);

    displayStretching->addStretch();
    displayStretching->addLayout(displayComponents);
    displayStretching->addStretch();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::displayPage()
{
    for(QVector<QCommandLinkButtonModified *>::iterator it(buttonList.begin()); it != buttonList.end(); ++it)
        (*it)->setVisible(false);

    while(displayComponents->count() > 0)
        displayComponents->removeItem(displayComponents->itemAt(0));

    for(int i(currentIndex); i < currentIndex + 6; ++i) {
        if(i < buttonList.size())
            buttonList.at(i)->setVisible(true);
        else break;
    }

    if(currentIndex < buttonList.size())
        displayComponents->addWidget(buttonList.at(currentIndex), 0, 0);

    if(currentIndex + 1 < buttonList.size())
        displayComponents->addWidget(buttonList.at(currentIndex + 1), 0, 1);

    if(currentIndex + 2 < buttonList.size())
        displayComponents->addWidget(buttonList.at(currentIndex + 2), 2, 0);

    if(currentIndex + 3 < buttonList.size())
        displayComponents->addWidget(buttonList.at(currentIndex + 3), 2, 1);

    if(currentIndex + 4 < buttonList.size())
        displayComponents->addWidget(buttonList.at(currentIndex + 4), 3, 0);

    if(currentIndex + 5 < buttonList.size())
        displayComponents->addWidget(buttonList.at(currentIndex + 5), 3, 1);
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::displayDefault()
{
    currentIndex = 0;
    displayPage();
}

/** --------------------------------------------------------------------------------------------------------------- **/

QCommandLinkButtonModified * Soft::createButton()
{
    QCommandLinkButtonModified * tmpButton = new QCommandLinkButtonModified(tr("Ajouter"), this);
    tmpButton->setIcon(QIcon(":/icons/default.png"));
    tmpButton->setToolTip(tr("Ajouter une application"));
    tmpButton->setDescription(tr("Ajouter une application au tableau des applications."));
    tmpButton->setID(newID());
    connect(tmpButton, SIGNAL(deleteMe(const int &)), this, SLOT(removeApp(const int &)));
    return tmpButton;
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::deleteUnusedItems()
{
    int cpt(0);

    QCommandLinkButtonModified * tmp;
    for(int i(0); i < buttonList.size(); ++i)
        if(!buttonList.at(i)->isUsed()) {
            tmp = buttonList.at(i);
            buttonList.remove(i);
            delete tmp;
            ++cpt;
            i = 0;
        }

    if(cpt == 6) {
        currentIndex -= 6;
        emit deletePage();
    }

    displayPage();
}

/** --------------------------------------------------------------------------------------------------------------- **/

int Soft::calculateIndex()
{
    int cpt(0);
    for(int i(0); i < buttonList.size(); ++i)
        if(buttonList.at(i)->isUsed())
            ++cpt;

    return cpt - (cpt % 6);
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::addPage()
{
    int size(6 - (buttonList.size() % 6));
    if(size == 6)
        emit needPage();

    currentIndex = calculateIndex();

    for(int i(0); i < size; ++i)
        buttonList.push_back(createButton());
    displayPage();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::removePage()
{

}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::addApp(const QString & name, const QString & description, const QIcon & icon, const QString & path)
{

}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::removeApp(const int & ID)
{
    QString name(findAppName(ID));

    int ans(QMessageBox::question(this, tr("Supprimer") + " " + name, tr("Etes-vous sûr de vouloir supprimer") + " " + name + tr(" ?"), QMessageBox::Yes | QMessageBox::No));

    QCommandLinkButtonModified * tmp;
    if(ans == QMessageBox::Yes){
        for(int i(0); i < buttonList.size(); ++i)
            if(ID == buttonList.at(i)->getID()){
                tmp = buttonList.at(i);
                buttonList.remove(i);
                delete tmp;
                break;
            }
        displayPage();
    }
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::nextPage()
{
    currentIndex += 6;
    displayPage();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::previousPage()
{
    currentIndex -= 6;
    displayPage();
}

/** --------------------------------------------------------------------------------------------------------------- **/

QString Soft::findAppName(const int & ID)
{
    for(QVector<QCommandLinkButtonModified *>::iterator it(buttonList.begin()); it != buttonList.end(); ++it)
        if((*it)->getID() == ID)
            return (*it)->text();
}

/** --------------------------------------------------------------------------------------------------------------- **/

void Soft::setDeleteVisible(const bool & visible)
{
    for(QVector<QCommandLinkButtonModified *>::iterator it(buttonList.begin()); it != buttonList.end(); ++it)
        if((*it)->isLocked())
            (*it)->setDeleteVisible(visible);
}

/** --------------------------------------------------------------------------------------------------------------- **/

int Soft::newID()
{
    return buttonList.at(buttonList.size() - 1)->getID() + 1;
}

/** --------------------------------------------------------------------------------------------------------------- **/



