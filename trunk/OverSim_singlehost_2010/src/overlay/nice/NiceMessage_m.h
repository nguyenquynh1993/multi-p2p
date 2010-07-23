//
// Generated file, do not edit! Created by opp_msgc 4.1 from overlay/nice/NiceMessage.msg.
//

#ifndef _NICEMESSAGE_M_H_
#define _NICEMESSAGE_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0401
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include <CommonMessages_m.h>
#include <NodeHandle.h>
	
#define TRANSPORTADDRESS_L (IPADDR_L + UDPPORT_L)

static const int NICECOMMAND_L = 8;
static const int LAYER_L = 16;
static const int INT_L = 32;
static const int SIMTIME_L = 32;
static const int BOOL_L = 8;
static const int DOUBLE_L = 64;
static const int SHORT_L = 16;
	
#define NICEMESSAGE_L(msg) (BASEOVERLAY_L(msg) + NICECOMMAND_L + TRANSPORTADDRESS_L + LAYER_L)
#define NICEMEMBERMESSAGE_L(msg) (NICEMESSAGE_L(msg) + (msg->getMembersArraySize() * TRANSPORTADDRESS_L))
#define NICECLUSTERMERGE_L(msg) (NICEMEMBERMESSAGE_L(msg) + TRANSPORTADDRESS_L)
#define NICEHEARTBEAT_L(msg) (NICEMEMBERMESSAGE_L(msg) + (msg->getDistancesArraySize() * SIMTIME_L) + INT_L + INT_L + SIMTIME_L + INT_L)
#define NICELEADERHEARTBEAT_L(msg) (NICEHEARTBEAT_L(msg) + TRANSPORTADDRESS_L + (msg->getSupercluster_membersArraySize() * TRANSPORTADDRESS_L) + INT_L)
#define NICEMULTICAST_L(msg) (NICEMESSAGE_L(msg) + TRANSPORTADDRESS_L + DOUBLE_L + INT_L + INT_L)
// }}



/**
 * Enum generated from <tt>overlay/nice/NiceMessage.msg</tt> by opp_msgc.
 * <pre>
 * enum NICECommand
 * {
 *     NICE_QUERY = 0; 
 *     NICE_QUERY_RESPONSE = 1; 
 *     NICE_JOIN_CLUSTER = 2; 
 *     NICE_HEARTBEAT = 3; 
 *     NICE_LEADERHEARTBEAT = 4; 
 *     NICE_LEADERTRANSFER = 5; 
 *     NICE_JOINEVAL = 6; 
 *     NICE_JOINEVAL_RESPONSE = 7; 
 *     NICE_REMOVE = 8; 
 *     NICE_PING_PROBE = 9; 
 *     NICE_PING_PROBE_RESPONSE = 10; 
 *     NICE_CLUSTER_MERGE_REQUEST = 11; 
 *     NICE_PEER_TEMPORARY = 12; 
 *     NICE_PEER_TEMPORARY_RELEASE = 13; 
 *     NICE_POLL_RP = 14; 
 *     NICE_POLL_RP_RESPONSE = 15; 
 *     NICE_FORCE_MERGE = 16; 
 *     NICE_MULTICAST = 17; 
 *     
 *     NICE_RP_NOTIFY = 18; 
 * }
 * </pre>
 */
enum NICECommand {
    NICE_QUERY = 0,
    NICE_QUERY_RESPONSE = 1,
    NICE_JOIN_CLUSTER = 2,
    NICE_HEARTBEAT = 3,
    NICE_LEADERHEARTBEAT = 4,
    NICE_LEADERTRANSFER = 5,
    NICE_JOINEVAL = 6,
    NICE_JOINEVAL_RESPONSE = 7,
    NICE_REMOVE = 8,
    NICE_PING_PROBE = 9,
    NICE_PING_PROBE_RESPONSE = 10,
    NICE_CLUSTER_MERGE_REQUEST = 11,
    NICE_PEER_TEMPORARY = 12,
    NICE_PEER_TEMPORARY_RELEASE = 13,
    NICE_POLL_RP = 14,
    NICE_POLL_RP_RESPONSE = 15,
    NICE_FORCE_MERGE = 16,
    NICE_MULTICAST = 17,
    NICE_RP_NOTIFY = 18
};

/**
 * Class generated from <tt>overlay/nice/NiceMessage.msg</tt> by opp_msgc.
 * <pre>
 * message NiceMessage extends BaseOverlayMessage
 * {
 *     int command enum(NICECommand);
 *     TransportAddress srcNode;
 *     short layer;
 * }
 * </pre>
 */
