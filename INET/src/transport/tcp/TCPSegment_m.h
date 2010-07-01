//
// Generated file, do not edit! Created by opp_msgc 4.1 from transport/tcp/TCPSegment.msg.
//

#ifndef _TCPSEGMENT_M_H_
#define _TCPSEGMENT_M_H_

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
#include "INETDefs.h"

#define TCP_HEADER_OCTETS  20    

typedef cPacket *cPacketPtr;

inline std::ostream& operator<<(std::ostream& os, cPacketPtr msg) {
    return os << "(" << msg->getClassName() << ") " << msg->getName() << ": " << msg->info();
}

inline void doPacking(cCommBuffer *b, cPacketPtr& msg) {msg->parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, cPacketPtr& msg) {msg->parsimUnpack(b);}
// }}



/**
 * Struct generated from transport/tcp/TCPSegment.msg by opp_msgc.
 */
struct INET_API TCPPayloadMessage
{
    TCPPayloadMessage();
    unsigned int endSequenceNo;
    ::cPacketPtr msg;
};

void INET_API doPacking(cCommBuffer *b, TCPPayloadMessage& a);
void INET_API doUnpacking(cCommBuffer *b, TCPPayloadMessage& a);

/**
 * Class generated from <tt>transport/tcp/TCPSegment.msg</tt> by opp_msgc.
 * <pre>
 * packet TCPSegment
 * {
 *     @customize(true);
 *     
 *     short srcPort;
 * 
 *     
 *     short destPort;
 * 
 *     
 *     
 *     
 *     
 *     unsigned int sequenceNo;
 * 
 *     
 *     
 *     
 *     unsigned int ackNo;
 * 
 *     bool urgBit; 
 *     bool ackBit; 
 *     bool pshBit; 
 *     bool rstBit; 
 *     bool synBit; 
 *     bool finBit; 
 * 
 *     
 *     
 *     
 *     unsigned long window;
 * 
 *     
 *     
 *     
 *     
 *     
 *     unsigned long urgentPointer;
 * 
 *     
 *     
 *     
 *     
 *     int payloadLength;
 * 
 *     
 *     
 *     
 *     
 *     
 *     
 *     
 *     
 *     
 *     abstract TCPPayloadMessage payload[];
 * }
 * </pre>
 *
 * TCPSegment_Base is only useful if it gets subclassed, and TCPSegment is derived from it.
 * The minimum code to be written for TCPSegment is the following:
 *
 * <pre>
 * class INET_API TCPSegment : public TCPSegment_Base
 * {
 *   public:
 *     TCPSegment(const char *name=NULL, int kind=0) : TCPSegment_Base(name,kind) {}
 *     TCPSegment(const TCPSegment& other) : TCPSegment_Base(other.getName()) {operator=(other);}
 *     TCPSegment& operator=(const TCPSegment& other) {TCPSegment_Base::operator=(other); return *this;}
 *     virtual TCPSegment *dup() const {return new TCPSegment(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from TCPSegment_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(TCPSegment);
 * </pre>
 */
class INET_API TCPSegment_Base : public ::cPacket
{
  protected:
    short srcPort_var;
    short destPort_var;
    unsigned int sequenceNo_var;
    unsigned int ackNo_var;
    bool urgBit_var;
    bool ackBit_var;
    bool pshBit_var;
    bool rstBit_var;
    bool synBit_var;
    bool finBit_var;
    unsigned long window_var;
    unsigned long urgentPointer_var;
    int payloadLength_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TCPSegment_Base&);
    // make constructors protected to avoid instantiation
    TCPSegment_Base(const char *name=NULL, int kind=0);
    TCPSegment_Base(const TCPSegment_Base& other);
    // make assignment operator protected to force the user override it
    TCPSegment_Base& operator=(const TCPSegment_Base& other);

  public:
    virtual ~TCPSegment_Base();
    virtual TCPSegment_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class TCPSegment");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual short getSrcPort() const;
    virtual void setSrcPort(short srcPort_var);
    virtual short getDestPort() const;
    virtual void setDestPort(short destPort_var);
    virtual unsigned int getSequenceNo() const;
    virtual void setSequenceNo(unsigned int sequenceNo_var);
    virtual unsigned int getAckNo() const;
    virtual void setAckNo(unsigned int ackNo_var);
    virtual bool getUrgBit() const;
    virtual void setUrgBit(bool urgBit_var);
    virtual bool getAckBit() const;
    virtual void setAckBit(bool ackBit_var);
    virtual bool getPshBit() const;
    virtual void setPshBit(bool pshBit_var);
    virtual bool getRstBit() const;
    virtual void setRstBit(bool rstBit_var);
    virtual bool getSynBit() const;
    virtual void setSynBit(bool synBit_var);
    virtual bool getFinBit() const;
    virtual void setFinBit(bool finBit_var);
    virtual unsigned long getWindow() const;
    virtual void setWindow(unsigned long window_var);
    virtual unsigned long getUrgentPointer() const;
    virtual void setUrgentPointer(unsigned long urgentPointer_var);
    virtual int getPayloadLength() const;
    virtual void setPayloadLength(int payloadLength_var);
    virtual void setPayloadArraySize(unsigned int size) = 0;
    virtual unsigned int getPayloadArraySize() const = 0;
    virtual TCPPayloadMessage& getPayload(unsigned int k) = 0;
    virtual const TCPPayloadMessage& getPayload(unsigned int k) const {return const_cast<TCPSegment_Base*>(this)->getPayload(k);}
    virtual void setPayload(unsigned int k, const TCPPayloadMessage& payload_var) = 0;
};


#endif // _TCPSEGMENT_M_H_
