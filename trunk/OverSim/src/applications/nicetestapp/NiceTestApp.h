/*
 * NiceTestApp.h
 *
 *  Created on: Feb 22, 2010
 *      Author: admin
 */

#ifndef NICETESTAPP_H_
#define NICETESTAPP_H_


#include "BaseApp.h"
#include "StatisticsCollector.h"

class NiceTestApp : public BaseApp
{
    // module parameters
    simtime_t sendPeriod;     // we'll store the "sendPeriod" parameter here
    int numToSend;            // we'll store the "numToSend" parameter here
    //int largestKey;           // we'll store the "largestKey" parameter here
    bool isSender;

    // statistics
    int numSent;              //number of packets sent
    int numReceived;          //number of packets received

    StatisticsCollector *stats;

    // our timer
    cMessage *timerMsg;

    // application routines
    void initializeApp(int stage);                 // called when the module is being created
    void finishApp();                              // called when the module is about to be destroyed
    void handleTimerEvent(cMessage* msg);          // called when we received a timer message
    //void deliver(cMessage* msg);  // called when we receive a message from the overlay
    void handleUDPMessage(cMessage* msg);          // called when we receive a UDP message
    void handleLowerMessage(cMessage* msg);          // called when we receive a message from lowertier
    void encapAndSendCbrAppMsg(cMessage* msg);

	double lastPacketTime;
	static double xw,xd;

	//timers
    cMessage* changeXdTimer;
    simtime_t changeXdInterval;

    double getXw(){return xw;};
    double getXd(){return xd;};
    void setXw(double xw_var){ xw = xw_var ;};
    void setXd(double xd_var){ xd = xd_var ;};
};

double NiceTestApp::xd = 0;
double NiceTestApp::xw = 0;

#endif /* NICETESTAPP_H_ */