class NiceMessage : public ::BaseOverlayMessage
{
  protected:
    int command_var;
    ::TransportAddress srcNode_var;
    short layer_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NiceMessage&);

  public:
    NiceMessage(const char *name=NULL, int kind=0);
    NiceMessage(const NiceMessage& other);
    virtual ~NiceMessage();
    NiceMessage& operator=(const NiceMessage& other);
    virtual NiceMessage *dup() const {return new NiceMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getCommand() const;
    virtual void setCommand(int command_var);
    virtual TransportAddress& getSrcNode();
    virtual const TransportAddress& getSrcNode() const {return const_cast<NiceMessage*>(this)->getSrcNode();}
    virtual void setSrcNode(const TransportAddress& srcNode_var);
    virtual short getLayer() const;
    virtual void setLayer(short layer_var);
};

inline void doPacking(cCommBuffer *b, NiceMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NiceMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/nice/NiceMessage.msg</tt> by opp_msgc.
 * <pre>
 * message NiceMemberMessage extends NiceMessage
 * {
 *     TransportAddress members[];
 * }
 * </pre>
 */
class NiceMemberMessage : public ::NiceMessage
{
  protected:
    ::TransportAddress *members_var; // array ptr
    unsigned int members_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NiceMemberMessage&);

  public:
    NiceMemberMessage(const char *name=NULL, int kind=0);
    NiceMemberMessage(const NiceMemberMessage& other);
    virtual ~NiceMemberMessage();
    NiceMemberMessage& operator=(const NiceMemberMessage& other);
    virtual NiceMemberMessage *dup() const {return new NiceMemberMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setMembersArraySize(unsigned int size);
    virtual unsigned int getMembersArraySize() const;
    virtual TransportAddress& getMembers(unsigned int k);
    virtual const TransportAddress& getMembers(unsigned int k) const {return const_cast<NiceMemberMessage*>(this)->getMembers(k);}
    virtual void setMembers(unsigned int k, const TransportAddress& members_var);
};

inline void doPacking(cCommBuffer *b, NiceMemberMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NiceMemberMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/nice/NiceMessage.msg</tt> by opp_msgc.
 * <pre>
 * message NiceClusterMerge extends NiceMemberMessage
 * {
 *     TransportAddress newClusterLeader;
 * }
 * </pre>
 */
class NiceClusterMerge : public ::NiceMemberMessage
{
  protected:
    ::TransportAddress newClusterLeader_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NiceClusterMerge&);

  public:
    NiceClusterMerge(const char *name=NULL, int kind=0);
    NiceClusterMerge(const NiceClusterMerge& other);
    virtual ~NiceClusterMerge();
    NiceClusterMerge& operator=(const NiceClusterMerge& other);
    virtual NiceClusterMerge *dup() const {return new NiceClusterMerge(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual TransportAddress& getNewClusterLeader();
    virtual const TransportAddress& getNewClusterLeader() const {return const_cast<NiceClusterMerge*>(this)->getNewClusterLeader();}
    virtual void setNewClusterLeader(const TransportAddress& newClusterLeader_var);
};

inline void doPacking(cCommBuffer *b, NiceClusterMerge& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NiceClusterMerge& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/nice/NiceMessage.msg</tt> by opp_msgc.
 * <pre>
 * message NiceHeartbeat extends NiceMemberMessage
 * {
 *     unsigned int seqNo;
 *     unsigned int seqRspNo;
 *     double hb_delay;
 *     double distances[];
 *     double one_hop_distance;
 *     unsigned int sublayermembers;
 * }
 * </pre>
 */
class NiceHeartbeat : public ::NiceMemberMessage
{
  protected:
    unsigned int seqNo_var;
    unsigned int seqRspNo_var;
    double hb_delay_var;
    double *distances_var; // array ptr
    unsigned int distances_arraysize;
    double one_hop_distance_var;
    unsigned int sublayermembers_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NiceHeartbeat&);

  public:
    NiceHeartbeat(const char *name=NULL, int kind=0);
    NiceHeartbeat(const NiceHeartbeat& other);
    virtual ~NiceHeartbeat();
    NiceHeartbeat& operator=(const NiceHeartbeat& other);
    virtual NiceHeartbeat *dup() const {return new NiceHeartbeat(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getSeqNo() const;
    virtual void setSeqNo(unsigned int seqNo_var);
    virtual unsigned int getSeqRspNo() const;
    virtual void setSeqRspNo(unsigned int seqRspNo_var);
    virtual double getHb_delay() const;
    virtual void setHb_delay(double hb_delay_var);
    virtual void setDistancesArraySize(unsigned int size);
    virtual unsigned int getDistancesArraySize() const;
    virtual double getDistances(unsigned int k) const;
    virtual void setDistances(unsigned int k, double distances_var);
    virtual double getOne_hop_distance() const;
    virtual void setOne_hop_distance(double one_hop_distance_var);
    virtual unsigned int getSublayermembers() const;
    virtual void setSublayermembers(unsigned int sublayermembers_var);
};

inline void doPacking(cCommBuffer *b, NiceHeartbeat& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NiceHeartbeat& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/nice/NiceMessage.msg</tt> by opp_msgc.
 * <pre>
 * message NiceLeaderHeartbeat extends NiceHeartbeat
 * {
 *     TransportAddress supercluster_leader;
 *     TransportAddress supercluster_members[];
 *     unsigned int k;
 *     unsigned int sc_tolerance;
 * }
 * </pre>
 */
class NiceLeaderHeartbeat : public ::NiceHeartbeat
{
  protected:
    ::TransportAddress supercluster_leader_var;
    ::TransportAddress *supercluster_members_var; // array ptr
    unsigned int supercluster_members_arraysize;
    unsigned int k_var;
    unsigned int sc_tolerance_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NiceLeaderHeartbeat&);

  public:
    NiceLeaderHeartbeat(const char *name=NULL, int kind=0);
    NiceLeaderHeartbeat(const NiceLeaderHeartbeat& other);
    virtual ~NiceLeaderHeartbeat();
    NiceLeaderHeartbeat& operator=(const NiceLeaderHeartbeat& other);
    virtual NiceLeaderHeartbeat *dup() const {return new NiceLeaderHeartbeat(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual TransportAddress& getSupercluster_leader();
    virtual const TransportAddress& getSupercluster_leader() const {return const_cast<NiceLeaderHeartbeat*>(this)->getSupercluster_leader();}
    virtual void setSupercluster_leader(const TransportAddress& supercluster_leader_var);
    virtual void setSupercluster_membersArraySize(unsigned int size);
    virtual unsigned int getSupercluster_membersArraySize() const;
    virtual TransportAddress& getSupercluster_members(unsigned int k);
    virtual const TransportAddress& getSupercluster_members(unsigned int k) const {return const_cast<NiceLeaderHeartbeat*>(this)->getSupercluster_members(k);}
    virtual void setSupercluster_members(unsigned int k, const TransportAddress& supercluster_members_var);
    virtual unsigned int getK() const;
    virtual void setK(unsigned int k_var);
    virtual unsigned int getSc_tolerance() const;
    virtual void setSc_tolerance(unsigned int sc_tolerance_var);
};

inline void doPacking(cCommBuffer *b, NiceLeaderHeartbeat& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NiceLeaderHeartbeat& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>overlay/nice/NiceMessage.msg</tt> by opp_msgc.
 * <pre>
 * message NiceMulticastMessage extends BaseOverlayMessage
 * {
 *     TransportAddress lastHop;
 *     double sendTime;
 *     unsigned int seqNo;
 *     unsigned int hopCount;
 *     
 *     double bigKD;
 *     double lastHopKd;
 *     int nodeID;
 *     int lastHopID;
 *     
 *     int command enum(NICECommand);    
 *     TransportAddress srcNode;
 *     short layer;
 * }
 * </pre>
 */
class NiceMulticastMessage : public ::BaseOverlayMessage
{
  protected:
    ::TransportAddress lastHop_var;
    double sendTime_var;
    unsigned int seqNo_var;
    unsigned int hopCount_var;
    double bigKD_var;
    double lastHopKd_var;
    int nodeID_var;
    int lastHopID_var;
    int command_var;
    ::TransportAddress srcNode_var;
    short layer_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const NiceMulticastMessage&);

  public:
    NiceMulticastMessage(const char *name=NULL, int kind=0);
    NiceMulticastMessage(const NiceMulticastMessage& other);
    virtual ~NiceMulticastMessage();
    NiceMulticastMessage& operator=(const NiceMulticastMessage& other);
    virtual NiceMulticastMessage *dup() const {return new NiceMulticastMessage(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual TransportAddress& getLastHop();
    virtual const TransportAddress& getLastHop() const {return const_cast<NiceMulticastMessage*>(this)->getLastHop();}
    virtual void setLastHop(const TransportAddress& lastHop_var);
    virtual double getSendTime() const;
    virtual void setSendTime(double sendTime_var);
    virtual unsigned int getSeqNo() const;
    virtual void setSeqNo(unsigned int seqNo_var);
    virtual unsigned int getHopCount() const;
    virtual void setHopCount(unsigned int hopCount_var);
    virtual double getBigKD() const;
    virtual void setBigKD(double bigKD_var);
    virtual double getLastHopKd() const;
    virtual void setLastHopKd(double lastHopKd_var);
    virtual int getNodeID() const;
    virtual void setNodeID(int nodeID_var);
    virtual int getLastHopID() const;
    virtual void setLastHopID(int lastHopID_var);
    virtual int getCommand() const;
    virtual void setCommand(int command_var);
    virtual TransportAddress& getSrcNode();
    virtual const TransportAddress& getSrcNode() const {return const_cast<NiceMulticastMessage*>(this)->getSrcNode();}
    virtual void setSrcNode(const TransportAddress& srcNode_var);
    virtual short getLayer() const;
    virtual void setLayer(short layer_var);
};

inline void doPacking(cCommBuffer *b, NiceMulticastMessage& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, NiceMulticastMessage& obj) {obj.parsimUnpack(b);}


#endif // _NICEMESSAGE_M_H_
