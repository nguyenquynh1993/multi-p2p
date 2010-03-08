//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ipv4/ICMPMessage.msg.
//

#ifndef _ICMPMESSAGE_M_H_
#define _ICMPMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0400
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API 
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API 
#  endif
#endif

// cplusplus {{ ... }} section:

#include "INETDefs.h"
// end cplusplus

// cplusplus {{ ... }} section:

typedef int ICMPCode;




enum ICMPDestinationUnreachableCodes
{
    ICMP_DU_NETWORK_UNREACHABLE =                      0,
    ICMP_DU_HOST_UNREACHABLE =                         1,
    ICMP_DU_PROTOCOL_UNREACHABLE =                     2,
    ICMP_DU_PORT_UNREACHABLE =                         3,
    ICMP_DU_FRAGMENTATION_NEEDED =                     4,
    ICMP_DU_SOURCE_ROUTE_FAILED =                      5,
    ICMP_DU_DESTINATION_NETWORK_UNKNOWN =              6,
    ICMP_DU_DESTINATION_HOST_UNKNOWN =                 7,
    ICMP_DU_SOURCE_HOST_ISOLATED =                     8,
    ICMP_DU_NETWORK_PROHIBITED =                       9,
    ICMP_DU_HOST_PROHIBITED =                         10,
    ICMP_DU_NETWORK_UNREACHABLE_FOR_TYPE_OF_SERVICE = 11,
    ICMP_DU_HOST_UNREACHABLE_FOR_TYPE_OF_SERVICE =    12,
    ICMP_DU_COMMUNICATION_PROHIBITED =                13,
    ICMP_DU_HOST_PRECEDENCE_VIOLATION =               14,
    ICMP_DU_PRECEDENCE_CUTOFF_IN_EFFECT =             15,
    ICMP_AODV_QUEUE_FULL =                            16
};

// end cplusplus



/**
 * Enum generated from <tt>networklayer/ipv4/ICMPMessage.msg</tt> by opp_msgc.
 * <pre>
 * enum ICMPType
 * {
 * 
 *     ICMP_DESTINATION_UNREACHABLE = 13;
 *     ICMP_REDIRECT = 5;
 *     ICMP_TIME_EXCEEDED = 11;
 *     ICMP_PARAMETER_PROBLEM = 12;
 * 
 *     ICMP_ECHO_REQUEST = 128;
 *     ICMP_ECHO_REPLY = 129;
 *     ICMP_TIMESTAMP_REQUEST = 130;
 *     ICMP_TIMESTAMP_REPLY = 131;
 * }
 * </pre>
 */
enum ICMPType {
    ICMP_DESTINATION_UNREACHABLE = 13,
    ICMP_REDIRECT = 5,
    ICMP_TIME_EXCEEDED = 11,
    ICMP_PARAMETER_PROBLEM = 12,
    ICMP_ECHO_REQUEST = 128,
    ICMP_ECHO_REPLY = 129,
    ICMP_TIMESTAMP_REQUEST = 130,
    ICMP_TIMESTAMP_REPLY = 131
};

/**
 * Class generated from <tt>networklayer/ipv4/ICMPMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet ICMPMessage
 * {
 *     int type enum(ICMPType);
 *     int code;
 * }
 * </pre>
 */
class INET_API ICMPMessage : public cPacket
{
  protected:
    int type_var;
    int code_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ICMPMessage&);

  public:
    ICMPMessage(const char *name=NULL, int kind=0);
    ICMPMessage(const ICMPMessage& other);
    virtual ~ICMPMessage();
    ICMPMessage& operator=(const ICMPMessage& other);
    virtual ICMPMessage *dup() const {return new ICMPMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getType() const;
    virtual void setType(int type_var);
    virtual int getCode() const;
    virtual void setCode(int code_var);
};

inline void doPacking(cCommBuffer *b, ICMPMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ICMPMessage& obj) {obj.parsimUnpack(b);}


#endif // _ICMPMESSAGE_M_H_
