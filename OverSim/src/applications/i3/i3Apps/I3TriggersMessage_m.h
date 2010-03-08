//
// Generated file, do not edit! Created by opp_msgc 4.0 from applications/i3/i3Apps/I3TriggersMessage.msg.
//

#ifndef _I3TRIGGERSMESSAGE_M_H_
#define _I3TRIGGERSMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0400
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{ ... }} section:

#include "I3Identifier.h"
// end cplusplus



/**
 * Class generated from <tt>applications/i3/i3Apps/I3TriggersMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet TriggersHandshakeMsg
 * {
 * 		int value;
 * 		I3Identifier triggerId;
 * }
 * </pre>
 */
class TriggersHandshakeMsg : public cPacket
{
  protected:
    int value_var;
    I3Identifier triggerId_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TriggersHandshakeMsg&);

  public:
    TriggersHandshakeMsg(const char *name=NULL, int kind=0);
    TriggersHandshakeMsg(const TriggersHandshakeMsg& other);
    virtual ~TriggersHandshakeMsg();
    TriggersHandshakeMsg& operator=(const TriggersHandshakeMsg& other);
    virtual TriggersHandshakeMsg *dup() const {return new TriggersHandshakeMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getValue() const;
    virtual void setValue(int value_var);
    virtual I3Identifier& getTriggerId();
    virtual const I3Identifier& getTriggerId() const {return const_cast<TriggersHandshakeMsg*>(this)->getTriggerId();}
    virtual void setTriggerId(const I3Identifier& triggerId_var);
};

inline void doPacking(cCommBuffer *b, TriggersHandshakeMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TriggersHandshakeMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>applications/i3/i3Apps/I3TriggersMessage.msg</tt> by opp_msgc.
 * <pre>
 * packet TriggersMsg
 * {
 * 		int value;
 * }
 * </pre>
 */
class TriggersMsg : public cPacket
{
  protected:
    int value_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TriggersMsg&);

  public:
    TriggersMsg(const char *name=NULL, int kind=0);
    TriggersMsg(const TriggersMsg& other);
    virtual ~TriggersMsg();
    TriggersMsg& operator=(const TriggersMsg& other);
    virtual TriggersMsg *dup() const {return new TriggersMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getValue() const;
    virtual void setValue(int value_var);
};

inline void doPacking(cCommBuffer *b, TriggersMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TriggersMsg& obj) {obj.parsimUnpack(b);}


#endif // _I3TRIGGERSMESSAGE_M_H_
