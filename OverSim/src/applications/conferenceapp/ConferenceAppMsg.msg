//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

//
// TODO generated message class
//

cplusplus {{
#include <TransportAddress.h>
}}


// import the IP Address class

class noncobject TransportAddress;

// first, we declare an enum to tell the message types apart:

enum MessageType 
{
    MYMSG_PING = 1;           // outgoing message
    MYMSG_PONG = 2;           // returning message
}

// now we declare the message proper

packet ConferenceAppMsg 
{
    int type;                        // message type
    TransportAddress senderAddress;  // address of the node that sent the message
    int senderID;
    string data;
    int id;
}
