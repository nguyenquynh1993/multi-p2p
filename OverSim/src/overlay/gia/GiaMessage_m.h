//
// Generated file, do not edit! Created by opp_msgc 4.0 from overlay/gia/GiaMessage.msg.
//

#ifndef _GIAMESSAGE_M_H_
#define _GIAMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0400
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{ ... }} section:

#include <IPvXAddress.h>
#include <OverlayKey.h>
#include <GiaNode.h>
#include <NodeHandle.h>
#include <CommonMessages_m.h>


static const int GIACOMMAND_L = 8;
static const int CAPACITY_L = 32;
static const int DEGREE_L = 16;
static const int TOKENNR_L = 16;
static const int MAXRESPONSES_L = 16;
#define GIANODE_L (CAPACITY_L + DEGREE_L + NODEHANDLE_L + 2 * TOKENNR_L)

#define GIA_L(msg) (BASEOVERLAY_L(msg) + NODEHANDLE_L + HOPCOUNT_L + \
	            GIACOMMAND_L + CAPACITY_L + DEGREE_L)
#define GIANEIGHBOR_L(msg) (GIA_L(msg) + msg->getNeighborsArraySize() * GIANODE_L)
#define TOKEN_L(msg) (GIA_L(msg) + 2 * TOKENNR_L)
#define GIAID_L(msg) (GIA_L(msg) + KEY_L)
#define GIAROUTE_L(msg) (GIAID_L(msg) + KEY_L + IPADDR_L + UDPPORT_L)
#define KEYLIST_L(msg) (GIA_L(msg) + (msg->getKeysArraySize() * KEY_L))
#define SEARCH_L(msg) (GIAID_L(msg) + KEY_L + MAXRESPONSES_L + \
	               msg->getReversePathArraySize() * KEY_L + \
		       msg->getFoundNodeArraySize() * KEY_L)
#define SEARCHRESPONSE_L(msg) (GIAID_L(msg) + KEY_L + msg->getReversePathArraySize() * KEY_L + \
	                       GIANODE_L + HOPCOUNT_L)
// end cplusplus



/**
 * Enum generated from <tt>overlay/gia/GiaMessage.msg</tt> by opp_msgc.
 * <pre>
 * enum GIACommand
 * {
 *     JOIN_REQUEST = 0;    
 *     JOIN_RESPONSE = 1;    
 *     JOIN_ACK = 2;    
 *     JOIN_DENY = 3;    
 *     DISCONNECT = 4;    
 *     ROUTE = 5;    
 *     SEARCH = 6;    
 *     ANSWER = 7;    
 *     UPDATE = 8;    
 *     TOKEN = 9;    
 *     KEYLIST= 10;    
 * };
 * </pre>
 */
enum GIACommand {
    JOIN_REQUEST = 0,
    JOIN_RESPONSE = 1,
    JOIN_ACK = 2,
    JOIN_DENY = 3,
    DISCONNECT = 4,
    ROUTE = 5,
    SEARCH = 6,
    ANSWER = 7,
    UPDATE = 8,
    TOKEN = 9,
    KEYLIST = 10
};

/**
 * Class generated from <tt>overlay/gia/GiaMessage.msg</tt> by opp_msgc.
 * <pre>
 * message GiaMessage extends BaseOverlayMessage
 * {
 *        NodeHandle srcNode;    
 *        int hopCount = 0;    
 *        int command enum(GIACommand);    
 *        double srcCapacity;    
 *        int srcDegree;    
 * };
 * </pre>
 */
class GiaMessage : public BaseOverlayMessage
{
  protected:
    NodeHandle srcNode_var;
    int hopCount_var;
    int command_var;
    double srcCapacity_var;
    int srcDegree_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GiaMessage&);

  public:
    GiaMessage(const char *name=NULL, int kind=0);
    GiaMessage(const GiaMessage& other);
    virtual ~GiaMessage();
    GiaMessage& operator=(const GiaMessage& other);
    virtual GiaMessage *dup() const {return new GiaMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual NodeHandle& getSrcNode();
    virtual const NodeHandle& getSrcNode() const {return const_cast<GiaMessage*>(this)->getSrcNode();}
    virtual void setSrcNode(const NodeHandle& srcNode_var);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount_var);
    virtual int getCommand() const;
    virtual void setCommand(int command_var);
    virtual double getSrcCapacity() const;
    virtual void setSrcCapacity(double srcCapacity_var);
    virtual int getSrcDegree() const;
    virtual void setSrcDegree(int srcDegree_var);
};

