//
// Generated file, do not edit! Created by opp_msgc 4.1 from networklayer/ipv6/IPv6Datagram.msg.
//

#ifndef _IPV6DATAGRAM_M_H_
#define _IPV6DATAGRAM_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0401
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

// cplusplus {{
#include <iostream>
#include "IPv6Address.h"
#include "IPProtocolId_m.h"
class IPv6ExtensionHeader;
typedef IPv6ExtensionHeader *IPv6ExtensionHeaderPtr;
std::ostream& operator<<(std::ostream& os, IPv6ExtensionHeaderPtr eh);
// }}



/**
 * Class generated from <tt>networklayer/ipv6/IPv6Datagram.msg</tt> by opp_msgc.
 * <pre>
 * packet IPv6Datagram
 * {
 *     @customize(true);
 * 
 *     IPv6Address srcAddress;
 *     IPv6Address destAddress;
 *     unsigned int trafficClass;
 *     unsigned int flowLabel;
 *     short hopLimit = 0;
 *     int transportProtocol enum(IPProtocolId);
 * 
 *     IPv6ExtensionHeaderPtr extensionHeader[]; 
 * }
 * </pre>
 *
 * IPv6Datagram_Base is only useful if it gets subclassed, and IPv6Datagram is derived from it.
 * The minimum code to be written for IPv6Datagram is the following:
 *
 * <pre>
 * class INET_API IPv6Datagram : public IPv6Datagram_Base
 * {
 *   public:
 *     IPv6Datagram(const char *name=NULL, int kind=0) : IPv6Datagram_Base(name,kind) {}
 *     IPv6Datagram(const IPv6Datagram& other) : IPv6Datagram_Base(other.getName()) {operator=(other);}
 *     IPv6Datagram& operator=(const IPv6Datagram& other) {IPv6Datagram_Base::operator=(other); return *this;}
 *     virtual IPv6Datagram *dup() const {return new IPv6Datagram(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPv6Datagram_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IPv6Datagram);
 * </pre>
 */
class INET_API IPv6Datagram_Base : public ::cPacket
{
  protected:
    ::IPv6Address srcAddress_var;
    ::IPv6Address destAddress_var;
    unsigned int trafficClass_var;
    unsigned int flowLabel_var;
    short hopLimit_var;
    int transportProtocol_var;
    ::IPv6ExtensionHeaderPtr *extensionHeader_var; // array ptr
    unsigned int extensionHeader_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6Datagram_Base&);
    // make constructors protected to avoid instantiation
    IPv6Datagram_Base(const char *name=NULL, int kind=0);
    IPv6Datagram_Base(const IPv6Datagram_Base& other);
    // make assignment operator protected to force the user override it
    IPv6Datagram_Base& operator=(const IPv6Datagram_Base& other);

  public:
    virtual ~IPv6Datagram_Base();
    virtual IPv6Datagram_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class IPv6Datagram");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPv6Address& getSrcAddress();
    virtual const IPv6Address& getSrcAddress() const {return const_cast<IPv6Datagram_Base*>(this)->getSrcAddress();}
    virtual void setSrcAddress(const IPv6Address& srcAddress_var);
    virtual IPv6Address& getDestAddress();
    virtual const IPv6Address& getDestAddress() const {return const_cast<IPv6Datagram_Base*>(this)->getDestAddress();}
    virtual void setDestAddress(const IPv6Address& destAddress_var);
    virtual unsigned int getTrafficClass() const;
    virtual void setTrafficClass(unsigned int trafficClass_var);
    virtual unsigned int getFlowLabel() const;
    virtual void setFlowLabel(unsigned int flowLabel_var);
    virtual short getHopLimit() const;
    virtual void setHopLimit(short hopLimit_var);
    virtual int getTransportProtocol() const;
    virtual void setTransportProtocol(int transportProtocol_var);
    virtual void setExtensionHeaderArraySize(unsigned int size);
    virtual unsigned int getExtensionHeaderArraySize() const;
    virtual IPv6ExtensionHeaderPtr& getExtensionHeader(unsigned int k);
    virtual const IPv6ExtensionHeaderPtr& getExtensionHeader(unsigned int k) const {return const_cast<IPv6Datagram_Base*>(this)->getExtensionHeader(k);}
    virtual void setExtensionHeader(unsigned int k, const IPv6ExtensionHeaderPtr& extensionHeader_var);
};

/**
 * Class generated from <tt>networklayer/ipv6/IPv6Datagram.msg</tt> by opp_msgc.
 * <pre>
 * class IPv6ExtensionHeader
 * {
 *     @customize(true);
 * }
 * </pre>
 *
 * IPv6ExtensionHeader_Base is only useful if it gets subclassed, and IPv6ExtensionHeader is derived from it.
 * The minimum code to be written for IPv6ExtensionHeader is the following:
 *
 * <pre>
 * class INET_API IPv6ExtensionHeader : public IPv6ExtensionHeader_Base
 * {
 *   public:
 *     IPv6ExtensionHeader() : IPv6ExtensionHeader_Base() {}
 *     IPv6ExtensionHeader(const IPv6ExtensionHeader& other) : IPv6ExtensionHeader_Base() {operator=(other);}
 *     IPv6ExtensionHeader& operator=(const IPv6ExtensionHeader& other) {IPv6ExtensionHeader_Base::operator=(other); return *this;}
 *     virtual IPv6ExtensionHeader *dup() const {return new IPv6ExtensionHeader(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IPv6ExtensionHeader_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IPv6ExtensionHeader);
 * </pre>
 */
class INET_API IPv6ExtensionHeader_Base : public ::cObject
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IPv6ExtensionHeader_Base&);
    // make constructors protected to avoid instantiation
    IPv6ExtensionHeader_Base();
    IPv6ExtensionHeader_Base(const IPv6ExtensionHeader_Base& other);
    // make assignment operator protected to force the user override it
    IPv6ExtensionHeader_Base& operator=(const IPv6ExtensionHeader_Base& other);

  public:
    virtual ~IPv6ExtensionHeader_Base();
    virtual IPv6ExtensionHeader_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class IPv6ExtensionHeader");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};


#endif // _IPV6DATAGRAM_M_H_
