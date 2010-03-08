//
// Generated file, do not edit! Created by opp_msgc 4.0 from linklayer/mf80211/macLayer/MacPkt.msg.
//

#ifndef _MACPKT_M_H_
#define _MACPKT_M_H_

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

#include "MACAddress.h"
// end cplusplus



/**
 * Class generated from <tt>linklayer/mf80211/macLayer/MacPkt.msg</tt> by opp_msgc.
 * <pre>
 * packet MacPkt
 * {
 *     MACAddress destAddr; 
 *     MACAddress srcAddr; 
 *     int channelId = 1; 
 * }
 * </pre>
 */
class INET_API MacPkt : public cPacket
{
  protected:
    MACAddress destAddr_var;
    MACAddress srcAddr_var;
    int channelId_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const MacPkt&);

  public:
    MacPkt(const char *name=NULL, int kind=0);
    MacPkt(const MacPkt& other);
    virtual ~MacPkt();
    MacPkt& operator=(const MacPkt& other);
    virtual MacPkt *dup() const {return new MacPkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual MACAddress& getDestAddr();
    virtual const MACAddress& getDestAddr() const {return const_cast<MacPkt*>(this)->getDestAddr();}
    virtual void setDestAddr(const MACAddress& destAddr_var);
    virtual MACAddress& getSrcAddr();
    virtual const MACAddress& getSrcAddr() const {return const_cast<MacPkt*>(this)->getSrcAddr();}
    virtual void setSrcAddr(const MACAddress& srcAddr_var);
    virtual int getChannelId() const;
    virtual void setChannelId(int channelId_var);
};

inline void doPacking(cCommBuffer *b, MacPkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, MacPkt& obj) {obj.parsimUnpack(b);}


#endif // _MACPKT_M_H_
