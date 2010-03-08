//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ospfv2/OSPFPacket.msg.
//

#ifndef _OSPFPACKET_M_H_
#define _OSPFPACKET_M_H_

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

#include "IPAddress.h"
// end cplusplus



/**
 * Enum generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * enum OSPFPacketType
 * {
 * 
 *     HelloPacket = 1;
 *     DatabaseDescriptionPacket = 2;
 *     LinkStateRequestPacket = 3;
 *     LinkStateUpdatePacket = 4;
 *     LinkStateAcknowledgementPacket = 5;
 * }
 * </pre>
 */
enum OSPFPacketType {
    HelloPacket = 1,
    DatabaseDescriptionPacket = 2,
    LinkStateRequestPacket = 3,
    LinkStateUpdatePacket = 4,
    LinkStateAcknowledgementPacket = 5
};

/**
 * Enum generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * enum LSAType
 * {
 * 
 *     RouterLSAType = 1;
 *     NetworkLSAType = 2;
 *     SummaryLSA_NetworksType = 3;
 *     SummaryLSA_ASBoundaryRoutersType = 4;
 *     ASExternalLSAType = 5;
 * }
 * </pre>
 */
enum LSAType {
    RouterLSAType = 1,
    NetworkLSAType = 2,
    SummaryLSA_NetworksType = 3,
    SummaryLSA_ASBoundaryRoutersType = 4,
    ASExternalLSAType = 5
};

/**
 * Enum generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * enum LinkType
 * {
 * 
 *     PointToPointLink = 1;
 *     TransitLink = 2;
 *     StubLink = 3;
 *     VirtualLink = 4;
 * }
 * </pre>
 */
enum LinkType {
    PointToPointLink = 1,
    TransitLink = 2,
    StubLink = 3,
    VirtualLink = 4
};

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg by opp_msgc.
 */
struct INET_API OSPFOptions
{
    OSPFOptions();
    bool unused_1;
    bool E_ExternalRoutingCapability;
    bool MC_MulticastForwarding;
    bool NP_Type7LSA;
    bool EA_ForwardExternalLSAs;
    bool DC_DemandCircuits;
    bool unused_2;
    bool unused_3;
};

