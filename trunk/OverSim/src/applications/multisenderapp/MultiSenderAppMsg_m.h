//
// Generated file, do not edit! Created by opp_msgc 4.1 from applications/multisenderapp/MultiSenderAppMsg.msg.
//

#ifndef _MULTISENDERAPPMSG_M_H_
#define _MULTISENDERAPPMSG_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0401
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include <TransportAddress.h>
// }}



/**
 * Enum generated from <tt>applications/multisenderapp/MultiSenderAppMsg.msg</tt> by opp_msgc.
 * <pre>
 * enum MessageType 
 * {
 *     MYMSG_PING = 1;           
 *     MYMSG_PONG = 2;           
 * }
 * </pre>
 */
enum MessageType {
    MYMSG_PING = 1,
    MYMSG_PONG = 2
};

/**
 * Class generated from <tt>applications/multisenderapp/MultiSenderAppMsg.msg</tt> by opp_msgc.
 * <pre>
 * packet MultiSenderAppMsg 
 * {
 *     int type;                        
 *     TransportAddress senderAddress;  
 *     int senderID;
 *     string data;
 *     int id;
 * }
 * </pre>
 */
class MultiSenderAppMsg : public ::cPacket
{
  protected:
    int type_var;
    ::TransportAddress senderAddress_var;
    int senderID_var;
    opp_string data_var;
    int id_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MultiSenderAppMsg&);

  public:
    MultiSenderAppMsg(const char *name=NULL, int kind=0);
    MultiSenderAppMsg(const MultiSenderAppMsg& other);
    virtual ~MultiSenderAppMsg();
    MultiSenderAppMsg& operator=(const MultiSenderAppMsg& other);
    virtual MultiSenderAppMsg *dup() const {return new MultiSenderAppMsg(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getType() const;
    virtual void setType(int type_var);
    virtual TransportAddress& getSenderAddress();
    virtual const TransportAddress& getSenderAddress() const {return const_cast<MultiSenderAppMsg*>(this)->getSenderAddress();}
    virtual void setSenderAddress(const TransportAddress& senderAddress_var);
    virtual int getSenderID() const;
    virtual void setSenderID(int senderID_var);
    virtual const char * getData() const;
    virtual void setData(const char * data_var);
    virtual int getId() const;
    virtual void setId(int id_var);
};

inline void doPacking(cCommBuffer *b, MultiSenderAppMsg& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MultiSenderAppMsg& obj) {obj.parsimUnpack(b);}


#endif // _MULTISENDERAPPMSG_M_H_
