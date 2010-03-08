//
// Generated file, do not edit! Created by opp_msgc 4.0 from common/Nps.msg.
//

#ifndef _NPS_M_H_
#define _NPS_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0400
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{ ... }} section:

#include <TransportAddress.h>
#include <CommonMessages_m.h>

static const int NPSLAYER_L = 8;

#define COORDSREQCALL_L(msg) BASECALL_L(msg)
#define COORDSREQRESPONSE_L(msg) (BASERESPONSE_L(msg) + NPSLAYER_L)
// end cplusplus



/**
 * Class generated from <tt>common/Nps.msg</tt> by opp_msgc.
 * <pre>
 * packet CoordsReqCall extends BaseCallMessage
 * {
 * }
 * </pre>
 */
class CoordsReqCall : public BaseCallMessage
{
  protected:

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CoordsReqCall&);

  public:
    CoordsReqCall(const char *name=NULL, int kind=0);
    CoordsReqCall(const CoordsReqCall& other);
    virtual ~CoordsReqCall();
    CoordsReqCall& operator=(const CoordsReqCall& other);
    virtual CoordsReqCall *dup() const {return new CoordsReqCall(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};

inline void doPacking(cCommBuffer *b, CoordsReqCall& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, CoordsReqCall& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>common/Nps.msg</tt> by opp_msgc.
 * <pre>
 * packet CoordsReqResponse extends BaseResponseMessage
 * {
 *     
 *     char layer;
 * }
 * </pre>
 */
class CoordsReqResponse : public BaseResponseMessage
{
  protected:
    char layer_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CoordsReqResponse&);

  public:
    CoordsReqResponse(const char *name=NULL, int kind=0);
    CoordsReqResponse(const CoordsReqResponse& other);
    virtual ~CoordsReqResponse();
    CoordsReqResponse& operator=(const CoordsReqResponse& other);
    virtual CoordsReqResponse *dup() const {return new CoordsReqResponse(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual char getLayer() const;
    virtual void setLayer(char layer_var);
};

inline void doPacking(cCommBuffer *b, CoordsReqResponse& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, CoordsReqResponse& obj) {obj.parsimUnpack(b);}


#endif // _NPS_M_H_
