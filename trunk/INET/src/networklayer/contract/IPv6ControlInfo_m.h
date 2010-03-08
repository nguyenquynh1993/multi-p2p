//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/contract/IPv6ControlInfo.msg.
//

#ifndef _IPV6CONTROLINFO_M_H_
#define _IPV6CONTROLINFO_M_H_

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

#include "IPv6Address.h"
#include "IPProtocolId_m.h"
// end cplusplus



/**
 * Class generated from <tt>networklayer/contract/IPv6ControlInfo.msg</tt> by opp_msgc.
 * <pre>
 * class IPv6ControlInfo
 * {
 *     @customize(true);
 *     int protocol enum(IPProtocolId);  
 *     IPv6Address destAddr; 
 *     IPv6Address srcAddr;  
 *     short hopLimit;       
 *     int interfaceId = -1; 
 *                               
 * }
 * </pre>
 *
 * IPv6ControlInfo_Base is only useful if it gets subclassed, and IPv6ControlInfo is derived from it.
 * The minimum code to be written for IPv6ControlInfo is the following:
 *
 * <pre>
 * class INET_API IPv6ControlInfo : public IPv6ControlInfo_Base
 * {
 *   public:
 *     IPv6ControlInfo() : IPv6ControlInfo_Base() {}
 *     IPv6ControlInfo(const IPv6ControlInfo& other) : IPv6ControlInfo_Base() {operator=(other);}
 *     IPv6ControlInfo& operator=(const IPv6ControlInfo& other) {IPv6ControlInfo_Base::operator=(other); return *this;}
 *     virtual IPv6ControlInfo *dup() const {return new IPv6ControlInfo(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPv6ControlInfo_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IPv6ControlInfo);
 * </pre>
 */
class INET_API IPv6ControlInfo_Base : public cObject
{
  protected:
    int protocol_var;
    IPv6Address destAddr_var;
    IPv6Address srcAddr_var;
    short hopLimit_var;
    int interfaceId_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6ControlInfo_Base&);
    // make constructors protected to avoid instantiation
    IPv6ControlInfo_Base();
    IPv6ControlInfo_Base(const IPv6ControlInfo_Base& other);
    // make assignment operator protected to force the user override it
    IPv6ControlInfo_Base& operator=(const IPv6ControlInfo_Base& other);

  public:
    virtual ~IPv6ControlInfo_Base();
    virtual IPv6ControlInfo_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class IPv6ControlInfo");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getProtocol() const;
    virtual void setProtocol(int protocol_var);
    virtual IPv6Address& getDestAddr();
    virtual const IPv6Address& getDestAddr() const {return const_cast<IPv6ControlInfo_Base*>(this)->getDestAddr();}
    virtual void setDestAddr(const IPv6Address& destAddr_var);
    virtual IPv6Address& getSrcAddr();
    virtual const IPv6Address& getSrcAddr() const {return const_cast<IPv6ControlInfo_Base*>(this)->getSrcAddr();}
    virtual void setSrcAddr(const IPv6Address& srcAddr_var);
    virtual short getHopLimit() const;
    virtual void setHopLimit(short hopLimit_var);
    virtual int getInterfaceId() const;
    virtual void setInterfaceId(int interfaceId_var);
};


#endif // _IPV6CONTROLINFO_M_H_
