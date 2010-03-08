//
// Generated file, do not edit! Created by opp_msgc 4.0 from transport/contract/UDPControlInfo.msg.
//

#ifndef _UDPCONTROLINFO_M_H_
#define _UDPCONTROLINFO_M_H_

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

#include "IPvXAddress.h"
// end cplusplus



/**
 * Enum generated from <tt>transport/contract/UDPControlInfo.msg</tt> by opp_msgc.
 * <pre>
 * enum UDPCommandCode
 * {
 * 
 *     UDP_C_DATA = 0;    
 *     UDP_C_BIND = 1;    
 *     UDP_C_CONNECT = 2; 
 *     UDP_C_UNBIND = 3;  
 * }
 * </pre>
 */
enum UDPCommandCode {
    UDP_C_DATA = 0,
    UDP_C_BIND = 1,
    UDP_C_CONNECT = 2,
    UDP_C_UNBIND = 3
};

/**
 * Enum generated from <tt>transport/contract/UDPControlInfo.msg</tt> by opp_msgc.
 * <pre>
 * enum UDPStatusInd
 * {
 * 
 *     UDP_I_DATA = 0;        
 *     UDP_I_ERROR = 1; 
 * }
 * </pre>
 */
enum UDPStatusInd {
    UDP_I_DATA = 0,
    UDP_I_ERROR = 1
};

/**
 * Class generated from <tt>transport/contract/UDPControlInfo.msg</tt> by opp_msgc.
 * <pre>
 * class UDPControlInfo
 * {
 *     int sockId = -1;   
 *     int userId = -1;   
 *     IPvXAddress srcAddr;  
 *     IPvXAddress destAddr; 
 *     int srcPort;   
 *     int destPort;  
 *     int interfaceId = -1; 
 *     int timeToLive; 
 * }
 * </pre>
 */
class INET_API UDPControlInfo : public cObject
{
  protected:
    int sockId_var;
    int userId_var;
    IPvXAddress srcAddr_var;
    IPvXAddress destAddr_var;
    int srcPort_var;
    int destPort_var;
    int interfaceId_var;
    int timeToLive_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const UDPControlInfo&);

  public:
    UDPControlInfo();
    UDPControlInfo(const UDPControlInfo& other);
    virtual ~UDPControlInfo();
    UDPControlInfo& operator=(const UDPControlInfo& other);
    virtual UDPControlInfo *dup() const {return new UDPControlInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSockId() const;
    virtual void setSockId(int sockId_var);
    virtual int getUserId() const;
    virtual void setUserId(int userId_var);
    virtual IPvXAddress& getSrcAddr();
    virtual const IPvXAddress& getSrcAddr() const {return const_cast<UDPControlInfo*>(this)->getSrcAddr();}
    virtual void setSrcAddr(const IPvXAddress& srcAddr_var);
    virtual IPvXAddress& getDestAddr();
    virtual const IPvXAddress& getDestAddr() const {return const_cast<UDPControlInfo*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPvXAddress& destAddr_var);
    virtual int getSrcPort() const;
    virtual void setSrcPort(int srcPort_var);
    virtual int getDestPort() const;
    virtual void setDestPort(int destPort_var);
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId_var);
    virtual int getTimeToLive() const;
    virtual void setTimeToLive(int timeToLive_var);
};

inline void doPacking(cCommBuffer *b, UDPControlInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, UDPControlInfo& obj) {obj.parsimUnpack(b);}


#endif // _UDPCONTROLINFO_M_H_
