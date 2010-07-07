//
// Generated file, do not edit! Created by opp_msgc 4.1 from networklayer/ted/TED.msg.
//

#ifndef _TED_M_H_
#define _TED_M_H_

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
#include "IPAddress.h"

#define LINK_STATE_MESSAGE      1

typedef std::vector<struct TELinkStateInfo> TELinkStateInfoVector;
// }}



/**
 * Struct generated from networklayer/ted/TED.msg by opp_msgc.
 */
struct INET_API TELinkStateInfo
{
    TELinkStateInfo();
    ::IPAddress advrouter;
    ::IPAddress linkid;
    ::IPAddress local;
    ::IPAddress remote;
    double metric;
    double MaxBandwidth;
    double UnResvBandwidth[8];
    simtime_t timestamp;
    unsigned int sourceId;
    unsigned int messageId;
    bool state;
};

void INET_API doPacking(cCommBuffer *b, TELinkStateInfo& a);
void INET_API doUnpacking(cCommBuffer *b, TELinkStateInfo& a);

/**
 * Class generated from <tt>networklayer/ted/TED.msg</tt> by opp_msgc.
 * <pre>
 * class TEDChangeInfo
 * {
 *     int tedLinkIndices[];
 * }
 * </pre>
 */
class INET_API TEDChangeInfo : public ::cObject
{
  protected:
    int *tedLinkIndices_var; // array ptr
    unsigned int tedLinkIndices_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TEDChangeInfo&);

  public:
    TEDChangeInfo();
    TEDChangeInfo(const TEDChangeInfo& other);
    virtual ~TEDChangeInfo();
    TEDChangeInfo& operator=(const TEDChangeInfo& other);
    virtual TEDChangeInfo *dup() const {return new TEDChangeInfo(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setTedLinkIndicesArraySize(unsigned int size);
    virtual unsigned int getTedLinkIndicesArraySize() const;
    virtual int getTedLinkIndices(unsigned int k) const;
    virtual void setTedLinkIndices(unsigned int k, int tedLinkIndices_var);
};

inline void doPacking(cCommBuffer *b, TEDChangeInfo& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TEDChangeInfo& obj) {obj.parsimUnpack(b);}


#endif // _TED_M_H_