inline void doPacking(cCommBuffer *b, GiaMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GiaMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/gia/GiaMessage.msg</tt> by opp_msgc.
 * <pre>
 * message GiaNeighborMessage extends GiaMessage
 * {
 *         GiaNode neighbors[];
 * };
 * </pre>
 */
class GiaNeighborMessage : public GiaMessage
{
  protected:
    GiaNode *neighbors_var; // array ptr
    unsigned int neighbors_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GiaNeighborMessage&);

  public:
    GiaNeighborMessage(const char *name=NULL, int kind=0);
    GiaNeighborMessage(const GiaNeighborMessage& other);
    virtual ~GiaNeighborMessage();
    GiaNeighborMessage& operator=(const GiaNeighborMessage& other);
    virtual GiaNeighborMessage *dup() const {return new GiaNeighborMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setNeighborsArraySize(unsigned int size);
    virtual unsigned int getNeighborsArraySize() const;
    virtual GiaNode& getNeighbors(unsigned int k);
    virtual const GiaNode& getNeighbors(unsigned int k) const {return const_cast<GiaNeighborMessage*>(this)->getNeighbors(k);}
    virtual void setNeighbors(unsigned int k, const GiaNode& neighbors_var);
};

inline void doPacking(cCommBuffer *b, GiaNeighborMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GiaNeighborMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/gia/GiaMessage.msg</tt> by opp_msgc.
 * <pre>
 * message TokenMessage extends GiaMessage
 * {
 *        int srcTokenNr;    
 *        int dstTokenNr;    
 * };
 * </pre>
 */
class TokenMessage : public GiaMessage
{
  protected:
    int srcTokenNr_var;
    int dstTokenNr_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TokenMessage&);

  public:
    TokenMessage(const char *name=NULL, int kind=0);
    TokenMessage(const TokenMessage& other);
    virtual ~TokenMessage();
    TokenMessage& operator=(const TokenMessage& other);
    virtual TokenMessage *dup() const {return new TokenMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getSrcTokenNr() const;
    virtual void setSrcTokenNr(int srcTokenNr_var);
    virtual int getDstTokenNr() const;
    virtual void setDstTokenNr(int dstTokenNr_var);
};

inline void doPacking(cCommBuffer *b, TokenMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TokenMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/gia/GiaMessage.msg</tt> by opp_msgc.
 * <pre>
 * message GiaIDMessage extends GiaMessage
 * {
 *         OverlayKey destKey;    
 *         OverlayKey ID;    
 * };
 * </pre>
 */
class GiaIDMessage : public GiaMessage
{
  protected:
    OverlayKey destKey_var;
    OverlayKey ID_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GiaIDMessage&);

  public:
    GiaIDMessage(const char *name=NULL, int kind=0);
    GiaIDMessage(const GiaIDMessage& other);
    virtual ~GiaIDMessage();
    GiaIDMessage& operator=(const GiaIDMessage& other);
    virtual GiaIDMessage *dup() const {return new GiaIDMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OverlayKey& getDestKey();
    virtual const OverlayKey& getDestKey() const {return const_cast<GiaIDMessage*>(this)->getDestKey();}
    virtual void setDestKey(const OverlayKey& destKey_var);
    virtual OverlayKey& getID();
    virtual const OverlayKey& getID() const {return const_cast<GiaIDMessage*>(this)->getID();}
    virtual void setID(const OverlayKey& ID_var);
};

inline void doPacking(cCommBuffer *b, GiaIDMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GiaIDMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/gia/GiaMessage.msg</tt> by opp_msgc.
 * <pre>
 * message GiaRouteMessage extends GiaIDMessage
 * {
 *         OverlayKey originatorKey;    
 *         IPvXAddress originatorIP;    
 *         int originatorPort;    
 * };
 * </pre>
 */
class GiaRouteMessage : public GiaIDMessage
{
  protected:
    OverlayKey originatorKey_var;
    IPvXAddress originatorIP_var;
    int originatorPort_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GiaRouteMessage&);

  public:
    GiaRouteMessage(const char *name=NULL, int kind=0);
    GiaRouteMessage(const GiaRouteMessage& other);
    virtual ~GiaRouteMessage();
    GiaRouteMessage& operator=(const GiaRouteMessage& other);
    virtual GiaRouteMessage *dup() const {return new GiaRouteMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OverlayKey& getOriginatorKey();
    virtual const OverlayKey& getOriginatorKey() const {return const_cast<GiaRouteMessage*>(this)->getOriginatorKey();}
    virtual void setOriginatorKey(const OverlayKey& originatorKey_var);
    virtual IPvXAddress& getOriginatorIP();
    virtual const IPvXAddress& getOriginatorIP() const {return const_cast<GiaRouteMessage*>(this)->getOriginatorIP();}
    virtual void setOriginatorIP(const IPvXAddress& originatorIP_var);
    virtual int getOriginatorPort() const;
    virtual void setOriginatorPort(int originatorPort_var);
};

inline void doPacking(cCommBuffer *b, GiaRouteMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, GiaRouteMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/gia/GiaMessage.msg</tt> by opp_msgc.
 * <pre>
 * message KeyListMessage extends GiaMessage
 * {
 *        OverlayKey keys[];    
 * };
 * </pre>
 */
class KeyListMessage : public GiaMessage
{
  protected:
    OverlayKey *keys_var; // array ptr
    unsigned int keys_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const KeyListMessage&);

  public:
    KeyListMessage(const char *name=NULL, int kind=0);
    KeyListMessage(const KeyListMessage& other);
    virtual ~KeyListMessage();
    KeyListMessage& operator=(const KeyListMessage& other);
    virtual KeyListMessage *dup() const {return new KeyListMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setKeysArraySize(unsigned int size);
    virtual unsigned int getKeysArraySize() const;
    virtual OverlayKey& getKeys(unsigned int k);
    virtual const OverlayKey& getKeys(unsigned int k) const {return const_cast<KeyListMessage*>(this)->getKeys(k);}
    virtual void setKeys(unsigned int k, const OverlayKey& keys_var);
};

inline void doPacking(cCommBuffer *b, KeyListMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, KeyListMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/gia/GiaMessage.msg</tt> by opp_msgc.
 * <pre>
 * message SearchMessage extends GiaIDMessage
 * {
 *         OverlayKey searchKey;    
 *         int maxResponses;    
 *         OverlayKey reversePath[];    
 *         OverlayKey foundNode[];    
 * };
 * </pre>
 */
class SearchMessage : public GiaIDMessage
{
  protected:
    OverlayKey searchKey_var;
    int maxResponses_var;
    OverlayKey *reversePath_var; // array ptr
    unsigned int reversePath_arraysize;
    OverlayKey *foundNode_var; // array ptr
    unsigned int foundNode_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SearchMessage&);

  public:
    SearchMessage(const char *name=NULL, int kind=0);
    SearchMessage(const SearchMessage& other);
    virtual ~SearchMessage();
    SearchMessage& operator=(const SearchMessage& other);
    virtual SearchMessage *dup() const {return new SearchMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OverlayKey& getSearchKey();
    virtual const OverlayKey& getSearchKey() const {return const_cast<SearchMessage*>(this)->getSearchKey();}
    virtual void setSearchKey(const OverlayKey& searchKey_var);
    virtual int getMaxResponses() const;
    virtual void setMaxResponses(int maxResponses_var);
    virtual void setReversePathArraySize(unsigned int size);
    virtual unsigned int getReversePathArraySize() const;
    virtual OverlayKey& getReversePath(unsigned int k);
    virtual const OverlayKey& getReversePath(unsigned int k) const {return const_cast<SearchMessage*>(this)->getReversePath(k);}
    virtual void setReversePath(unsigned int k, const OverlayKey& reversePath_var);
    virtual void setFoundNodeArraySize(unsigned int size);
    virtual unsigned int getFoundNodeArraySize() const;
    virtual OverlayKey& getFoundNode(unsigned int k);
    virtual const OverlayKey& getFoundNode(unsigned int k) const {return const_cast<SearchMessage*>(this)->getFoundNode(k);}
    virtual void setFoundNode(unsigned int k, const OverlayKey& foundNode_var);
};

inline void doPacking(cCommBuffer *b, SearchMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SearchMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/gia/GiaMessage.msg</tt> by opp_msgc.
 * <pre>
 * message SearchResponseMessage extends GiaIDMessage
 * {
 *        OverlayKey searchKey;	    
 *        OverlayKey reversePath[];    
 *        GiaNode foundNode;    
 *        int searchHopCount;    
 * };
 * </pre>
 */
class SearchResponseMessage : public GiaIDMessage
{
  protected:
    OverlayKey searchKey_var;
    OverlayKey *reversePath_var; // array ptr
    unsigned int reversePath_arraysize;
    GiaNode foundNode_var;
    int searchHopCount_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const SearchResponseMessage&);

  public:
    SearchResponseMessage(const char *name=NULL, int kind=0);
    SearchResponseMessage(const SearchResponseMessage& other);
    virtual ~SearchResponseMessage();
    SearchResponseMessage& operator=(const SearchResponseMessage& other);
    virtual SearchResponseMessage *dup() const {return new SearchResponseMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OverlayKey& getSearchKey();
    virtual const OverlayKey& getSearchKey() const {return const_cast<SearchResponseMessage*>(this)->getSearchKey();}
    virtual void setSearchKey(const OverlayKey& searchKey_var);
    virtual void setReversePathArraySize(unsigned int size);
    virtual unsigned int getReversePathArraySize() const;
    virtual OverlayKey& getReversePath(unsigned int k);
    virtual const OverlayKey& getReversePath(unsigned int k) const {return const_cast<SearchResponseMessage*>(this)->getReversePath(k);}
    virtual void setReversePath(unsigned int k, const OverlayKey& reversePath_var);
    virtual GiaNode& getFoundNode();
    virtual const GiaNode& getFoundNode() const {return const_cast<SearchResponseMessage*>(this)->getFoundNode();}
    virtual void setFoundNode(const GiaNode& foundNode_var);
    virtual int getSearchHopCount() const;
    virtual void setSearchHopCount(int searchHopCount_var);
};

inline void doPacking(cCommBuffer *b, SearchResponseMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, SearchResponseMessage& obj) {obj.parsimUnpack(b);}


#endif // _GIAMESSAGE_M_H_