void INET_API doPacking(cCommBuffer *b, OSPFOptions& a);
void INET_API doUnpacking(cCommBuffer *b, OSPFOptions& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet OSPFPacket
 * {
 *     char version = 2;
 *     char type enum(OSPFPacketType) = HelloPacket;
 *     short packetLength = 0;
 * 
 *     IPAddress routerID;
 *     IPAddress areaID;
 * 
 *     short checksum = 0;
 *     short authenticationType = 0;
 *     char authentication[8];
 * }
 * </pre>
 */
class INET_API OSPFPacket : public cPacket
{
  protected:
    char version_var;
    char type_var;
    short packetLength_var;
    IPAddress routerID_var;
    IPAddress areaID_var;
    short checksum_var;
    short authenticationType_var;
    char authentication_var[8];

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFPacket&);

  public:
    OSPFPacket(const char *name=NULL, int kind=0);
    OSPFPacket(const OSPFPacket& other);
    virtual ~OSPFPacket();
    OSPFPacket& operator=(const OSPFPacket& other);
    virtual OSPFPacket *dup() const {return new OSPFPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual char getVersion() const;
    virtual void setVersion(char version_var);
    virtual char getType() const;
    virtual void setType(char type_var);
    virtual short getPacketLength() const;
    virtual void setPacketLength(short packetLength_var);
    virtual IPAddress& getRouterID();
    virtual const IPAddress& getRouterID() const {return const_cast<OSPFPacket*>(this)->getRouterID();}
    virtual void setRouterID(const IPAddress& routerID_var);
    virtual IPAddress& getAreaID();
    virtual const IPAddress& getAreaID() const {return const_cast<OSPFPacket*>(this)->getAreaID();}
    virtual void setAreaID(const IPAddress& areaID_var);
    virtual short getChecksum() const;
    virtual void setChecksum(short checksum_var);
    virtual short getAuthenticationType() const;
    virtual void setAuthenticationType(short authenticationType_var);
    virtual unsigned int getAuthenticationArraySize() const;
    virtual char getAuthentication(unsigned int k) const;
    virtual void setAuthentication(unsigned int k, char authentication_var);
};

inline void doPacking(cCommBuffer *b, OSPFPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet OSPFHelloPacket extends OSPFPacket
 * {
 *     IPAddress networkMask;
 * 
 *     short helloInterval = 5;
 * 
 *     OSPFOptions options;
 * 
 *     char routerPriority = 0;
 *     long routerDeadInterval = 0;
 * 
 *     IPAddress designatedRouter;
 *     IPAddress backupDesignatedRouter;
 *     IPAddress neighbor[];
 * }
 * </pre>
 */
class INET_API OSPFHelloPacket : public OSPFPacket
{
  protected:
    IPAddress networkMask_var;
    short helloInterval_var;
    OSPFOptions options_var;
    char routerPriority_var;
    long routerDeadInterval_var;
    IPAddress designatedRouter_var;
    IPAddress backupDesignatedRouter_var;
    IPAddress *neighbor_var; // array ptr
    unsigned int neighbor_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFHelloPacket&);

  public:
    OSPFHelloPacket(const char *name=NULL, int kind=0);
    OSPFHelloPacket(const OSPFHelloPacket& other);
    virtual ~OSPFHelloPacket();
    OSPFHelloPacket& operator=(const OSPFHelloPacket& other);
    virtual OSPFHelloPacket *dup() const {return new OSPFHelloPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPAddress& getNetworkMask();
    virtual const IPAddress& getNetworkMask() const {return const_cast<OSPFHelloPacket*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPAddress& networkMask_var);
    virtual short getHelloInterval() const;
    virtual void setHelloInterval(short helloInterval_var);
    virtual OSPFOptions& getOptions();
    virtual const OSPFOptions& getOptions() const {return const_cast<OSPFHelloPacket*>(this)->getOptions();}
    virtual void setOptions(const OSPFOptions& options_var);
    virtual char getRouterPriority() const;
    virtual void setRouterPriority(char routerPriority_var);
    virtual long getRouterDeadInterval() const;
    virtual void setRouterDeadInterval(long routerDeadInterval_var);
    virtual IPAddress& getDesignatedRouter();
    virtual const IPAddress& getDesignatedRouter() const {return const_cast<OSPFHelloPacket*>(this)->getDesignatedRouter();}
    virtual void setDesignatedRouter(const IPAddress& designatedRouter_var);
    virtual IPAddress& getBackupDesignatedRouter();
    virtual const IPAddress& getBackupDesignatedRouter() const {return const_cast<OSPFHelloPacket*>(this)->getBackupDesignatedRouter();}
    virtual void setBackupDesignatedRouter(const IPAddress& backupDesignatedRouter_var);
    virtual void setNeighborArraySize(unsigned int size);
    virtual unsigned int getNeighborArraySize() const;
    virtual IPAddress& getNeighbor(unsigned int k);
    virtual const IPAddress& getNeighbor(unsigned int k) const {return const_cast<OSPFHelloPacket*>(this)->getNeighbor(k);}
    virtual void setNeighbor(unsigned int k, const IPAddress& neighbor_var);
};

inline void doPacking(cCommBuffer *b, OSPFHelloPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFHelloPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * class OSPFLSAHeader
 * {
 *     unsigned short lsAge = 0;
 *     OSPFOptions lsOptions;
 *     char lsType enum(LSAType) = RouterLSAType;
 *     unsigned long linkStateID;
 *     IPAddress advertisingRouter;
 *     long lsSequenceNumber = 0;
 *     short lsChecksum = 0;
 *     unsigned short lsaLength = 0;
 * }
 * </pre>
 */
class INET_API OSPFLSAHeader : public cObject
{
  protected:
    unsigned short lsAge_var;
    OSPFOptions lsOptions_var;
    char lsType_var;
    unsigned long linkStateID_var;
    IPAddress advertisingRouter_var;
    long lsSequenceNumber_var;
    short lsChecksum_var;
    unsigned short lsaLength_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLSAHeader&);

  public:
    OSPFLSAHeader();
    OSPFLSAHeader(const OSPFLSAHeader& other);
    virtual ~OSPFLSAHeader();
    OSPFLSAHeader& operator=(const OSPFLSAHeader& other);
    virtual OSPFLSAHeader *dup() const {return new OSPFLSAHeader(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getLsAge() const;
    virtual void setLsAge(unsigned short lsAge_var);
    virtual OSPFOptions& getLsOptions();
    virtual const OSPFOptions& getLsOptions() const {return const_cast<OSPFLSAHeader*>(this)->getLsOptions();}
    virtual void setLsOptions(const OSPFOptions& lsOptions_var);
    virtual char getLsType() const;
    virtual void setLsType(char lsType_var);
    virtual unsigned long getLinkStateID() const;
    virtual void setLinkStateID(unsigned long linkStateID_var);
    virtual IPAddress& getAdvertisingRouter();
    virtual const IPAddress& getAdvertisingRouter() const {return const_cast<OSPFLSAHeader*>(this)->getAdvertisingRouter();}
    virtual void setAdvertisingRouter(const IPAddress& advertisingRouter_var);
    virtual long getLsSequenceNumber() const;
    virtual void setLsSequenceNumber(long lsSequenceNumber_var);
    virtual short getLsChecksum() const;
    virtual void setLsChecksum(short lsChecksum_var);
    virtual unsigned short getLsaLength() const;
    virtual void setLsaLength(unsigned short lsaLength_var);
};

inline void doPacking(cCommBuffer *b, OSPFLSAHeader& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLSAHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * class OSPFLSA
 * {
 *     OSPFLSAHeader header;
 * }
 * </pre>
 */
class INET_API OSPFLSA : public cObject
{
  protected:
    OSPFLSAHeader header_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLSA&);

  public:
    OSPFLSA();
    OSPFLSA(const OSPFLSA& other);
    virtual ~OSPFLSA();
    OSPFLSA& operator=(const OSPFLSA& other);
    virtual OSPFLSA *dup() const {return new OSPFLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OSPFLSAHeader& getHeader();
    virtual const OSPFLSAHeader& getHeader() const {return const_cast<OSPFLSA*>(this)->getHeader();}
    virtual void setHeader(const OSPFLSAHeader& header_var);
};

inline void doPacking(cCommBuffer *b, OSPFLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLSA& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg by opp_msgc.
 */
struct INET_API TOSData
{
    TOSData();
    unsigned char tos;
    unsigned char tosMetric[3];
};

void INET_API doPacking(cCommBuffer *b, TOSData& a);
void INET_API doUnpacking(cCommBuffer *b, TOSData& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * class Link
 * {
 *     IPAddress linkID;
 *     unsigned long linkData = 0;
 *     unsigned char type enum(LinkType) = PointToPointLink;
 *     unsigned char numberOfTOS = 0;
 *     unsigned long linkCost = 1;
 *     TOSData tosData[];
 * }
 * </pre>
 */
class INET_API Link : public cObject
{
  protected:
    IPAddress linkID_var;
    unsigned long linkData_var;
    unsigned char type_var;
    unsigned char numberOfTOS_var;
    unsigned long linkCost_var;
    TOSData *tosData_var; // array ptr
    unsigned int tosData_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Link&);

  public:
    Link();
    Link(const Link& other);
    virtual ~Link();
    Link& operator=(const Link& other);
    virtual Link *dup() const {return new Link(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPAddress& getLinkID();
    virtual const IPAddress& getLinkID() const {return const_cast<Link*>(this)->getLinkID();}
    virtual void setLinkID(const IPAddress& linkID_var);
    virtual unsigned long getLinkData() const;
    virtual void setLinkData(unsigned long linkData_var);
    virtual unsigned char getType() const;
    virtual void setType(unsigned char type_var);
    virtual unsigned char getNumberOfTOS() const;
    virtual void setNumberOfTOS(unsigned char numberOfTOS_var);
    virtual unsigned long getLinkCost() const;
    virtual void setLinkCost(unsigned long linkCost_var);
    virtual void setTosDataArraySize(unsigned int size);
    virtual unsigned int getTosDataArraySize() const;
    virtual TOSData& getTosData(unsigned int k);
    virtual const TOSData& getTosData(unsigned int k) const {return const_cast<Link*>(this)->getTosData(k);}
    virtual void setTosData(unsigned int k, const TOSData& tosData_var);
};

inline void doPacking(cCommBuffer *b, Link& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Link& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * class OSPFRouterLSA extends OSPFLSA
 * {
 *     bool V_VirtualLinkEndpoint = false;
 *     bool E_ASBoundaryRouter = false;
 *     bool B_AreaBorderRouter = false;
 *     unsigned short numberOfLinks = 0;
 *     Link links[];
 * }
 * </pre>
 */
class INET_API OSPFRouterLSA : public OSPFLSA
{
  protected:
    bool V_VirtualLinkEndpoint_var;
    bool E_ASBoundaryRouter_var;
    bool B_AreaBorderRouter_var;
    unsigned short numberOfLinks_var;
    Link *links_var; // array ptr
    unsigned int links_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFRouterLSA&);

  public:
    OSPFRouterLSA();
    OSPFRouterLSA(const OSPFRouterLSA& other);
    virtual ~OSPFRouterLSA();
    OSPFRouterLSA& operator=(const OSPFRouterLSA& other);
    virtual OSPFRouterLSA *dup() const {return new OSPFRouterLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual bool getV_VirtualLinkEndpoint() const;
    virtual void setV_VirtualLinkEndpoint(bool V_VirtualLinkEndpoint_var);
    virtual bool getE_ASBoundaryRouter() const;
    virtual void setE_ASBoundaryRouter(bool E_ASBoundaryRouter_var);
    virtual bool getB_AreaBorderRouter() const;
    virtual void setB_AreaBorderRouter(bool B_AreaBorderRouter_var);
    virtual unsigned short getNumberOfLinks() const;
    virtual void setNumberOfLinks(unsigned short numberOfLinks_var);
    virtual void setLinksArraySize(unsigned int size);
    virtual unsigned int getLinksArraySize() const;
    virtual Link& getLinks(unsigned int k);
    virtual const Link& getLinks(unsigned int k) const {return const_cast<OSPFRouterLSA*>(this)->getLinks(k);}
    virtual void setLinks(unsigned int k, const Link& links_var);
};

inline void doPacking(cCommBuffer *b, OSPFRouterLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFRouterLSA& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * class OSPFNetworkLSA extends OSPFLSA
 * {
 *     IPAddress networkMask;
 *     IPAddress attachedRouters[];
 * }
 * </pre>
 */
class INET_API OSPFNetworkLSA : public OSPFLSA
{
  protected:
    IPAddress networkMask_var;
    IPAddress *attachedRouters_var; // array ptr
    unsigned int attachedRouters_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFNetworkLSA&);

  public:
    OSPFNetworkLSA();
    OSPFNetworkLSA(const OSPFNetworkLSA& other);
    virtual ~OSPFNetworkLSA();
    OSPFNetworkLSA& operator=(const OSPFNetworkLSA& other);
    virtual OSPFNetworkLSA *dup() const {return new OSPFNetworkLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPAddress& getNetworkMask();
    virtual const IPAddress& getNetworkMask() const {return const_cast<OSPFNetworkLSA*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPAddress& networkMask_var);
    virtual void setAttachedRoutersArraySize(unsigned int size);
    virtual unsigned int getAttachedRoutersArraySize() const;
    virtual IPAddress& getAttachedRouters(unsigned int k);
    virtual const IPAddress& getAttachedRouters(unsigned int k) const {return const_cast<OSPFNetworkLSA*>(this)->getAttachedRouters(k);}
    virtual void setAttachedRouters(unsigned int k, const IPAddress& attachedRouters_var);
};

inline void doPacking(cCommBuffer *b, OSPFNetworkLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFNetworkLSA& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * class OSPFSummaryLSA extends OSPFLSA
 * {
 *     IPAddress networkMask;
 *     unsigned long routeCost = 1;
 *     TOSData tosData[];
 * }
 * </pre>
 */
class INET_API OSPFSummaryLSA : public OSPFLSA
{
  protected:
    IPAddress networkMask_var;
    unsigned long routeCost_var;
    TOSData *tosData_var; // array ptr
    unsigned int tosData_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFSummaryLSA&);

  public:
    OSPFSummaryLSA();
    OSPFSummaryLSA(const OSPFSummaryLSA& other);
    virtual ~OSPFSummaryLSA();
    OSPFSummaryLSA& operator=(const OSPFSummaryLSA& other);
    virtual OSPFSummaryLSA *dup() const {return new OSPFSummaryLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPAddress& getNetworkMask();
    virtual const IPAddress& getNetworkMask() const {return const_cast<OSPFSummaryLSA*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPAddress& networkMask_var);
    virtual unsigned long getRouteCost() const;
    virtual void setRouteCost(unsigned long routeCost_var);
    virtual void setTosDataArraySize(unsigned int size);
    virtual unsigned int getTosDataArraySize() const;
    virtual TOSData& getTosData(unsigned int k);
    virtual const TOSData& getTosData(unsigned int k) const {return const_cast<OSPFSummaryLSA*>(this)->getTosData(k);}
    virtual void setTosData(unsigned int k, const TOSData& tosData_var);
};

inline void doPacking(cCommBuffer *b, OSPFSummaryLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFSummaryLSA& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg by opp_msgc.
 */
struct INET_API ExternalTOSInfo
{
    ExternalTOSInfo();
    TOSData tosData;
    bool E_ExternalMetricType;
    IPAddress forwardingAddress;
    long externalRouteTag;
};

void INET_API doPacking(cCommBuffer *b, ExternalTOSInfo& a);
void INET_API doUnpacking(cCommBuffer *b, ExternalTOSInfo& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * class OSPFASExternalLSAContents
 * {
 *     IPAddress networkMask;
 *     bool E_ExternalMetricType = false;
 *     unsigned long routeCost = 1;
 *     IPAddress forwardingAddress;
 *     long externalRouteTag = 0;
 *     ExternalTOSInfo externalTOSInfo[];
 * }
 * </pre>
 */
class INET_API OSPFASExternalLSAContents : public cObject
{
  protected:
    IPAddress networkMask_var;
    bool E_ExternalMetricType_var;
    unsigned long routeCost_var;
    IPAddress forwardingAddress_var;
    long externalRouteTag_var;
    ExternalTOSInfo *externalTOSInfo_var; // array ptr
    unsigned int externalTOSInfo_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFASExternalLSAContents&);

  public:
    OSPFASExternalLSAContents();
    OSPFASExternalLSAContents(const OSPFASExternalLSAContents& other);
    virtual ~OSPFASExternalLSAContents();
    OSPFASExternalLSAContents& operator=(const OSPFASExternalLSAContents& other);
    virtual OSPFASExternalLSAContents *dup() const {return new OSPFASExternalLSAContents(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual IPAddress& getNetworkMask();
    virtual const IPAddress& getNetworkMask() const {return const_cast<OSPFASExternalLSAContents*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPAddress& networkMask_var);
    virtual bool getE_ExternalMetricType() const;
    virtual void setE_ExternalMetricType(bool E_ExternalMetricType_var);
    virtual unsigned long getRouteCost() const;
    virtual void setRouteCost(unsigned long routeCost_var);
    virtual IPAddress& getForwardingAddress();
    virtual const IPAddress& getForwardingAddress() const {return const_cast<OSPFASExternalLSAContents*>(this)->getForwardingAddress();}
    virtual void setForwardingAddress(const IPAddress& forwardingAddress_var);
    virtual long getExternalRouteTag() const;
    virtual void setExternalRouteTag(long externalRouteTag_var);
    virtual void setExternalTOSInfoArraySize(unsigned int size);
    virtual unsigned int getExternalTOSInfoArraySize() const;
    virtual ExternalTOSInfo& getExternalTOSInfo(unsigned int k);
    virtual const ExternalTOSInfo& getExternalTOSInfo(unsigned int k) const {return const_cast<OSPFASExternalLSAContents*>(this)->getExternalTOSInfo(k);}
    virtual void setExternalTOSInfo(unsigned int k, const ExternalTOSInfo& externalTOSInfo_var);
};

inline void doPacking(cCommBuffer *b, OSPFASExternalLSAContents& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFASExternalLSAContents& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * class OSPFASExternalLSA extends OSPFLSA
 * {
 *     OSPFASExternalLSAContents contents;
 * }
 * </pre>
 */
class INET_API OSPFASExternalLSA : public OSPFLSA
{
  protected:
    OSPFASExternalLSAContents contents_var;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFASExternalLSA&);

  public:
    OSPFASExternalLSA();
    OSPFASExternalLSA(const OSPFASExternalLSA& other);
    virtual ~OSPFASExternalLSA();
    OSPFASExternalLSA& operator=(const OSPFASExternalLSA& other);
    virtual OSPFASExternalLSA *dup() const {return new OSPFASExternalLSA(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual OSPFASExternalLSAContents& getContents();
    virtual const OSPFASExternalLSAContents& getContents() const {return const_cast<OSPFASExternalLSA*>(this)->getContents();}
    virtual void setContents(const OSPFASExternalLSAContents& contents_var);
};

inline void doPacking(cCommBuffer *b, OSPFASExternalLSA& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFASExternalLSA& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg by opp_msgc.
 */
struct INET_API OSPFDDOptions
{
    OSPFDDOptions();
    bool unused_1;
    bool unused_2;
    bool unused_3;
    bool unused_4;
    bool unused_5;
    bool I_Init;
    bool M_More;
    bool MS_MasterSlave;
};

void INET_API doPacking(cCommBuffer *b, OSPFDDOptions& a);
void INET_API doUnpacking(cCommBuffer *b, OSPFDDOptions& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet OSPFDatabaseDescriptionPacket extends OSPFPacket
 * {
 *     unsigned short interfaceMTU;
 *     OSPFOptions options;
 *     OSPFDDOptions ddOptions;
 *     unsigned long ddSequenceNumber;
 *     OSPFLSAHeader lsaHeaders[];
 * }
 * </pre>
 */
class INET_API OSPFDatabaseDescriptionPacket : public OSPFPacket
{
  protected:
    unsigned short interfaceMTU_var;
    OSPFOptions options_var;
    OSPFDDOptions ddOptions_var;
    unsigned long ddSequenceNumber_var;
    OSPFLSAHeader *lsaHeaders_var; // array ptr
    unsigned int lsaHeaders_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFDatabaseDescriptionPacket&);

  public:
    OSPFDatabaseDescriptionPacket(const char *name=NULL, int kind=0);
    OSPFDatabaseDescriptionPacket(const OSPFDatabaseDescriptionPacket& other);
    virtual ~OSPFDatabaseDescriptionPacket();
    OSPFDatabaseDescriptionPacket& operator=(const OSPFDatabaseDescriptionPacket& other);
    virtual OSPFDatabaseDescriptionPacket *dup() const {return new OSPFDatabaseDescriptionPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned short getInterfaceMTU() const;
    virtual void setInterfaceMTU(unsigned short interfaceMTU_var);
    virtual OSPFOptions& getOptions();
    virtual const OSPFOptions& getOptions() const {return const_cast<OSPFDatabaseDescriptionPacket*>(this)->getOptions();}
    virtual void setOptions(const OSPFOptions& options_var);
    virtual OSPFDDOptions& getDdOptions();
    virtual const OSPFDDOptions& getDdOptions() const {return const_cast<OSPFDatabaseDescriptionPacket*>(this)->getDdOptions();}
    virtual void setDdOptions(const OSPFDDOptions& ddOptions_var);
    virtual unsigned long getDdSequenceNumber() const;
    virtual void setDdSequenceNumber(unsigned long ddSequenceNumber_var);
    virtual void setLsaHeadersArraySize(unsigned int size);
    virtual unsigned int getLsaHeadersArraySize() const;
    virtual OSPFLSAHeader& getLsaHeaders(unsigned int k);
    virtual const OSPFLSAHeader& getLsaHeaders(unsigned int k) const {return const_cast<OSPFDatabaseDescriptionPacket*>(this)->getLsaHeaders(k);}
    virtual void setLsaHeaders(unsigned int k, const OSPFLSAHeader& lsaHeaders_var);
};

inline void doPacking(cCommBuffer *b, OSPFDatabaseDescriptionPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFDatabaseDescriptionPacket& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from networklayer/ospfv2/OSPFPacket.msg by opp_msgc.
 */
struct INET_API LSARequest
{
    LSARequest();
    unsigned long lsType;
    unsigned long linkStateID;
    IPAddress advertisingRouter;
};

void INET_API doPacking(cCommBuffer *b, LSARequest& a);
void INET_API doUnpacking(cCommBuffer *b, LSARequest& a);

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet OSPFLinkStateRequestPacket extends OSPFPacket
 * {
 *     LSARequest requests[];
 * }
 * </pre>
 */
class INET_API OSPFLinkStateRequestPacket : public OSPFPacket
{
  protected:
    LSARequest *requests_var; // array ptr
    unsigned int requests_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLinkStateRequestPacket&);

  public:
    OSPFLinkStateRequestPacket(const char *name=NULL, int kind=0);
    OSPFLinkStateRequestPacket(const OSPFLinkStateRequestPacket& other);
    virtual ~OSPFLinkStateRequestPacket();
    OSPFLinkStateRequestPacket& operator=(const OSPFLinkStateRequestPacket& other);
    virtual OSPFLinkStateRequestPacket *dup() const {return new OSPFLinkStateRequestPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setRequestsArraySize(unsigned int size);
    virtual unsigned int getRequestsArraySize() const;
    virtual LSARequest& getRequests(unsigned int k);
    virtual const LSARequest& getRequests(unsigned int k) const {return const_cast<OSPFLinkStateRequestPacket*>(this)->getRequests(k);}
    virtual void setRequests(unsigned int k, const LSARequest& requests_var);
};

inline void doPacking(cCommBuffer *b, OSPFLinkStateRequestPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLinkStateRequestPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet OSPFLinkStateUpdatePacket extends OSPFPacket
 * {
 *     unsigned long numberOfLSAs;
 *     OSPFRouterLSA routerLSAs[];
 *     OSPFNetworkLSA networkLSAs[];
 *     OSPFSummaryLSA summaryLSAs[];
 *     OSPFASExternalLSA asExternalLSAs[];
 * }
 * </pre>
 */
class INET_API OSPFLinkStateUpdatePacket : public OSPFPacket
{
  protected:
    unsigned long numberOfLSAs_var;
    OSPFRouterLSA *routerLSAs_var; // array ptr
    unsigned int routerLSAs_arraysize;
    OSPFNetworkLSA *networkLSAs_var; // array ptr
    unsigned int networkLSAs_arraysize;
    OSPFSummaryLSA *summaryLSAs_var; // array ptr
    unsigned int summaryLSAs_arraysize;
    OSPFASExternalLSA *asExternalLSAs_var; // array ptr
    unsigned int asExternalLSAs_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLinkStateUpdatePacket&);

  public:
    OSPFLinkStateUpdatePacket(const char *name=NULL, int kind=0);
    OSPFLinkStateUpdatePacket(const OSPFLinkStateUpdatePacket& other);
    virtual ~OSPFLinkStateUpdatePacket();
    OSPFLinkStateUpdatePacket& operator=(const OSPFLinkStateUpdatePacket& other);
    virtual OSPFLinkStateUpdatePacket *dup() const {return new OSPFLinkStateUpdatePacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned long getNumberOfLSAs() const;
    virtual void setNumberOfLSAs(unsigned long numberOfLSAs_var);
    virtual void setRouterLSAsArraySize(unsigned int size);
    virtual unsigned int getRouterLSAsArraySize() const;
    virtual OSPFRouterLSA& getRouterLSAs(unsigned int k);
    virtual const OSPFRouterLSA& getRouterLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getRouterLSAs(k);}
    virtual void setRouterLSAs(unsigned int k, const OSPFRouterLSA& routerLSAs_var);
    virtual void setNetworkLSAsArraySize(unsigned int size);
    virtual unsigned int getNetworkLSAsArraySize() const;
    virtual OSPFNetworkLSA& getNetworkLSAs(unsigned int k);
    virtual const OSPFNetworkLSA& getNetworkLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getNetworkLSAs(k);}
    virtual void setNetworkLSAs(unsigned int k, const OSPFNetworkLSA& networkLSAs_var);
    virtual void setSummaryLSAsArraySize(unsigned int size);
    virtual unsigned int getSummaryLSAsArraySize() const;
    virtual OSPFSummaryLSA& getSummaryLSAs(unsigned int k);
    virtual const OSPFSummaryLSA& getSummaryLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getSummaryLSAs(k);}
    virtual void setSummaryLSAs(unsigned int k, const OSPFSummaryLSA& summaryLSAs_var);
    virtual void setAsExternalLSAsArraySize(unsigned int size);
    virtual unsigned int getAsExternalLSAsArraySize() const;
    virtual OSPFASExternalLSA& getAsExternalLSAs(unsigned int k);
    virtual const OSPFASExternalLSA& getAsExternalLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getAsExternalLSAs(k);}
    virtual void setAsExternalLSAs(unsigned int k, const OSPFASExternalLSA& asExternalLSAs_var);
};

inline void doPacking(cCommBuffer *b, OSPFLinkStateUpdatePacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLinkStateUpdatePacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>networklayer/ospfv2/OSPFPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet OSPFLinkStateAcknowledgementPacket extends OSPFPacket
 * {
 *     OSPFLSAHeader lsaHeaders[];
 * }
 * </pre>
 */
class INET_API OSPFLinkStateAcknowledgementPacket : public OSPFPacket
{
  protected:
    OSPFLSAHeader *lsaHeaders_var; // array ptr
    unsigned int lsaHeaders_arraysize;

    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLinkStateAcknowledgementPacket&);

  public:
    OSPFLinkStateAcknowledgementPacket(const char *name=NULL, int kind=0);
    OSPFLinkStateAcknowledgementPacket(const OSPFLinkStateAcknowledgementPacket& other);
    virtual ~OSPFLinkStateAcknowledgementPacket();
    OSPFLinkStateAcknowledgementPacket& operator=(const OSPFLinkStateAcknowledgementPacket& other);
    virtual OSPFLinkStateAcknowledgementPacket *dup() const {return new OSPFLinkStateAcknowledgementPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setLsaHeadersArraySize(unsigned int size);
    virtual unsigned int getLsaHeadersArraySize() const;
    virtual OSPFLSAHeader& getLsaHeaders(unsigned int k);
    virtual const OSPFLSAHeader& getLsaHeaders(unsigned int k) const {return const_cast<OSPFLinkStateAcknowledgementPacket*>(this)->getLsaHeaders(k);}
    virtual void setLsaHeaders(unsigned int k, const OSPFLSAHeader& lsaHeaders_var);
};

inline void doPacking(cCommBuffer *b, OSPFLinkStateAcknowledgementPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, OSPFLinkStateAcknowledgementPacket& obj) {obj.parsimUnpack(b);}


#endif // _OSPFPACKET_M_H_
