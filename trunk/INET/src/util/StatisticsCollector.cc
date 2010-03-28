//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

//@author: HoangNQ: hoangnq@gmail.com

#include "StatisticsCollector.h"

Define_Module(StatisticsCollector);

void StatisticsCollector::initialize()
{
	numPhysicalLink = 0;

	hopCountVector.setName("2 hopCount--through phisical IP nodes");
	nodeCountVector.setName("HOANG num IP node");
	linkCountVector.setName("HOANG num physical link");

	calculateNumPhysicalLink();

	xw = xd = 0;
	maxKd = 0;

	statisticsPeriod = par("statisticsPeriod");
    timerMsg = new cMessage("StatisticsCollector Timer");

    //set BER,PER = 0
    cTopology topo;

    topo.extractByModulePath(cStringTokenizer("**.overlayTerminal[*] **.accessRouter[*] **.backboneRouter[*]").asVector());

	for (int i=0; i<topo.getNumNodes(); i++)
	{
	  cTopology::Node *node = topo.getNode(i);

	  for (int j=0; j<node->getNumOutLinks(); j++)
	  {
		cGate *gate = node->getLinkOut(j)->getLocalGate();
		cDatarateChannel *chan = check_and_cast<cDatarateChannel *>(gate->getChannel());
		chan->setBitErrorRate(0);
		chan->setPacketErrorRate(0);
	  }

	}

    //scheduleAt(simTime() + statisticsPeriod, timerMsg);

    //std::cout << "SSSSSSSSSSSSSSSStatistic Collector INitttttttttttttt at " << simTime() << endl;

}

void StatisticsCollector::handleMessage(cMessage *msg)
{
	if (msg == timerMsg) {    // is this our timer?

		scheduleAt(simTime() + statisticsPeriod, timerMsg);

		calculateNumPhysicalLink();

		hopCountVector.record(hopCountStats.getMean());

		linkCountVector.record(numPhysicalLink);

	} else {

		delete msg;

	}


}

void StatisticsCollector::setNumPhysicalLink(int num)
{
	numPhysicalLink = num;
}


void StatisticsCollector::collectHopCount(int hopCount)
{
	//hopCountStats.collect(hopCount);
	hopCountVector.record(hopCount);
}


void StatisticsCollector::finish()
{

	cancelAndDelete(timerMsg);
	/*
	std::cout << "finish statisticsCollector. " << endl;

	std::cout << "Hop count, min:    " << hopCountStats.getMin() << endl;
	std::cout << "Hop count, max:    " << hopCountStats.getMax() << endl;
	std::cout << "Hop count, mean:   " << hopCountStats.getMean() << endl;
	std::cout << "Hop count, stddev: " << hopCountStats.getStddev() << endl;
	 */
	//hopCountStats.recordAs("HOANG stats hop count");

}

void StatisticsCollector::calculateNumPhysicalLink()
{
	int numLink = 0;

	cTopology topo;

	//topo.extractByProperty("node");
	topo.extractByModulePath(cStringTokenizer("**.overlayTerminal[*] **.accessRouter[*] **.backboneRouter[*]").asVector());

	/*std::cout << "\nThis topo has " << topo.getNumNodes() << " nodes" << endl;

	for (int i=0; i<topo.getNumNodes(); i++)
	{
	  cTopology::Node *node = topo.getNode(i);
	  numLink += node->getNumOutLinks();

	  std::cout << "\nNode i=" << i << " is " << node->getModule()->getFullPath() << endl;
	  std::cout << " It has " << node->getNumOutLinks() << " conns to other nodes\n";
	  std::cout << " and " << node->getNumInLinks() << " conns from other nodes\n";

	  std::cout << " Connections to other modules are:\n";
	  for (int j=0; j<node->getNumOutLinks(); j++)
	  {
		cTopology::Node *neighbour = node->getLinkOut(j)->getRemoteNode();
		cGate *gate = node->getLinkOut(j)->getLocalGate();
		cDatarateChannel *chan = check_and_cast<cDatarateChannel *>(gate->getChannel());
		double d = (chan->getDelay()).dbl();
		double e = chan->getBitErrorRate();
		double r = chan->getDatarate();

		std::cout << " " << neighbour->getModule()->getFullPath()
		   << " through gate " << gate->getFullName()
		   << " channel Delay " << d << " BER " << e << " Datarate " << r << endl;
	  }

	}*/

	numNode = topo.getNumNodes();

	//nodeCountVector.record(numNode);

	for (int i=0; i<numNode ; i++)
	{
	  cTopology::Node *node = topo.getNode(i);
	  numLink += node->getNumOutLinks();
	}

	numPhysicalLink = numLink; //chia 2 moi chuan

}

void StatisticsCollector::hardChangeXdForKd(double kd_var)
{
	double xd_var = dblrand() * 1.5;

	while(!(xd_var > kd_var)){
		xd_var = dblrand() * 1.5;
	}

	xd = xd_var ;

//	xd = kd_var + 0.001;
}