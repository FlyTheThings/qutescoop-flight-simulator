/**************************************************************************
 *  This file is part of QuteScoop. See README for license
 **************************************************************************/

#ifndef CONTROLLERDETAILS_H_
#define CONTROLLERDETAILS_H_

#include "ui_ControllerDetails.h" // file generated by UIC from PilotDetails.ui

#include "ClientDetails.h"
#include "Controller.h"

class ControllerDetails: public ClientDetails, private Ui::ControllerDetails
{
    Q_OBJECT

public:
    static ControllerDetails* getInstance(bool createIfNoInstance = true);
    void destroyInstance();
    void refresh(Controller* controller = 0);

private slots:
    void on_buttonAddFriend_clicked();
    void on_btnJoinChannel_clicked();

private:
    ControllerDetails();
    Controller* controller;
};

#endif /*CONTROLLERDETAILS_H_*/