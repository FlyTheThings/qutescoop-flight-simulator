/**************************************************************************
 *  This file is part of QuteScoop. See README for license
 **************************************************************************/

#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "Client.h"
#include "WhazzupData.h"
#include "Sector.h"

#include <QJsonObject>

class Airport;

class Controller: public Client {
    public:
        Controller(const QJsonObject& json, const WhazzupData* whazzup);

        virtual void showDetailsDialog();

        QString facilityString() const;
        QString toolTip() const;
        QString toolTipShort() const;
        QString mapLabel() const;
        bool matches(const QRegExp& regex) const;

        bool isObserver() const;
        bool isATC() const;
        QString rank() const;

        QStringList atcLabelTokens() const;

        QString controllerSectorName() const;
        bool isCtrFss() const;
        bool isAppDep() const;
        bool isTwr() const;
        bool isGnd() const;
        bool isDel() const;
        bool isAtis() const;

        QList<Airport*> airports() const;

        QString frequency, atisMessage, atisCode;
        int facilityType, visualRange;
        QDateTime assumeOnlineUntil;

        Sector *sector;
protected:
        QString specialAirportWorkarounds(const QString& rawAirport) const;
private:
};

#endif /*CONTROLLER_H_*/
