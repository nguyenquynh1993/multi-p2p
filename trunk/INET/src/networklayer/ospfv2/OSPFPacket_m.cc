//
// Generated file, do not edit! Created by opp_msgc 4.0 from networklayer/ospfv2/OSPFPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "OSPFPacket_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("OSPFPacketType");
    if (!e) enums.getInstance()->add(e = new cEnum("OSPFPacketType"));
    e->insert(HelloPacket, "HelloPacket");
    e->insert(DatabaseDescriptionPacket, "DatabaseDescriptionPacket");
    e->insert(LinkStateRequestPacket, "LinkStateRequestPacket");
    e->insert(LinkStateUpdatePacket, "LinkStateUpdatePacket");
    e->insert(LinkStateAcknowledgementPacket, "LinkStateAcknowledgementPacket");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("LSAType");
    if (!e) enums.getInstance()->add(e = new cEnum("LSAType"));
    e->insert(RouterLSAType, "RouterLSAType");
    e->insert(NetworkLSAType, "NetworkLSAType");
    e->insert(SummaryLSA_NetworksType, "SummaryLSA_NetworksType");
    e->insert(SummaryLSA_ASBoundaryRoutersType, "SummaryLSA_ASBoundaryRoutersType");
    e->insert(ASExternalLSAType, "ASExternalLSAType");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("LinkType");
    if (!e) enums.getInstance()->add(e = new cEnum("LinkType"));
    e->insert(PointToPointLink, "PointToPointLink");
    e->insert(TransitLink, "TransitLink");
    e->insert(StubLink, "StubLink");
    e->insert(VirtualLink, "VirtualLink");
);

OSPFOptions::OSPFOptions()
{
    unused_1 = 0;
    E_ExternalRoutingCapability = 0;
    MC_MulticastForwarding = 0;
    NP_Type7LSA = 0;
    EA_ForwardExternalLSAs = 0;
    DC_DemandCircuits = 0;
    unused_2 = 0;
    unused_3 = 0;
}

void doPacking(cCommBuffer *b, OSPFOptions& a)
{
    doPacking(b,a.unused_1);
    doPacking(b,a.E_ExternalRoutingCapability);
    doPacking(b,a.MC_MulticastForwarding);
    doPacking(b,a.NP_Type7LSA);
    doPacking(b,a.EA_ForwardExternalLSAs);
    doPacking(b,a.DC_DemandCircuits);
    doPacking(b,a.unused_2);
    doPacking(b,a.unused_3);
}

void doUnpacking(cCommBuffer *b, OSPFOptions& a)
{
    doUnpacking(b,a.unused_1);
    doUnpacking(b,a.E_ExternalRoutingCapability);
    doUnpacking(b,a.MC_MulticastForwarding);
    doUnpacking(b,a.NP_Type7LSA);
    doUnpacking(b,a.EA_ForwardExternalLSAs);
    doUnpacking(b,a.DC_DemandCircuits);
    doUnpacking(b,a.unused_2);
    doUnpacking(b,a.unused_3);
}

class OSPFOptionsDescriptor : public cClassDescriptor
{
  public:
    OSPFOptionsDescriptor();
    virtual ~OSPFOptionsDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFOptionsDescriptor);

OSPFOptionsDescriptor::OSPFOptionsDescriptor() : cClassDescriptor("OSPFOptions", "")
{
}

OSPFOptionsDescriptor::~OSPFOptionsDescriptor()
{
}

bool OSPFOptionsDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFOptions *>(obj)!=NULL;
}

const char *OSPFOptionsDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFOptionsDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int OSPFOptionsDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *OSPFOptionsDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unused_1";
        case 1: return "E_ExternalRoutingCapability";
        case 2: return "MC_MulticastForwarding";
        case 3: return "NP_Type7LSA";
        case 4: return "EA_ForwardExternalLSAs";
        case 5: return "DC_DemandCircuits";
        case 6: return "unused_2";
        case 7: return "unused_3";
        default: return NULL;
    }
}

const char *OSPFOptionsDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "bool";
        case 2: return "bool";
        case 3: return "bool";
        case 4: return "bool";
        case 5: return "bool";
        case 6: return "bool";
        case 7: return "bool";
        default: return NULL;
    }
}

const char *OSPFOptionsDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFOptionsDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFOptions *pp = (OSPFOptions *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool OSPFOptionsDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFOptions *pp = (OSPFOptions *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->unused_1,resultbuf,bufsize); return true;
        case 1: bool2string(pp->E_ExternalRoutingCapability,resultbuf,bufsize); return true;
        case 2: bool2string(pp->MC_MulticastForwarding,resultbuf,bufsize); return true;
        case 3: bool2string(pp->NP_Type7LSA,resultbuf,bufsize); return true;
        case 4: bool2string(pp->EA_ForwardExternalLSAs,resultbuf,bufsize); return true;
        case 5: bool2string(pp->DC_DemandCircuits,resultbuf,bufsize); return true;
        case 6: bool2string(pp->unused_2,resultbuf,bufsize); return true;
        case 7: bool2string(pp->unused_3,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool OSPFOptionsDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFOptions *pp = (OSPFOptions *)object; (void)pp;
    switch (field) {
        case 0: pp->unused_1 = string2bool(value); return true;
        case 1: pp->E_ExternalRoutingCapability = string2bool(value); return true;
        case 2: pp->MC_MulticastForwarding = string2bool(value); return true;
        case 3: pp->NP_Type7LSA = string2bool(value); return true;
        case 4: pp->EA_ForwardExternalLSAs = string2bool(value); return true;
        case 5: pp->DC_DemandCircuits = string2bool(value); return true;
        case 6: pp->unused_2 = string2bool(value); return true;
        case 7: pp->unused_3 = string2bool(value); return true;
        default: return false;
    }
}

const char *OSPFOptionsDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *OSPFOptionsDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFOptions *pp = (OSPFOptions *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(OSPFPacket);

OSPFPacket::OSPFPacket(const char *name, int kind) : cPacket(name,kind)
{
    this->version_var = 2;
    this->type_var = HelloPacket;
    this->packetLength_var = 0;
    this->checksum_var = 0;
    this->authenticationType_var = 0;
    for (unsigned int i=0; i<8; i++)
        this->authentication_var[i] = 0;
}

OSPFPacket::OSPFPacket(const OSPFPacket& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

OSPFPacket::~OSPFPacket()
{
}

OSPFPacket& OSPFPacket::operator=(const OSPFPacket& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->version_var = other.version_var;
    this->type_var = other.type_var;
    this->packetLength_var = other.packetLength_var;
    this->routerID_var = other.routerID_var;
    this->areaID_var = other.areaID_var;
    this->checksum_var = other.checksum_var;
    this->authenticationType_var = other.authenticationType_var;
    for (unsigned int i=0; i<8; i++)
        this->authentication_var[i] = other.authentication_var[i];
    return *this;
}

void OSPFPacket::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->version_var);
    doPacking(b,this->type_var);
    doPacking(b,this->packetLength_var);
    doPacking(b,this->routerID_var);
    doPacking(b,this->areaID_var);
    doPacking(b,this->checksum_var);
    doPacking(b,this->authenticationType_var);
    doPacking(b,this->authentication_var,8);
}

void OSPFPacket::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->version_var);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->packetLength_var);
    doUnpacking(b,this->routerID_var);
    doUnpacking(b,this->areaID_var);
    doUnpacking(b,this->checksum_var);
    doUnpacking(b,this->authenticationType_var);
    doUnpacking(b,this->authentication_var,8);
}

char OSPFPacket::getVersion() const
{
    return version_var;
}

void OSPFPacket::setVersion(char version_var)
{
    this->version_var = version_var;
}

char OSPFPacket::getType() const
{
    return type_var;
}

void OSPFPacket::setType(char type_var)
{
    this->type_var = type_var;
}

short OSPFPacket::getPacketLength() const
{
    return packetLength_var;
}

void OSPFPacket::setPacketLength(short packetLength_var)
{
    this->packetLength_var = packetLength_var;
}

IPAddress& OSPFPacket::getRouterID()
{
    return routerID_var;
}

void OSPFPacket::setRouterID(const IPAddress& routerID_var)
{
    this->routerID_var = routerID_var;
}

IPAddress& OSPFPacket::getAreaID()
{
    return areaID_var;
}

void OSPFPacket::setAreaID(const IPAddress& areaID_var)
{
    this->areaID_var = areaID_var;
}

short OSPFPacket::getChecksum() const
{
    return checksum_var;
}

void OSPFPacket::setChecksum(short checksum_var)
{
    this->checksum_var = checksum_var;
}

short OSPFPacket::getAuthenticationType() const
{
    return authenticationType_var;
}

void OSPFPacket::setAuthenticationType(short authenticationType_var)
{
    this->authenticationType_var = authenticationType_var;
}

unsigned int OSPFPacket::getAuthenticationArraySize() const
{
    return 8;
}

char OSPFPacket::getAuthentication(unsigned int k) const
{
    if (k>=8) throw cRuntimeError("Array of size 8 indexed by %d", k);
    return authentication_var[k];
}

void OSPFPacket::setAuthentication(unsigned int k, char authentication_var)
{
    if (k>=8) throw cRuntimeError("Array of size 8 indexed by %d", k);
    this->authentication_var[k] = authentication_var;
}

class OSPFPacketDescriptor : public cClassDescriptor
{
  public:
    OSPFPacketDescriptor();
    virtual ~OSPFPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFPacketDescriptor);

OSPFPacketDescriptor::OSPFPacketDescriptor() : cClassDescriptor("OSPFPacket", "cPacket")
{
}

OSPFPacketDescriptor::~OSPFPacketDescriptor()
{
}

bool OSPFPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFPacket *>(obj)!=NULL;
}

const char *OSPFPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int OSPFPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISCOMPOUND;
        case 4: return FD_ISCOMPOUND;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISARRAY | FD_ISEDITABLE;
        default: return 0;
    }
}

const char *OSPFPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "version";
        case 1: return "type";
        case 2: return "packetLength";
        case 3: return "routerID";
        case 4: return "areaID";
        case 5: return "checksum";
        case 6: return "authenticationType";
        case 7: return "authentication";
        default: return NULL;
    }
}

const char *OSPFPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "char";
        case 1: return "char";
        case 2: return "short";
        case 3: return "IPAddress";
        case 4: return "IPAddress";
        case 5: return "short";
        case 6: return "short";
        case 7: return "char";
        default: return NULL;
    }
}

const char *OSPFPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "OSPFPacketType";
            return NULL;
        default: return NULL;
    }
}

int OSPFPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFPacket *pp = (OSPFPacket *)object; (void)pp;
    switch (field) {
        case 7: return 8;
        default: return 0;
    }
}

bool OSPFPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFPacket *pp = (OSPFPacket *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getVersion(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getType(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getPacketLength(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getRouterID(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: {std::stringstream out; out << pp->getAreaID(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 5: long2string(pp->getChecksum(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getAuthenticationType(),resultbuf,bufsize); return true;
        case 7: long2string(pp->getAuthentication(i),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool OSPFPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFPacket *pp = (OSPFPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setVersion(string2long(value)); return true;
        case 1: pp->setType(string2long(value)); return true;
        case 2: pp->setPacketLength(string2long(value)); return true;
        case 5: pp->setChecksum(string2long(value)); return true;
        case 6: pp->setAuthenticationType(string2long(value)); return true;
        case 7: pp->setAuthentication(i,string2long(value)); return true;
        default: return false;
    }
}

const char *OSPFPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return "IPAddress"; break;
        case 4: return "IPAddress"; break;
        default: return NULL;
    }
}

void *OSPFPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFPacket *pp = (OSPFPacket *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getRouterID()); break;
        case 4: return (void *)(&pp->getAreaID()); break;
        default: return NULL;
    }
}

Register_Class(OSPFHelloPacket);

OSPFHelloPacket::OSPFHelloPacket(const char *name, int kind) : OSPFPacket(name,kind)
{
    this->helloInterval_var = 5;
    this->routerPriority_var = 0;
    this->routerDeadInterval_var = 0;
    neighbor_arraysize = 0;
    this->neighbor_var = 0;
}

OSPFHelloPacket::OSPFHelloPacket(const OSPFHelloPacket& other) : OSPFPacket()
{
    setName(other.getName());
    neighbor_arraysize = 0;
    this->neighbor_var = 0;
    operator=(other);
}

OSPFHelloPacket::~OSPFHelloPacket()
{
    delete [] neighbor_var;
}

OSPFHelloPacket& OSPFHelloPacket::operator=(const OSPFHelloPacket& other)
{
    if (this==&other) return *this;
    OSPFPacket::operator=(other);
    this->networkMask_var = other.networkMask_var;
    this->helloInterval_var = other.helloInterval_var;
    this->options_var = other.options_var;
    this->routerPriority_var = other.routerPriority_var;
    this->routerDeadInterval_var = other.routerDeadInterval_var;
    this->designatedRouter_var = other.designatedRouter_var;
    this->backupDesignatedRouter_var = other.backupDesignatedRouter_var;
    delete [] this->neighbor_var;
    this->neighbor_var = (other.neighbor_arraysize==0) ? NULL : new IPAddress[other.neighbor_arraysize];
    neighbor_arraysize = other.neighbor_arraysize;
    for (unsigned int i=0; i<neighbor_arraysize; i++)
        this->neighbor_var[i] = other.neighbor_var[i];
    return *this;
}

void OSPFHelloPacket::parsimPack(cCommBuffer *b)
{
    OSPFPacket::parsimPack(b);
    doPacking(b,this->networkMask_var);
    doPacking(b,this->helloInterval_var);
    doPacking(b,this->options_var);
    doPacking(b,this->routerPriority_var);
    doPacking(b,this->routerDeadInterval_var);
    doPacking(b,this->designatedRouter_var);
    doPacking(b,this->backupDesignatedRouter_var);
    b->pack(neighbor_arraysize);
    doPacking(b,this->neighbor_var,neighbor_arraysize);
}

void OSPFHelloPacket::parsimUnpack(cCommBuffer *b)
{
    OSPFPacket::parsimUnpack(b);
    doUnpacking(b,this->networkMask_var);
    doUnpacking(b,this->helloInterval_var);
    doUnpacking(b,this->options_var);
    doUnpacking(b,this->routerPriority_var);
    doUnpacking(b,this->routerDeadInterval_var);
    doUnpacking(b,this->designatedRouter_var);
    doUnpacking(b,this->backupDesignatedRouter_var);
    delete [] this->neighbor_var;
    b->unpack(neighbor_arraysize);
    if (neighbor_arraysize==0) {
        this->neighbor_var = 0;
    } else {
        this->neighbor_var = new IPAddress[neighbor_arraysize];
        doUnpacking(b,this->neighbor_var,neighbor_arraysize);
    }
}

IPAddress& OSPFHelloPacket::getNetworkMask()
{
    return networkMask_var;
}

void OSPFHelloPacket::setNetworkMask(const IPAddress& networkMask_var)
{
    this->networkMask_var = networkMask_var;
}

short OSPFHelloPacket::getHelloInterval() const
{
    return helloInterval_var;
}

void OSPFHelloPacket::setHelloInterval(short helloInterval_var)
{
    this->helloInterval_var = helloInterval_var;
}

OSPFOptions& OSPFHelloPacket::getOptions()
{
    return options_var;
}

void OSPFHelloPacket::setOptions(const OSPFOptions& options_var)
{
    this->options_var = options_var;
}

char OSPFHelloPacket::getRouterPriority() const
{
    return routerPriority_var;
}

void OSPFHelloPacket::setRouterPriority(char routerPriority_var)
{
    this->routerPriority_var = routerPriority_var;
}

long OSPFHelloPacket::getRouterDeadInterval() const
{
    return routerDeadInterval_var;
}

void OSPFHelloPacket::setRouterDeadInterval(long routerDeadInterval_var)
{
    this->routerDeadInterval_var = routerDeadInterval_var;
}

IPAddress& OSPFHelloPacket::getDesignatedRouter()
{
    return designatedRouter_var;
}

void OSPFHelloPacket::setDesignatedRouter(const IPAddress& designatedRouter_var)
{
    this->designatedRouter_var = designatedRouter_var;
}

IPAddress& OSPFHelloPacket::getBackupDesignatedRouter()
{
    return backupDesignatedRouter_var;
}

void OSPFHelloPacket::setBackupDesignatedRouter(const IPAddress& backupDesignatedRouter_var)
{
    this->backupDesignatedRouter_var = backupDesignatedRouter_var;
}

void OSPFHelloPacket::setNeighborArraySize(unsigned int size)
{
    IPAddress *neighbor_var2 = (size==0) ? NULL : new IPAddress[size];
    unsigned int sz = neighbor_arraysize < size ? neighbor_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighbor_var2[i] = this->neighbor_var[i];
    neighbor_arraysize = size;
    delete [] this->neighbor_var;
    this->neighbor_var = neighbor_var2;
}

unsigned int OSPFHelloPacket::getNeighborArraySize() const
{
    return neighbor_arraysize;
}

IPAddress& OSPFHelloPacket::getNeighbor(unsigned int k)
{
    if (k>=neighbor_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighbor_arraysize, k);
    return neighbor_var[k];
}

void OSPFHelloPacket::setNeighbor(unsigned int k, const IPAddress& neighbor_var)
{
    if (k>=neighbor_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighbor_arraysize, k);
    this->neighbor_var[k]=neighbor_var;
}

class OSPFHelloPacketDescriptor : public cClassDescriptor
{
  public:
    OSPFHelloPacketDescriptor();
    virtual ~OSPFHelloPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFHelloPacketDescriptor);

OSPFHelloPacketDescriptor::OSPFHelloPacketDescriptor() : cClassDescriptor("OSPFHelloPacket", "OSPFPacket")
{
}

OSPFHelloPacketDescriptor::~OSPFHelloPacketDescriptor()
{
}

bool OSPFHelloPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFHelloPacket *>(obj)!=NULL;
}

const char *OSPFHelloPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFHelloPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int OSPFHelloPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISCOMPOUND;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISCOMPOUND;
        case 6: return FD_ISCOMPOUND;
        case 7: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *OSPFHelloPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "networkMask";
        case 1: return "helloInterval";
        case 2: return "options";
        case 3: return "routerPriority";
        case 4: return "routerDeadInterval";
        case 5: return "designatedRouter";
        case 6: return "backupDesignatedRouter";
        case 7: return "neighbor";
        default: return NULL;
    }
}

const char *OSPFHelloPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "short";
        case 2: return "OSPFOptions";
        case 3: return "char";
        case 4: return "long";
        case 5: return "IPAddress";
        case 6: return "IPAddress";
        case 7: return "IPAddress";
        default: return NULL;
    }
}

const char *OSPFHelloPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFHelloPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFHelloPacket *pp = (OSPFHelloPacket *)object; (void)pp;
    switch (field) {
        case 7: return pp->getNeighborArraySize();
        default: return 0;
    }
}

bool OSPFHelloPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFHelloPacket *pp = (OSPFHelloPacket *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNetworkMask(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getHelloInterval(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getOptions(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: long2string(pp->getRouterPriority(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getRouterDeadInterval(),resultbuf,bufsize); return true;
        case 5: {std::stringstream out; out << pp->getDesignatedRouter(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: {std::stringstream out; out << pp->getBackupDesignatedRouter(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 7: {std::stringstream out; out << pp->getNeighbor(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFHelloPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFHelloPacket *pp = (OSPFHelloPacket *)object; (void)pp;
    switch (field) {
        case 1: pp->setHelloInterval(string2long(value)); return true;
        case 3: pp->setRouterPriority(string2long(value)); return true;
        case 4: pp->setRouterDeadInterval(string2long(value)); return true;
        default: return false;
    }
}

const char *OSPFHelloPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress"; break;
        case 2: return "OSPFOptions"; break;
        case 5: return "IPAddress"; break;
        case 6: return "IPAddress"; break;
        case 7: return "IPAddress"; break;
        default: return NULL;
    }
}

void *OSPFHelloPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFHelloPacket *pp = (OSPFHelloPacket *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNetworkMask()); break;
        case 2: return (void *)(&pp->getOptions()); break;
        case 5: return (void *)(&pp->getDesignatedRouter()); break;
        case 6: return (void *)(&pp->getBackupDesignatedRouter()); break;
        case 7: return (void *)(&pp->getNeighbor(i)); break;
        default: return NULL;
    }
}

Register_Class(OSPFLSAHeader);

OSPFLSAHeader::OSPFLSAHeader() : cObject()
{
    this->lsAge_var = 0;
    this->lsType_var = RouterLSAType;
    this->linkStateID_var = 0;
    this->lsSequenceNumber_var = 0;
    this->lsChecksum_var = 0;
    this->lsaLength_var = 0;
}

OSPFLSAHeader::OSPFLSAHeader(const OSPFLSAHeader& other) : cObject()
{
    operator=(other);
}

OSPFLSAHeader::~OSPFLSAHeader()
{
}

OSPFLSAHeader& OSPFLSAHeader::operator=(const OSPFLSAHeader& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->lsAge_var = other.lsAge_var;
    this->lsOptions_var = other.lsOptions_var;
    this->lsType_var = other.lsType_var;
    this->linkStateID_var = other.linkStateID_var;
    this->advertisingRouter_var = other.advertisingRouter_var;
    this->lsSequenceNumber_var = other.lsSequenceNumber_var;
    this->lsChecksum_var = other.lsChecksum_var;
    this->lsaLength_var = other.lsaLength_var;
    return *this;
}

void OSPFLSAHeader::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->lsAge_var);
    doPacking(b,this->lsOptions_var);
    doPacking(b,this->lsType_var);
    doPacking(b,this->linkStateID_var);
    doPacking(b,this->advertisingRouter_var);
    doPacking(b,this->lsSequenceNumber_var);
    doPacking(b,this->lsChecksum_var);
    doPacking(b,this->lsaLength_var);
}

void OSPFLSAHeader::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->lsAge_var);
    doUnpacking(b,this->lsOptions_var);
    doUnpacking(b,this->lsType_var);
    doUnpacking(b,this->linkStateID_var);
    doUnpacking(b,this->advertisingRouter_var);
    doUnpacking(b,this->lsSequenceNumber_var);
    doUnpacking(b,this->lsChecksum_var);
    doUnpacking(b,this->lsaLength_var);
}

unsigned short OSPFLSAHeader::getLsAge() const
{
    return lsAge_var;
}

void OSPFLSAHeader::setLsAge(unsigned short lsAge_var)
{
    this->lsAge_var = lsAge_var;
}

OSPFOptions& OSPFLSAHeader::getLsOptions()
{
    return lsOptions_var;
}

void OSPFLSAHeader::setLsOptions(const OSPFOptions& lsOptions_var)
{
    this->lsOptions_var = lsOptions_var;
}

char OSPFLSAHeader::getLsType() const
{
    return lsType_var;
}

void OSPFLSAHeader::setLsType(char lsType_var)
{
    this->lsType_var = lsType_var;
}

unsigned long OSPFLSAHeader::getLinkStateID() const
{
    return linkStateID_var;
}

void OSPFLSAHeader::setLinkStateID(unsigned long linkStateID_var)
{
    this->linkStateID_var = linkStateID_var;
}

IPAddress& OSPFLSAHeader::getAdvertisingRouter()
{
    return advertisingRouter_var;
}

void OSPFLSAHeader::setAdvertisingRouter(const IPAddress& advertisingRouter_var)
{
    this->advertisingRouter_var = advertisingRouter_var;
}

long OSPFLSAHeader::getLsSequenceNumber() const
{
    return lsSequenceNumber_var;
}

void OSPFLSAHeader::setLsSequenceNumber(long lsSequenceNumber_var)
{
    this->lsSequenceNumber_var = lsSequenceNumber_var;
}

short OSPFLSAHeader::getLsChecksum() const
{
    return lsChecksum_var;
}

void OSPFLSAHeader::setLsChecksum(short lsChecksum_var)
{
    this->lsChecksum_var = lsChecksum_var;
}

unsigned short OSPFLSAHeader::getLsaLength() const
{
    return lsaLength_var;
}

void OSPFLSAHeader::setLsaLength(unsigned short lsaLength_var)
{
    this->lsaLength_var = lsaLength_var;
}

class OSPFLSAHeaderDescriptor : public cClassDescriptor
{
  public:
    OSPFLSAHeaderDescriptor();
    virtual ~OSPFLSAHeaderDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFLSAHeaderDescriptor);

OSPFLSAHeaderDescriptor::OSPFLSAHeaderDescriptor() : cClassDescriptor("OSPFLSAHeader", "cObject")
{
}

OSPFLSAHeaderDescriptor::~OSPFLSAHeaderDescriptor()
{
}

bool OSPFLSAHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFLSAHeader *>(obj)!=NULL;
}

const char *OSPFLSAHeaderDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFLSAHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int OSPFLSAHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISCOMPOUND;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *OSPFLSAHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "lsAge";
        case 1: return "lsOptions";
        case 2: return "lsType";
        case 3: return "linkStateID";
        case 4: return "advertisingRouter";
        case 5: return "lsSequenceNumber";
        case 6: return "lsChecksum";
        case 7: return "lsaLength";
        default: return NULL;
    }
}

const char *OSPFLSAHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned short";
        case 1: return "OSPFOptions";
        case 2: return "char";
        case 3: return "unsigned long";
        case 4: return "IPAddress";
        case 5: return "long";
        case 6: return "short";
        case 7: return "unsigned short";
        default: return NULL;
    }
}

const char *OSPFLSAHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "LSAType";
            return NULL;
        default: return NULL;
    }
}

int OSPFLSAHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLSAHeader *pp = (OSPFLSAHeader *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool OSPFLSAHeaderDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLSAHeader *pp = (OSPFLSAHeader *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getLsAge(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getLsOptions(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: long2string(pp->getLsType(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getLinkStateID(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->getAdvertisingRouter(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 5: long2string(pp->getLsSequenceNumber(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getLsChecksum(),resultbuf,bufsize); return true;
        case 7: ulong2string(pp->getLsaLength(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool OSPFLSAHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLSAHeader *pp = (OSPFLSAHeader *)object; (void)pp;
    switch (field) {
        case 0: pp->setLsAge(string2ulong(value)); return true;
        case 2: pp->setLsType(string2long(value)); return true;
        case 3: pp->setLinkStateID(string2ulong(value)); return true;
        case 5: pp->setLsSequenceNumber(string2long(value)); return true;
        case 6: pp->setLsChecksum(string2long(value)); return true;
        case 7: pp->setLsaLength(string2ulong(value)); return true;
        default: return false;
    }
}

const char *OSPFLSAHeaderDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "OSPFOptions"; break;
        case 4: return "IPAddress"; break;
        default: return NULL;
    }
}

void *OSPFLSAHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLSAHeader *pp = (OSPFLSAHeader *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getLsOptions()); break;
        case 4: return (void *)(&pp->getAdvertisingRouter()); break;
        default: return NULL;
    }
}

Register_Class(OSPFLSA);

OSPFLSA::OSPFLSA() : cObject()
{
}

OSPFLSA::OSPFLSA(const OSPFLSA& other) : cObject()
{
    operator=(other);
}

OSPFLSA::~OSPFLSA()
{
}

OSPFLSA& OSPFLSA::operator=(const OSPFLSA& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->header_var = other.header_var;
    return *this;
}

void OSPFLSA::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->header_var);
}

void OSPFLSA::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->header_var);
}

OSPFLSAHeader& OSPFLSA::getHeader()
{
    return header_var;
}

void OSPFLSA::setHeader(const OSPFLSAHeader& header_var)
{
    this->header_var = header_var;
}

class OSPFLSADescriptor : public cClassDescriptor
{
  public:
    OSPFLSADescriptor();
    virtual ~OSPFLSADescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFLSADescriptor);

OSPFLSADescriptor::OSPFLSADescriptor() : cClassDescriptor("OSPFLSA", "cObject")
{
}

OSPFLSADescriptor::~OSPFLSADescriptor()
{
}

bool OSPFLSADescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFLSA *>(obj)!=NULL;
}

const char *OSPFLSADescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFLSADescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int OSPFLSADescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *OSPFLSADescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "header";
        default: return NULL;
    }
}

const char *OSPFLSADescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OSPFLSAHeader";
        default: return NULL;
    }
}

const char *OSPFLSADescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFLSADescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLSA *pp = (OSPFLSA *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool OSPFLSADescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLSA *pp = (OSPFLSA *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getHeader(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFLSADescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLSA *pp = (OSPFLSA *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *OSPFLSADescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OSPFLSAHeader"; break;
        default: return NULL;
    }
}

void *OSPFLSADescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLSA *pp = (OSPFLSA *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getHeader()); break;
        default: return NULL;
    }
}

TOSData::TOSData()
{
    tos = 0;
    for (unsigned int i=0; i<3; i++)
        tosMetric[i] = 0;
}

void doPacking(cCommBuffer *b, TOSData& a)
{
    doPacking(b,a.tos);
    doPacking(b,a.tosMetric,3);
}

void doUnpacking(cCommBuffer *b, TOSData& a)
{
    doUnpacking(b,a.tos);
    doUnpacking(b,a.tosMetric,3);
}

class TOSDataDescriptor : public cClassDescriptor
{
  public:
    TOSDataDescriptor();
    virtual ~TOSDataDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(TOSDataDescriptor);

TOSDataDescriptor::TOSDataDescriptor() : cClassDescriptor("TOSData", "")
{
}

TOSDataDescriptor::~TOSDataDescriptor()
{
}

bool TOSDataDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TOSData *>(obj)!=NULL;
}

const char *TOSDataDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TOSDataDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TOSDataDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISARRAY | FD_ISEDITABLE;
        default: return 0;
    }
}

const char *TOSDataDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "tos";
        case 1: return "tosMetric";
        default: return NULL;
    }
}

const char *TOSDataDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        case 1: return "unsigned char";
        default: return NULL;
    }
}

const char *TOSDataDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int TOSDataDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TOSData *pp = (TOSData *)object; (void)pp;
    switch (field) {
        case 1: return 3;
        default: return 0;
    }
}

bool TOSDataDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    TOSData *pp = (TOSData *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->tos,resultbuf,bufsize); return true;
        case 1: if (i>=3) return false;
                ulong2string(pp->tosMetric[i],resultbuf,bufsize); return true;
        default: return false;
    }
}

bool TOSDataDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TOSData *pp = (TOSData *)object; (void)pp;
    switch (field) {
        case 0: pp->tos = string2ulong(value); return true;
        case 1: if (i>=3) return false;
                pp->tosMetric[i] = string2ulong(value); return true;
        default: return false;
    }
}

const char *TOSDataDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *TOSDataDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TOSData *pp = (TOSData *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Link);

Link::Link() : cObject()
{
    this->linkData_var = 0;
    this->type_var = PointToPointLink;
    this->numberOfTOS_var = 0;
    this->linkCost_var = 1;
    tosData_arraysize = 0;
    this->tosData_var = 0;
}

Link::Link(const Link& other) : cObject()
{
    tosData_arraysize = 0;
    this->tosData_var = 0;
    operator=(other);
}

Link::~Link()
{
    delete [] tosData_var;
}

Link& Link::operator=(const Link& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->linkID_var = other.linkID_var;
    this->linkData_var = other.linkData_var;
    this->type_var = other.type_var;
    this->numberOfTOS_var = other.numberOfTOS_var;
    this->linkCost_var = other.linkCost_var;
    delete [] this->tosData_var;
    this->tosData_var = (other.tosData_arraysize==0) ? NULL : new TOSData[other.tosData_arraysize];
    tosData_arraysize = other.tosData_arraysize;
    for (unsigned int i=0; i<tosData_arraysize; i++)
        this->tosData_var[i] = other.tosData_var[i];
    return *this;
}

void Link::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->linkID_var);
    doPacking(b,this->linkData_var);
    doPacking(b,this->type_var);
    doPacking(b,this->numberOfTOS_var);
    doPacking(b,this->linkCost_var);
    b->pack(tosData_arraysize);
    doPacking(b,this->tosData_var,tosData_arraysize);
}

void Link::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->linkID_var);
    doUnpacking(b,this->linkData_var);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->numberOfTOS_var);
    doUnpacking(b,this->linkCost_var);
    delete [] this->tosData_var;
    b->unpack(tosData_arraysize);
    if (tosData_arraysize==0) {
        this->tosData_var = 0;
    } else {
        this->tosData_var = new TOSData[tosData_arraysize];
        doUnpacking(b,this->tosData_var,tosData_arraysize);
    }
}

IPAddress& Link::getLinkID()
{
    return linkID_var;
}

void Link::setLinkID(const IPAddress& linkID_var)
{
    this->linkID_var = linkID_var;
}

unsigned long Link::getLinkData() const
{
    return linkData_var;
}

void Link::setLinkData(unsigned long linkData_var)
{
    this->linkData_var = linkData_var;
}

unsigned char Link::getType() const
{
    return type_var;
}

void Link::setType(unsigned char type_var)
{
    this->type_var = type_var;
}

unsigned char Link::getNumberOfTOS() const
{
    return numberOfTOS_var;
}

void Link::setNumberOfTOS(unsigned char numberOfTOS_var)
{
    this->numberOfTOS_var = numberOfTOS_var;
}

unsigned long Link::getLinkCost() const
{
    return linkCost_var;
}

void Link::setLinkCost(unsigned long linkCost_var)
{
    this->linkCost_var = linkCost_var;
}

void Link::setTosDataArraySize(unsigned int size)
{
    TOSData *tosData_var2 = (size==0) ? NULL : new TOSData[size];
    unsigned int sz = tosData_arraysize < size ? tosData_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        tosData_var2[i] = this->tosData_var[i];
    tosData_arraysize = size;
    delete [] this->tosData_var;
    this->tosData_var = tosData_var2;
}

unsigned int Link::getTosDataArraySize() const
{
    return tosData_arraysize;
}

TOSData& Link::getTosData(unsigned int k)
{
    if (k>=tosData_arraysize) throw cRuntimeError("Array of size %d indexed by %d", tosData_arraysize, k);
    return tosData_var[k];
}

void Link::setTosData(unsigned int k, const TOSData& tosData_var)
{
    if (k>=tosData_arraysize) throw cRuntimeError("Array of size %d indexed by %d", tosData_arraysize, k);
    this->tosData_var[k]=tosData_var;
}

class LinkDescriptor : public cClassDescriptor
{
  public:
    LinkDescriptor();
    virtual ~LinkDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(LinkDescriptor);

LinkDescriptor::LinkDescriptor() : cClassDescriptor("Link", "cObject")
{
}

LinkDescriptor::~LinkDescriptor()
{
}

bool LinkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Link *>(obj)!=NULL;
}

const char *LinkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LinkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int LinkDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *LinkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "linkID";
        case 1: return "linkData";
        case 2: return "type";
        case 3: return "numberOfTOS";
        case 4: return "linkCost";
        case 5: return "tosData";
        default: return NULL;
    }
}

const char *LinkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "unsigned long";
        case 2: return "unsigned char";
        case 3: return "unsigned char";
        case 4: return "unsigned long";
        case 5: return "TOSData";
        default: return NULL;
    }
}

const char *LinkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "LinkType";
            return NULL;
        default: return NULL;
    }
}

int LinkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Link *pp = (Link *)object; (void)pp;
    switch (field) {
        case 5: return pp->getTosDataArraySize();
        default: return 0;
    }
}

bool LinkDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Link *pp = (Link *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLinkID(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getLinkData(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getType(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getNumberOfTOS(),resultbuf,bufsize); return true;
        case 4: ulong2string(pp->getLinkCost(),resultbuf,bufsize); return true;
        case 5: {std::stringstream out; out << pp->getTosData(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool LinkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Link *pp = (Link *)object; (void)pp;
    switch (field) {
        case 1: pp->setLinkData(string2ulong(value)); return true;
        case 2: pp->setType(string2ulong(value)); return true;
        case 3: pp->setNumberOfTOS(string2ulong(value)); return true;
        case 4: pp->setLinkCost(string2ulong(value)); return true;
        default: return false;
    }
}

const char *LinkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress"; break;
        case 5: return "TOSData"; break;
        default: return NULL;
    }
}

void *LinkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Link *pp = (Link *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLinkID()); break;
        case 5: return (void *)(&pp->getTosData(i)); break;
        default: return NULL;
    }
}

Register_Class(OSPFRouterLSA);

OSPFRouterLSA::OSPFRouterLSA() : OSPFLSA()
{
    this->V_VirtualLinkEndpoint_var = false;
    this->E_ASBoundaryRouter_var = false;
    this->B_AreaBorderRouter_var = false;
    this->numberOfLinks_var = 0;
    links_arraysize = 0;
    this->links_var = 0;
}

OSPFRouterLSA::OSPFRouterLSA(const OSPFRouterLSA& other) : OSPFLSA()
{
    links_arraysize = 0;
    this->links_var = 0;
    operator=(other);
}

OSPFRouterLSA::~OSPFRouterLSA()
{
    delete [] links_var;
}

OSPFRouterLSA& OSPFRouterLSA::operator=(const OSPFRouterLSA& other)
{
    if (this==&other) return *this;
    OSPFLSA::operator=(other);
    this->V_VirtualLinkEndpoint_var = other.V_VirtualLinkEndpoint_var;
    this->E_ASBoundaryRouter_var = other.E_ASBoundaryRouter_var;
    this->B_AreaBorderRouter_var = other.B_AreaBorderRouter_var;
    this->numberOfLinks_var = other.numberOfLinks_var;
    delete [] this->links_var;
    this->links_var = (other.links_arraysize==0) ? NULL : new Link[other.links_arraysize];
    links_arraysize = other.links_arraysize;
    for (unsigned int i=0; i<links_arraysize; i++)
        this->links_var[i] = other.links_var[i];
    return *this;
}

void OSPFRouterLSA::parsimPack(cCommBuffer *b)
{
    OSPFLSA::parsimPack(b);
    doPacking(b,this->V_VirtualLinkEndpoint_var);
    doPacking(b,this->E_ASBoundaryRouter_var);
    doPacking(b,this->B_AreaBorderRouter_var);
    doPacking(b,this->numberOfLinks_var);
    b->pack(links_arraysize);
    doPacking(b,this->links_var,links_arraysize);
}

void OSPFRouterLSA::parsimUnpack(cCommBuffer *b)
{
    OSPFLSA::parsimUnpack(b);
    doUnpacking(b,this->V_VirtualLinkEndpoint_var);
    doUnpacking(b,this->E_ASBoundaryRouter_var);
    doUnpacking(b,this->B_AreaBorderRouter_var);
    doUnpacking(b,this->numberOfLinks_var);
    delete [] this->links_var;
    b->unpack(links_arraysize);
    if (links_arraysize==0) {
        this->links_var = 0;
    } else {
        this->links_var = new Link[links_arraysize];
        doUnpacking(b,this->links_var,links_arraysize);
    }
}

bool OSPFRouterLSA::getV_VirtualLinkEndpoint() const
{
    return V_VirtualLinkEndpoint_var;
}

void OSPFRouterLSA::setV_VirtualLinkEndpoint(bool V_VirtualLinkEndpoint_var)
{
    this->V_VirtualLinkEndpoint_var = V_VirtualLinkEndpoint_var;
}

bool OSPFRouterLSA::getE_ASBoundaryRouter() const
{
    return E_ASBoundaryRouter_var;
}

void OSPFRouterLSA::setE_ASBoundaryRouter(bool E_ASBoundaryRouter_var)
{
    this->E_ASBoundaryRouter_var = E_ASBoundaryRouter_var;
}

bool OSPFRouterLSA::getB_AreaBorderRouter() const
{
    return B_AreaBorderRouter_var;
}

void OSPFRouterLSA::setB_AreaBorderRouter(bool B_AreaBorderRouter_var)
{
    this->B_AreaBorderRouter_var = B_AreaBorderRouter_var;
}

unsigned short OSPFRouterLSA::getNumberOfLinks() const
{
    return numberOfLinks_var;
}

void OSPFRouterLSA::setNumberOfLinks(unsigned short numberOfLinks_var)
{
    this->numberOfLinks_var = numberOfLinks_var;
}

void OSPFRouterLSA::setLinksArraySize(unsigned int size)
{
    Link *links_var2 = (size==0) ? NULL : new Link[size];
    unsigned int sz = links_arraysize < size ? links_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        links_var2[i] = this->links_var[i];
    links_arraysize = size;
    delete [] this->links_var;
    this->links_var = links_var2;
}

unsigned int OSPFRouterLSA::getLinksArraySize() const
{
    return links_arraysize;
}

Link& OSPFRouterLSA::getLinks(unsigned int k)
{
    if (k>=links_arraysize) throw cRuntimeError("Array of size %d indexed by %d", links_arraysize, k);
    return links_var[k];
}

void OSPFRouterLSA::setLinks(unsigned int k, const Link& links_var)
{
    if (k>=links_arraysize) throw cRuntimeError("Array of size %d indexed by %d", links_arraysize, k);
    this->links_var[k]=links_var;
}

class OSPFRouterLSADescriptor : public cClassDescriptor
{
  public:
    OSPFRouterLSADescriptor();
    virtual ~OSPFRouterLSADescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFRouterLSADescriptor);

OSPFRouterLSADescriptor::OSPFRouterLSADescriptor() : cClassDescriptor("OSPFRouterLSA", "OSPFLSA")
{
}

OSPFRouterLSADescriptor::~OSPFRouterLSADescriptor()
{
}

bool OSPFRouterLSADescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFRouterLSA *>(obj)!=NULL;
}

const char *OSPFRouterLSADescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFRouterLSADescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int OSPFRouterLSADescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *OSPFRouterLSADescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "V_VirtualLinkEndpoint";
        case 1: return "E_ASBoundaryRouter";
        case 2: return "B_AreaBorderRouter";
        case 3: return "numberOfLinks";
        case 4: return "links";
        default: return NULL;
    }
}

const char *OSPFRouterLSADescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "bool";
        case 2: return "bool";
        case 3: return "unsigned short";
        case 4: return "Link";
        default: return NULL;
    }
}

const char *OSPFRouterLSADescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFRouterLSADescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFRouterLSA *pp = (OSPFRouterLSA *)object; (void)pp;
    switch (field) {
        case 4: return pp->getLinksArraySize();
        default: return 0;
    }
}

bool OSPFRouterLSADescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFRouterLSA *pp = (OSPFRouterLSA *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getV_VirtualLinkEndpoint(),resultbuf,bufsize); return true;
        case 1: bool2string(pp->getE_ASBoundaryRouter(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->getB_AreaBorderRouter(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getNumberOfLinks(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->getLinks(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFRouterLSADescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFRouterLSA *pp = (OSPFRouterLSA *)object; (void)pp;
    switch (field) {
        case 0: pp->setV_VirtualLinkEndpoint(string2bool(value)); return true;
        case 1: pp->setE_ASBoundaryRouter(string2bool(value)); return true;
        case 2: pp->setB_AreaBorderRouter(string2bool(value)); return true;
        case 3: pp->setNumberOfLinks(string2ulong(value)); return true;
        default: return false;
    }
}

const char *OSPFRouterLSADescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4: return "Link"; break;
        default: return NULL;
    }
}

void *OSPFRouterLSADescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFRouterLSA *pp = (OSPFRouterLSA *)object; (void)pp;
    switch (field) {
        case 4: return (void *)static_cast<cObject *>(&pp->getLinks(i)); break;
        default: return NULL;
    }
}

Register_Class(OSPFNetworkLSA);

OSPFNetworkLSA::OSPFNetworkLSA() : OSPFLSA()
{
    attachedRouters_arraysize = 0;
    this->attachedRouters_var = 0;
}

OSPFNetworkLSA::OSPFNetworkLSA(const OSPFNetworkLSA& other) : OSPFLSA()
{
    attachedRouters_arraysize = 0;
    this->attachedRouters_var = 0;
    operator=(other);
}

OSPFNetworkLSA::~OSPFNetworkLSA()
{
    delete [] attachedRouters_var;
}

OSPFNetworkLSA& OSPFNetworkLSA::operator=(const OSPFNetworkLSA& other)
{
    if (this==&other) return *this;
    OSPFLSA::operator=(other);
    this->networkMask_var = other.networkMask_var;
    delete [] this->attachedRouters_var;
    this->attachedRouters_var = (other.attachedRouters_arraysize==0) ? NULL : new IPAddress[other.attachedRouters_arraysize];
    attachedRouters_arraysize = other.attachedRouters_arraysize;
    for (unsigned int i=0; i<attachedRouters_arraysize; i++)
        this->attachedRouters_var[i] = other.attachedRouters_var[i];
    return *this;
}

void OSPFNetworkLSA::parsimPack(cCommBuffer *b)
{
    OSPFLSA::parsimPack(b);
    doPacking(b,this->networkMask_var);
    b->pack(attachedRouters_arraysize);
    doPacking(b,this->attachedRouters_var,attachedRouters_arraysize);
}

void OSPFNetworkLSA::parsimUnpack(cCommBuffer *b)
{
    OSPFLSA::parsimUnpack(b);
    doUnpacking(b,this->networkMask_var);
    delete [] this->attachedRouters_var;
    b->unpack(attachedRouters_arraysize);
    if (attachedRouters_arraysize==0) {
        this->attachedRouters_var = 0;
    } else {
        this->attachedRouters_var = new IPAddress[attachedRouters_arraysize];
        doUnpacking(b,this->attachedRouters_var,attachedRouters_arraysize);
    }
}

IPAddress& OSPFNetworkLSA::getNetworkMask()
{
    return networkMask_var;
}

void OSPFNetworkLSA::setNetworkMask(const IPAddress& networkMask_var)
{
    this->networkMask_var = networkMask_var;
}

void OSPFNetworkLSA::setAttachedRoutersArraySize(unsigned int size)
{
    IPAddress *attachedRouters_var2 = (size==0) ? NULL : new IPAddress[size];
    unsigned int sz = attachedRouters_arraysize < size ? attachedRouters_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        attachedRouters_var2[i] = this->attachedRouters_var[i];
    attachedRouters_arraysize = size;
    delete [] this->attachedRouters_var;
    this->attachedRouters_var = attachedRouters_var2;
}

unsigned int OSPFNetworkLSA::getAttachedRoutersArraySize() const
{
    return attachedRouters_arraysize;
}

IPAddress& OSPFNetworkLSA::getAttachedRouters(unsigned int k)
{
    if (k>=attachedRouters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", attachedRouters_arraysize, k);
    return attachedRouters_var[k];
}

void OSPFNetworkLSA::setAttachedRouters(unsigned int k, const IPAddress& attachedRouters_var)
{
    if (k>=attachedRouters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", attachedRouters_arraysize, k);
    this->attachedRouters_var[k]=attachedRouters_var;
}

class OSPFNetworkLSADescriptor : public cClassDescriptor
{
  public:
    OSPFNetworkLSADescriptor();
    virtual ~OSPFNetworkLSADescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFNetworkLSADescriptor);

OSPFNetworkLSADescriptor::OSPFNetworkLSADescriptor() : cClassDescriptor("OSPFNetworkLSA", "OSPFLSA")
{
}

OSPFNetworkLSADescriptor::~OSPFNetworkLSADescriptor()
{
}

bool OSPFNetworkLSADescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFNetworkLSA *>(obj)!=NULL;
}

const char *OSPFNetworkLSADescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFNetworkLSADescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int OSPFNetworkLSADescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *OSPFNetworkLSADescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "networkMask";
        case 1: return "attachedRouters";
        default: return NULL;
    }
}

const char *OSPFNetworkLSADescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "IPAddress";
        default: return NULL;
    }
}

const char *OSPFNetworkLSADescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFNetworkLSADescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFNetworkLSA *pp = (OSPFNetworkLSA *)object; (void)pp;
    switch (field) {
        case 1: return pp->getAttachedRoutersArraySize();
        default: return 0;
    }
}

bool OSPFNetworkLSADescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFNetworkLSA *pp = (OSPFNetworkLSA *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNetworkMask(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getAttachedRouters(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFNetworkLSADescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFNetworkLSA *pp = (OSPFNetworkLSA *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *OSPFNetworkLSADescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress"; break;
        case 1: return "IPAddress"; break;
        default: return NULL;
    }
}

void *OSPFNetworkLSADescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFNetworkLSA *pp = (OSPFNetworkLSA *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNetworkMask()); break;
        case 1: return (void *)(&pp->getAttachedRouters(i)); break;
        default: return NULL;
    }
}

Register_Class(OSPFSummaryLSA);

OSPFSummaryLSA::OSPFSummaryLSA() : OSPFLSA()
{
    this->routeCost_var = 1;
    tosData_arraysize = 0;
    this->tosData_var = 0;
}

OSPFSummaryLSA::OSPFSummaryLSA(const OSPFSummaryLSA& other) : OSPFLSA()
{
    tosData_arraysize = 0;
    this->tosData_var = 0;
    operator=(other);
}

OSPFSummaryLSA::~OSPFSummaryLSA()
{
    delete [] tosData_var;
}

OSPFSummaryLSA& OSPFSummaryLSA::operator=(const OSPFSummaryLSA& other)
{
    if (this==&other) return *this;
    OSPFLSA::operator=(other);
    this->networkMask_var = other.networkMask_var;
    this->routeCost_var = other.routeCost_var;
    delete [] this->tosData_var;
    this->tosData_var = (other.tosData_arraysize==0) ? NULL : new TOSData[other.tosData_arraysize];
    tosData_arraysize = other.tosData_arraysize;
    for (unsigned int i=0; i<tosData_arraysize; i++)
        this->tosData_var[i] = other.tosData_var[i];
    return *this;
}

void OSPFSummaryLSA::parsimPack(cCommBuffer *b)
{
    OSPFLSA::parsimPack(b);
    doPacking(b,this->networkMask_var);
    doPacking(b,this->routeCost_var);
    b->pack(tosData_arraysize);
    doPacking(b,this->tosData_var,tosData_arraysize);
}

void OSPFSummaryLSA::parsimUnpack(cCommBuffer *b)
{
    OSPFLSA::parsimUnpack(b);
    doUnpacking(b,this->networkMask_var);
    doUnpacking(b,this->routeCost_var);
    delete [] this->tosData_var;
    b->unpack(tosData_arraysize);
    if (tosData_arraysize==0) {
        this->tosData_var = 0;
    } else {
        this->tosData_var = new TOSData[tosData_arraysize];
        doUnpacking(b,this->tosData_var,tosData_arraysize);
    }
}

IPAddress& OSPFSummaryLSA::getNetworkMask()
{
    return networkMask_var;
}

void OSPFSummaryLSA::setNetworkMask(const IPAddress& networkMask_var)
{
    this->networkMask_var = networkMask_var;
}

unsigned long OSPFSummaryLSA::getRouteCost() const
{
    return routeCost_var;
}

void OSPFSummaryLSA::setRouteCost(unsigned long routeCost_var)
{
    this->routeCost_var = routeCost_var;
}

void OSPFSummaryLSA::setTosDataArraySize(unsigned int size)
{
    TOSData *tosData_var2 = (size==0) ? NULL : new TOSData[size];
    unsigned int sz = tosData_arraysize < size ? tosData_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        tosData_var2[i] = this->tosData_var[i];
    tosData_arraysize = size;
    delete [] this->tosData_var;
    this->tosData_var = tosData_var2;
}

unsigned int OSPFSummaryLSA::getTosDataArraySize() const
{
    return tosData_arraysize;
}

TOSData& OSPFSummaryLSA::getTosData(unsigned int k)
{
    if (k>=tosData_arraysize) throw cRuntimeError("Array of size %d indexed by %d", tosData_arraysize, k);
    return tosData_var[k];
}

void OSPFSummaryLSA::setTosData(unsigned int k, const TOSData& tosData_var)
{
    if (k>=tosData_arraysize) throw cRuntimeError("Array of size %d indexed by %d", tosData_arraysize, k);
    this->tosData_var[k]=tosData_var;
}

class OSPFSummaryLSADescriptor : public cClassDescriptor
{
  public:
    OSPFSummaryLSADescriptor();
    virtual ~OSPFSummaryLSADescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFSummaryLSADescriptor);

OSPFSummaryLSADescriptor::OSPFSummaryLSADescriptor() : cClassDescriptor("OSPFSummaryLSA", "OSPFLSA")
{
}

OSPFSummaryLSADescriptor::~OSPFSummaryLSADescriptor()
{
}

bool OSPFSummaryLSADescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFSummaryLSA *>(obj)!=NULL;
}

const char *OSPFSummaryLSADescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFSummaryLSADescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int OSPFSummaryLSADescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *OSPFSummaryLSADescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "networkMask";
        case 1: return "routeCost";
        case 2: return "tosData";
        default: return NULL;
    }
}

const char *OSPFSummaryLSADescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "unsigned long";
        case 2: return "TOSData";
        default: return NULL;
    }
}

const char *OSPFSummaryLSADescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFSummaryLSADescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFSummaryLSA *pp = (OSPFSummaryLSA *)object; (void)pp;
    switch (field) {
        case 2: return pp->getTosDataArraySize();
        default: return 0;
    }
}

bool OSPFSummaryLSADescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFSummaryLSA *pp = (OSPFSummaryLSA *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNetworkMask(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getRouteCost(),resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->getTosData(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFSummaryLSADescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFSummaryLSA *pp = (OSPFSummaryLSA *)object; (void)pp;
    switch (field) {
        case 1: pp->setRouteCost(string2ulong(value)); return true;
        default: return false;
    }
}

const char *OSPFSummaryLSADescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress"; break;
        case 2: return "TOSData"; break;
        default: return NULL;
    }
}

void *OSPFSummaryLSADescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFSummaryLSA *pp = (OSPFSummaryLSA *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNetworkMask()); break;
        case 2: return (void *)(&pp->getTosData(i)); break;
        default: return NULL;
    }
}

ExternalTOSInfo::ExternalTOSInfo()
{
    E_ExternalMetricType = 0;
    externalRouteTag = 0;
}

void doPacking(cCommBuffer *b, ExternalTOSInfo& a)
{
    doPacking(b,a.tosData);
    doPacking(b,a.E_ExternalMetricType);
    doPacking(b,a.forwardingAddress);
    doPacking(b,a.externalRouteTag);
}

void doUnpacking(cCommBuffer *b, ExternalTOSInfo& a)
{
    doUnpacking(b,a.tosData);
    doUnpacking(b,a.E_ExternalMetricType);
    doUnpacking(b,a.forwardingAddress);
    doUnpacking(b,a.externalRouteTag);
}

class ExternalTOSInfoDescriptor : public cClassDescriptor
{
  public:
    ExternalTOSInfoDescriptor();
    virtual ~ExternalTOSInfoDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(ExternalTOSInfoDescriptor);

ExternalTOSInfoDescriptor::ExternalTOSInfoDescriptor() : cClassDescriptor("ExternalTOSInfo", "")
{
}

ExternalTOSInfoDescriptor::~ExternalTOSInfoDescriptor()
{
}

bool ExternalTOSInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ExternalTOSInfo *>(obj)!=NULL;
}

const char *ExternalTOSInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ExternalTOSInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int ExternalTOSInfoDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISCOMPOUND;
        case 3: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *ExternalTOSInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "tosData";
        case 1: return "E_ExternalMetricType";
        case 2: return "forwardingAddress";
        case 3: return "externalRouteTag";
        default: return NULL;
    }
}

const char *ExternalTOSInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TOSData";
        case 1: return "bool";
        case 2: return "IPAddress";
        case 3: return "long";
        default: return NULL;
    }
}

const char *ExternalTOSInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int ExternalTOSInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ExternalTOSInfo *pp = (ExternalTOSInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ExternalTOSInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ExternalTOSInfo *pp = (ExternalTOSInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->tosData; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: bool2string(pp->E_ExternalMetricType,resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->forwardingAddress; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: long2string(pp->externalRouteTag,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool ExternalTOSInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ExternalTOSInfo *pp = (ExternalTOSInfo *)object; (void)pp;
    switch (field) {
        case 1: pp->E_ExternalMetricType = string2bool(value); return true;
        case 3: pp->externalRouteTag = string2long(value); return true;
        default: return false;
    }
}

const char *ExternalTOSInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TOSData"; break;
        case 2: return "IPAddress"; break;
        default: return NULL;
    }
}

void *ExternalTOSInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ExternalTOSInfo *pp = (ExternalTOSInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->tosData); break;
        case 2: return (void *)(&pp->forwardingAddress); break;
        default: return NULL;
    }
}

Register_Class(OSPFASExternalLSAContents);

OSPFASExternalLSAContents::OSPFASExternalLSAContents() : cObject()
{
    this->E_ExternalMetricType_var = false;
    this->routeCost_var = 1;
    this->externalRouteTag_var = 0;
    externalTOSInfo_arraysize = 0;
    this->externalTOSInfo_var = 0;
}

OSPFASExternalLSAContents::OSPFASExternalLSAContents(const OSPFASExternalLSAContents& other) : cObject()
{
    externalTOSInfo_arraysize = 0;
    this->externalTOSInfo_var = 0;
    operator=(other);
}

OSPFASExternalLSAContents::~OSPFASExternalLSAContents()
{
    delete [] externalTOSInfo_var;
}

OSPFASExternalLSAContents& OSPFASExternalLSAContents::operator=(const OSPFASExternalLSAContents& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->networkMask_var = other.networkMask_var;
    this->E_ExternalMetricType_var = other.E_ExternalMetricType_var;
    this->routeCost_var = other.routeCost_var;
    this->forwardingAddress_var = other.forwardingAddress_var;
    this->externalRouteTag_var = other.externalRouteTag_var;
    delete [] this->externalTOSInfo_var;
    this->externalTOSInfo_var = (other.externalTOSInfo_arraysize==0) ? NULL : new ExternalTOSInfo[other.externalTOSInfo_arraysize];
    externalTOSInfo_arraysize = other.externalTOSInfo_arraysize;
    for (unsigned int i=0; i<externalTOSInfo_arraysize; i++)
        this->externalTOSInfo_var[i] = other.externalTOSInfo_var[i];
    return *this;
}

void OSPFASExternalLSAContents::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->networkMask_var);
    doPacking(b,this->E_ExternalMetricType_var);
    doPacking(b,this->routeCost_var);
    doPacking(b,this->forwardingAddress_var);
    doPacking(b,this->externalRouteTag_var);
    b->pack(externalTOSInfo_arraysize);
    doPacking(b,this->externalTOSInfo_var,externalTOSInfo_arraysize);
}

void OSPFASExternalLSAContents::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->networkMask_var);
    doUnpacking(b,this->E_ExternalMetricType_var);
    doUnpacking(b,this->routeCost_var);
    doUnpacking(b,this->forwardingAddress_var);
    doUnpacking(b,this->externalRouteTag_var);
    delete [] this->externalTOSInfo_var;
    b->unpack(externalTOSInfo_arraysize);
    if (externalTOSInfo_arraysize==0) {
        this->externalTOSInfo_var = 0;
    } else {
        this->externalTOSInfo_var = new ExternalTOSInfo[externalTOSInfo_arraysize];
        doUnpacking(b,this->externalTOSInfo_var,externalTOSInfo_arraysize);
    }
}

IPAddress& OSPFASExternalLSAContents::getNetworkMask()
{
    return networkMask_var;
}

void OSPFASExternalLSAContents::setNetworkMask(const IPAddress& networkMask_var)
{
    this->networkMask_var = networkMask_var;
}

bool OSPFASExternalLSAContents::getE_ExternalMetricType() const
{
    return E_ExternalMetricType_var;
}

void OSPFASExternalLSAContents::setE_ExternalMetricType(bool E_ExternalMetricType_var)
{
    this->E_ExternalMetricType_var = E_ExternalMetricType_var;
}

unsigned long OSPFASExternalLSAContents::getRouteCost() const
{
    return routeCost_var;
}

void OSPFASExternalLSAContents::setRouteCost(unsigned long routeCost_var)
{
    this->routeCost_var = routeCost_var;
}

IPAddress& OSPFASExternalLSAContents::getForwardingAddress()
{
    return forwardingAddress_var;
}

void OSPFASExternalLSAContents::setForwardingAddress(const IPAddress& forwardingAddress_var)
{
    this->forwardingAddress_var = forwardingAddress_var;
}

long OSPFASExternalLSAContents::getExternalRouteTag() const
{
    return externalRouteTag_var;
}

void OSPFASExternalLSAContents::setExternalRouteTag(long externalRouteTag_var)
{
    this->externalRouteTag_var = externalRouteTag_var;
}

void OSPFASExternalLSAContents::setExternalTOSInfoArraySize(unsigned int size)
{
    ExternalTOSInfo *externalTOSInfo_var2 = (size==0) ? NULL : new ExternalTOSInfo[size];
    unsigned int sz = externalTOSInfo_arraysize < size ? externalTOSInfo_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        externalTOSInfo_var2[i] = this->externalTOSInfo_var[i];
    externalTOSInfo_arraysize = size;
    delete [] this->externalTOSInfo_var;
    this->externalTOSInfo_var = externalTOSInfo_var2;
}

unsigned int OSPFASExternalLSAContents::getExternalTOSInfoArraySize() const
{
    return externalTOSInfo_arraysize;
}

ExternalTOSInfo& OSPFASExternalLSAContents::getExternalTOSInfo(unsigned int k)
{
    if (k>=externalTOSInfo_arraysize) throw cRuntimeError("Array of size %d indexed by %d", externalTOSInfo_arraysize, k);
    return externalTOSInfo_var[k];
}

void OSPFASExternalLSAContents::setExternalTOSInfo(unsigned int k, const ExternalTOSInfo& externalTOSInfo_var)
{
    if (k>=externalTOSInfo_arraysize) throw cRuntimeError("Array of size %d indexed by %d", externalTOSInfo_arraysize, k);
    this->externalTOSInfo_var[k]=externalTOSInfo_var;
}

class OSPFASExternalLSAContentsDescriptor : public cClassDescriptor
{
  public:
    OSPFASExternalLSAContentsDescriptor();
    virtual ~OSPFASExternalLSAContentsDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFASExternalLSAContentsDescriptor);

OSPFASExternalLSAContentsDescriptor::OSPFASExternalLSAContentsDescriptor() : cClassDescriptor("OSPFASExternalLSAContents", "cObject")
{
}

OSPFASExternalLSAContentsDescriptor::~OSPFASExternalLSAContentsDescriptor()
{
}

bool OSPFASExternalLSAContentsDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFASExternalLSAContents *>(obj)!=NULL;
}

const char *OSPFASExternalLSAContentsDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFASExternalLSAContentsDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int OSPFASExternalLSAContentsDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISCOMPOUND;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *OSPFASExternalLSAContentsDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "networkMask";
        case 1: return "E_ExternalMetricType";
        case 2: return "routeCost";
        case 3: return "forwardingAddress";
        case 4: return "externalRouteTag";
        case 5: return "externalTOSInfo";
        default: return NULL;
    }
}

const char *OSPFASExternalLSAContentsDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress";
        case 1: return "bool";
        case 2: return "unsigned long";
        case 3: return "IPAddress";
        case 4: return "long";
        case 5: return "ExternalTOSInfo";
        default: return NULL;
    }
}

const char *OSPFASExternalLSAContentsDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFASExternalLSAContentsDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFASExternalLSAContents *pp = (OSPFASExternalLSAContents *)object; (void)pp;
    switch (field) {
        case 5: return pp->getExternalTOSInfoArraySize();
        default: return 0;
    }
}

bool OSPFASExternalLSAContentsDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFASExternalLSAContents *pp = (OSPFASExternalLSAContents *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNetworkMask(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: bool2string(pp->getE_ExternalMetricType(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getRouteCost(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getForwardingAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: long2string(pp->getExternalRouteTag(),resultbuf,bufsize); return true;
        case 5: {std::stringstream out; out << pp->getExternalTOSInfo(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFASExternalLSAContentsDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFASExternalLSAContents *pp = (OSPFASExternalLSAContents *)object; (void)pp;
    switch (field) {
        case 1: pp->setE_ExternalMetricType(string2bool(value)); return true;
        case 2: pp->setRouteCost(string2ulong(value)); return true;
        case 4: pp->setExternalRouteTag(string2long(value)); return true;
        default: return false;
    }
}

const char *OSPFASExternalLSAContentsDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "IPAddress"; break;
        case 3: return "IPAddress"; break;
        case 5: return "ExternalTOSInfo"; break;
        default: return NULL;
    }
}

void *OSPFASExternalLSAContentsDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFASExternalLSAContents *pp = (OSPFASExternalLSAContents *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNetworkMask()); break;
        case 3: return (void *)(&pp->getForwardingAddress()); break;
        case 5: return (void *)(&pp->getExternalTOSInfo(i)); break;
        default: return NULL;
    }
}

Register_Class(OSPFASExternalLSA);

OSPFASExternalLSA::OSPFASExternalLSA() : OSPFLSA()
{
}

OSPFASExternalLSA::OSPFASExternalLSA(const OSPFASExternalLSA& other) : OSPFLSA()
{
    operator=(other);
}

OSPFASExternalLSA::~OSPFASExternalLSA()
{
}

OSPFASExternalLSA& OSPFASExternalLSA::operator=(const OSPFASExternalLSA& other)
{
    if (this==&other) return *this;
    OSPFLSA::operator=(other);
    this->contents_var = other.contents_var;
    return *this;
}

void OSPFASExternalLSA::parsimPack(cCommBuffer *b)
{
    OSPFLSA::parsimPack(b);
    doPacking(b,this->contents_var);
}

void OSPFASExternalLSA::parsimUnpack(cCommBuffer *b)
{
    OSPFLSA::parsimUnpack(b);
    doUnpacking(b,this->contents_var);
}

OSPFASExternalLSAContents& OSPFASExternalLSA::getContents()
{
    return contents_var;
}

void OSPFASExternalLSA::setContents(const OSPFASExternalLSAContents& contents_var)
{
    this->contents_var = contents_var;
}

class OSPFASExternalLSADescriptor : public cClassDescriptor
{
  public:
    OSPFASExternalLSADescriptor();
    virtual ~OSPFASExternalLSADescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFASExternalLSADescriptor);

OSPFASExternalLSADescriptor::OSPFASExternalLSADescriptor() : cClassDescriptor("OSPFASExternalLSA", "OSPFLSA")
{
}

OSPFASExternalLSADescriptor::~OSPFASExternalLSADescriptor()
{
}

bool OSPFASExternalLSADescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFASExternalLSA *>(obj)!=NULL;
}

const char *OSPFASExternalLSADescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFASExternalLSADescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int OSPFASExternalLSADescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *OSPFASExternalLSADescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "contents";
        default: return NULL;
    }
}

const char *OSPFASExternalLSADescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OSPFASExternalLSAContents";
        default: return NULL;
    }
}

const char *OSPFASExternalLSADescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFASExternalLSADescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFASExternalLSA *pp = (OSPFASExternalLSA *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool OSPFASExternalLSADescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFASExternalLSA *pp = (OSPFASExternalLSA *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getContents(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFASExternalLSADescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFASExternalLSA *pp = (OSPFASExternalLSA *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *OSPFASExternalLSADescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OSPFASExternalLSAContents"; break;
        default: return NULL;
    }
}

void *OSPFASExternalLSADescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFASExternalLSA *pp = (OSPFASExternalLSA *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getContents()); break;
        default: return NULL;
    }
}

OSPFDDOptions::OSPFDDOptions()
{
    unused_1 = 0;
    unused_2 = 0;
    unused_3 = 0;
    unused_4 = 0;
    unused_5 = 0;
    I_Init = 0;
    M_More = 0;
    MS_MasterSlave = 0;
}

void doPacking(cCommBuffer *b, OSPFDDOptions& a)
{
    doPacking(b,a.unused_1);
    doPacking(b,a.unused_2);
    doPacking(b,a.unused_3);
    doPacking(b,a.unused_4);
    doPacking(b,a.unused_5);
    doPacking(b,a.I_Init);
    doPacking(b,a.M_More);
    doPacking(b,a.MS_MasterSlave);
}

void doUnpacking(cCommBuffer *b, OSPFDDOptions& a)
{
    doUnpacking(b,a.unused_1);
    doUnpacking(b,a.unused_2);
    doUnpacking(b,a.unused_3);
    doUnpacking(b,a.unused_4);
    doUnpacking(b,a.unused_5);
    doUnpacking(b,a.I_Init);
    doUnpacking(b,a.M_More);
    doUnpacking(b,a.MS_MasterSlave);
}

class OSPFDDOptionsDescriptor : public cClassDescriptor
{
  public:
    OSPFDDOptionsDescriptor();
    virtual ~OSPFDDOptionsDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFDDOptionsDescriptor);

OSPFDDOptionsDescriptor::OSPFDDOptionsDescriptor() : cClassDescriptor("OSPFDDOptions", "")
{
}

OSPFDDOptionsDescriptor::~OSPFDDOptionsDescriptor()
{
}

bool OSPFDDOptionsDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFDDOptions *>(obj)!=NULL;
}

const char *OSPFDDOptionsDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFDDOptionsDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int OSPFDDOptionsDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *OSPFDDOptionsDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unused_1";
        case 1: return "unused_2";
        case 2: return "unused_3";
        case 3: return "unused_4";
        case 4: return "unused_5";
        case 5: return "I_Init";
        case 6: return "M_More";
        case 7: return "MS_MasterSlave";
        default: return NULL;
    }
}

const char *OSPFDDOptionsDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "bool";
        case 2: return "bool";
        case 3: return "bool";
        case 4: return "bool";
        case 5: return "bool";
        case 6: return "bool";
        case 7: return "bool";
        default: return NULL;
    }
}

const char *OSPFDDOptionsDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFDDOptionsDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFDDOptions *pp = (OSPFDDOptions *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool OSPFDDOptionsDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFDDOptions *pp = (OSPFDDOptions *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->unused_1,resultbuf,bufsize); return true;
        case 1: bool2string(pp->unused_2,resultbuf,bufsize); return true;
        case 2: bool2string(pp->unused_3,resultbuf,bufsize); return true;
        case 3: bool2string(pp->unused_4,resultbuf,bufsize); return true;
        case 4: bool2string(pp->unused_5,resultbuf,bufsize); return true;
        case 5: bool2string(pp->I_Init,resultbuf,bufsize); return true;
        case 6: bool2string(pp->M_More,resultbuf,bufsize); return true;
        case 7: bool2string(pp->MS_MasterSlave,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool OSPFDDOptionsDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFDDOptions *pp = (OSPFDDOptions *)object; (void)pp;
    switch (field) {
        case 0: pp->unused_1 = string2bool(value); return true;
        case 1: pp->unused_2 = string2bool(value); return true;
        case 2: pp->unused_3 = string2bool(value); return true;
        case 3: pp->unused_4 = string2bool(value); return true;
        case 4: pp->unused_5 = string2bool(value); return true;
        case 5: pp->I_Init = string2bool(value); return true;
        case 6: pp->M_More = string2bool(value); return true;
        case 7: pp->MS_MasterSlave = string2bool(value); return true;
        default: return false;
    }
}

const char *OSPFDDOptionsDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *OSPFDDOptionsDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFDDOptions *pp = (OSPFDDOptions *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(OSPFDatabaseDescriptionPacket);

OSPFDatabaseDescriptionPacket::OSPFDatabaseDescriptionPacket(const char *name, int kind) : OSPFPacket(name,kind)
{
    this->interfaceMTU_var = 0;
    this->ddSequenceNumber_var = 0;
    lsaHeaders_arraysize = 0;
    this->lsaHeaders_var = 0;
}

OSPFDatabaseDescriptionPacket::OSPFDatabaseDescriptionPacket(const OSPFDatabaseDescriptionPacket& other) : OSPFPacket()
{
    setName(other.getName());
    lsaHeaders_arraysize = 0;
    this->lsaHeaders_var = 0;
    operator=(other);
}

OSPFDatabaseDescriptionPacket::~OSPFDatabaseDescriptionPacket()
{
    delete [] lsaHeaders_var;
}

OSPFDatabaseDescriptionPacket& OSPFDatabaseDescriptionPacket::operator=(const OSPFDatabaseDescriptionPacket& other)
{
    if (this==&other) return *this;
    OSPFPacket::operator=(other);
    this->interfaceMTU_var = other.interfaceMTU_var;
    this->options_var = other.options_var;
    this->ddOptions_var = other.ddOptions_var;
    this->ddSequenceNumber_var = other.ddSequenceNumber_var;
    delete [] this->lsaHeaders_var;
    this->lsaHeaders_var = (other.lsaHeaders_arraysize==0) ? NULL : new OSPFLSAHeader[other.lsaHeaders_arraysize];
    lsaHeaders_arraysize = other.lsaHeaders_arraysize;
    for (unsigned int i=0; i<lsaHeaders_arraysize; i++)
        this->lsaHeaders_var[i] = other.lsaHeaders_var[i];
    return *this;
}

void OSPFDatabaseDescriptionPacket::parsimPack(cCommBuffer *b)
{
    OSPFPacket::parsimPack(b);
    doPacking(b,this->interfaceMTU_var);
    doPacking(b,this->options_var);
    doPacking(b,this->ddOptions_var);
    doPacking(b,this->ddSequenceNumber_var);
    b->pack(lsaHeaders_arraysize);
    doPacking(b,this->lsaHeaders_var,lsaHeaders_arraysize);
}

void OSPFDatabaseDescriptionPacket::parsimUnpack(cCommBuffer *b)
{
    OSPFPacket::parsimUnpack(b);
    doUnpacking(b,this->interfaceMTU_var);
    doUnpacking(b,this->options_var);
    doUnpacking(b,this->ddOptions_var);
    doUnpacking(b,this->ddSequenceNumber_var);
    delete [] this->lsaHeaders_var;
    b->unpack(lsaHeaders_arraysize);
    if (lsaHeaders_arraysize==0) {
        this->lsaHeaders_var = 0;
    } else {
        this->lsaHeaders_var = new OSPFLSAHeader[lsaHeaders_arraysize];
        doUnpacking(b,this->lsaHeaders_var,lsaHeaders_arraysize);
    }
}

unsigned short OSPFDatabaseDescriptionPacket::getInterfaceMTU() const
{
    return interfaceMTU_var;
}

void OSPFDatabaseDescriptionPacket::setInterfaceMTU(unsigned short interfaceMTU_var)
{
    this->interfaceMTU_var = interfaceMTU_var;
}

OSPFOptions& OSPFDatabaseDescriptionPacket::getOptions()
{
    return options_var;
}

void OSPFDatabaseDescriptionPacket::setOptions(const OSPFOptions& options_var)
{
    this->options_var = options_var;
}

OSPFDDOptions& OSPFDatabaseDescriptionPacket::getDdOptions()
{
    return ddOptions_var;
}

void OSPFDatabaseDescriptionPacket::setDdOptions(const OSPFDDOptions& ddOptions_var)
{
    this->ddOptions_var = ddOptions_var;
}

unsigned long OSPFDatabaseDescriptionPacket::getDdSequenceNumber() const
{
    return ddSequenceNumber_var;
}

void OSPFDatabaseDescriptionPacket::setDdSequenceNumber(unsigned long ddSequenceNumber_var)
{
    this->ddSequenceNumber_var = ddSequenceNumber_var;
}

void OSPFDatabaseDescriptionPacket::setLsaHeadersArraySize(unsigned int size)
{
    OSPFLSAHeader *lsaHeaders_var2 = (size==0) ? NULL : new OSPFLSAHeader[size];
    unsigned int sz = lsaHeaders_arraysize < size ? lsaHeaders_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        lsaHeaders_var2[i] = this->lsaHeaders_var[i];
    lsaHeaders_arraysize = size;
    delete [] this->lsaHeaders_var;
    this->lsaHeaders_var = lsaHeaders_var2;
}

unsigned int OSPFDatabaseDescriptionPacket::getLsaHeadersArraySize() const
{
    return lsaHeaders_arraysize;
}

OSPFLSAHeader& OSPFDatabaseDescriptionPacket::getLsaHeaders(unsigned int k)
{
    if (k>=lsaHeaders_arraysize) throw cRuntimeError("Array of size %d indexed by %d", lsaHeaders_arraysize, k);
    return lsaHeaders_var[k];
}

void OSPFDatabaseDescriptionPacket::setLsaHeaders(unsigned int k, const OSPFLSAHeader& lsaHeaders_var)
{
    if (k>=lsaHeaders_arraysize) throw cRuntimeError("Array of size %d indexed by %d", lsaHeaders_arraysize, k);
    this->lsaHeaders_var[k]=lsaHeaders_var;
}

class OSPFDatabaseDescriptionPacketDescriptor : public cClassDescriptor
{
  public:
    OSPFDatabaseDescriptionPacketDescriptor();
    virtual ~OSPFDatabaseDescriptionPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFDatabaseDescriptionPacketDescriptor);

OSPFDatabaseDescriptionPacketDescriptor::OSPFDatabaseDescriptionPacketDescriptor() : cClassDescriptor("OSPFDatabaseDescriptionPacket", "OSPFPacket")
{
}

OSPFDatabaseDescriptionPacketDescriptor::~OSPFDatabaseDescriptionPacketDescriptor()
{
}

bool OSPFDatabaseDescriptionPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFDatabaseDescriptionPacket *>(obj)!=NULL;
}

const char *OSPFDatabaseDescriptionPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFDatabaseDescriptionPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int OSPFDatabaseDescriptionPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISCOMPOUND;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *OSPFDatabaseDescriptionPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "interfaceMTU";
        case 1: return "options";
        case 2: return "ddOptions";
        case 3: return "ddSequenceNumber";
        case 4: return "lsaHeaders";
        default: return NULL;
    }
}

const char *OSPFDatabaseDescriptionPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned short";
        case 1: return "OSPFOptions";
        case 2: return "OSPFDDOptions";
        case 3: return "unsigned long";
        case 4: return "OSPFLSAHeader";
        default: return NULL;
    }
}

const char *OSPFDatabaseDescriptionPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFDatabaseDescriptionPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFDatabaseDescriptionPacket *pp = (OSPFDatabaseDescriptionPacket *)object; (void)pp;
    switch (field) {
        case 4: return pp->getLsaHeadersArraySize();
        default: return 0;
    }
}

bool OSPFDatabaseDescriptionPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFDatabaseDescriptionPacket *pp = (OSPFDatabaseDescriptionPacket *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getInterfaceMTU(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getOptions(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getDdOptions(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: ulong2string(pp->getDdSequenceNumber(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->getLsaHeaders(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFDatabaseDescriptionPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFDatabaseDescriptionPacket *pp = (OSPFDatabaseDescriptionPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setInterfaceMTU(string2ulong(value)); return true;
        case 3: pp->setDdSequenceNumber(string2ulong(value)); return true;
        default: return false;
    }
}

const char *OSPFDatabaseDescriptionPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "OSPFOptions"; break;
        case 2: return "OSPFDDOptions"; break;
        case 4: return "OSPFLSAHeader"; break;
        default: return NULL;
    }
}

void *OSPFDatabaseDescriptionPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFDatabaseDescriptionPacket *pp = (OSPFDatabaseDescriptionPacket *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getOptions()); break;
        case 2: return (void *)(&pp->getDdOptions()); break;
        case 4: return (void *)static_cast<cObject *>(&pp->getLsaHeaders(i)); break;
        default: return NULL;
    }
}

LSARequest::LSARequest()
{
    lsType = 0;
    linkStateID = 0;
}

void doPacking(cCommBuffer *b, LSARequest& a)
{
    doPacking(b,a.lsType);
    doPacking(b,a.linkStateID);
    doPacking(b,a.advertisingRouter);
}

void doUnpacking(cCommBuffer *b, LSARequest& a)
{
    doUnpacking(b,a.lsType);
    doUnpacking(b,a.linkStateID);
    doUnpacking(b,a.advertisingRouter);
}

class LSARequestDescriptor : public cClassDescriptor
{
  public:
    LSARequestDescriptor();
    virtual ~LSARequestDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(LSARequestDescriptor);

LSARequestDescriptor::LSARequestDescriptor() : cClassDescriptor("LSARequest", "")
{
}

LSARequestDescriptor::~LSARequestDescriptor()
{
}

bool LSARequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LSARequest *>(obj)!=NULL;
}

const char *LSARequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LSARequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int LSARequestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *LSARequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "lsType";
        case 1: return "linkStateID";
        case 2: return "advertisingRouter";
        default: return NULL;
    }
}

const char *LSARequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned long";
        case 1: return "unsigned long";
        case 2: return "IPAddress";
        default: return NULL;
    }
}

const char *LSARequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int LSARequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LSARequest *pp = (LSARequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool LSARequestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    LSARequest *pp = (LSARequest *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->lsType,resultbuf,bufsize); return true;
        case 1: ulong2string(pp->linkStateID,resultbuf,bufsize); return true;
        case 2: {std::stringstream out; out << pp->advertisingRouter; opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool LSARequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LSARequest *pp = (LSARequest *)object; (void)pp;
    switch (field) {
        case 0: pp->lsType = string2ulong(value); return true;
        case 1: pp->linkStateID = string2ulong(value); return true;
        default: return false;
    }
}

const char *LSARequestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return "IPAddress"; break;
        default: return NULL;
    }
}

void *LSARequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LSARequest *pp = (LSARequest *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->advertisingRouter); break;
        default: return NULL;
    }
}

Register_Class(OSPFLinkStateRequestPacket);

OSPFLinkStateRequestPacket::OSPFLinkStateRequestPacket(const char *name, int kind) : OSPFPacket(name,kind)
{
    requests_arraysize = 0;
    this->requests_var = 0;
}

OSPFLinkStateRequestPacket::OSPFLinkStateRequestPacket(const OSPFLinkStateRequestPacket& other) : OSPFPacket()
{
    setName(other.getName());
    requests_arraysize = 0;
    this->requests_var = 0;
    operator=(other);
}

OSPFLinkStateRequestPacket::~OSPFLinkStateRequestPacket()
{
    delete [] requests_var;
}

OSPFLinkStateRequestPacket& OSPFLinkStateRequestPacket::operator=(const OSPFLinkStateRequestPacket& other)
{
    if (this==&other) return *this;
    OSPFPacket::operator=(other);
    delete [] this->requests_var;
    this->requests_var = (other.requests_arraysize==0) ? NULL : new LSARequest[other.requests_arraysize];
    requests_arraysize = other.requests_arraysize;
    for (unsigned int i=0; i<requests_arraysize; i++)
        this->requests_var[i] = other.requests_var[i];
    return *this;
}

void OSPFLinkStateRequestPacket::parsimPack(cCommBuffer *b)
{
    OSPFPacket::parsimPack(b);
    b->pack(requests_arraysize);
    doPacking(b,this->requests_var,requests_arraysize);
}

void OSPFLinkStateRequestPacket::parsimUnpack(cCommBuffer *b)
{
    OSPFPacket::parsimUnpack(b);
    delete [] this->requests_var;
    b->unpack(requests_arraysize);
    if (requests_arraysize==0) {
        this->requests_var = 0;
    } else {
        this->requests_var = new LSARequest[requests_arraysize];
        doUnpacking(b,this->requests_var,requests_arraysize);
    }
}

void OSPFLinkStateRequestPacket::setRequestsArraySize(unsigned int size)
{
    LSARequest *requests_var2 = (size==0) ? NULL : new LSARequest[size];
    unsigned int sz = requests_arraysize < size ? requests_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        requests_var2[i] = this->requests_var[i];
    requests_arraysize = size;
    delete [] this->requests_var;
    this->requests_var = requests_var2;
}

unsigned int OSPFLinkStateRequestPacket::getRequestsArraySize() const
{
    return requests_arraysize;
}

LSARequest& OSPFLinkStateRequestPacket::getRequests(unsigned int k)
{
    if (k>=requests_arraysize) throw cRuntimeError("Array of size %d indexed by %d", requests_arraysize, k);
    return requests_var[k];
}

void OSPFLinkStateRequestPacket::setRequests(unsigned int k, const LSARequest& requests_var)
{
    if (k>=requests_arraysize) throw cRuntimeError("Array of size %d indexed by %d", requests_arraysize, k);
    this->requests_var[k]=requests_var;
}

class OSPFLinkStateRequestPacketDescriptor : public cClassDescriptor
{
  public:
    OSPFLinkStateRequestPacketDescriptor();
    virtual ~OSPFLinkStateRequestPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFLinkStateRequestPacketDescriptor);

OSPFLinkStateRequestPacketDescriptor::OSPFLinkStateRequestPacketDescriptor() : cClassDescriptor("OSPFLinkStateRequestPacket", "OSPFPacket")
{
}

OSPFLinkStateRequestPacketDescriptor::~OSPFLinkStateRequestPacketDescriptor()
{
}

bool OSPFLinkStateRequestPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFLinkStateRequestPacket *>(obj)!=NULL;
}

const char *OSPFLinkStateRequestPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFLinkStateRequestPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int OSPFLinkStateRequestPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *OSPFLinkStateRequestPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "requests";
        default: return NULL;
    }
}

const char *OSPFLinkStateRequestPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "LSARequest";
        default: return NULL;
    }
}

const char *OSPFLinkStateRequestPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFLinkStateRequestPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateRequestPacket *pp = (OSPFLinkStateRequestPacket *)object; (void)pp;
    switch (field) {
        case 0: return pp->getRequestsArraySize();
        default: return 0;
    }
}

bool OSPFLinkStateRequestPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateRequestPacket *pp = (OSPFLinkStateRequestPacket *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRequests(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFLinkStateRequestPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateRequestPacket *pp = (OSPFLinkStateRequestPacket *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *OSPFLinkStateRequestPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "LSARequest"; break;
        default: return NULL;
    }
}

void *OSPFLinkStateRequestPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateRequestPacket *pp = (OSPFLinkStateRequestPacket *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRequests(i)); break;
        default: return NULL;
    }
}

Register_Class(OSPFLinkStateUpdatePacket);

OSPFLinkStateUpdatePacket::OSPFLinkStateUpdatePacket(const char *name, int kind) : OSPFPacket(name,kind)
{
    this->numberOfLSAs_var = 0;
    routerLSAs_arraysize = 0;
    this->routerLSAs_var = 0;
    networkLSAs_arraysize = 0;
    this->networkLSAs_var = 0;
    summaryLSAs_arraysize = 0;
    this->summaryLSAs_var = 0;
    asExternalLSAs_arraysize = 0;
    this->asExternalLSAs_var = 0;
}

OSPFLinkStateUpdatePacket::OSPFLinkStateUpdatePacket(const OSPFLinkStateUpdatePacket& other) : OSPFPacket()
{
    setName(other.getName());
    routerLSAs_arraysize = 0;
    this->routerLSAs_var = 0;
    networkLSAs_arraysize = 0;
    this->networkLSAs_var = 0;
    summaryLSAs_arraysize = 0;
    this->summaryLSAs_var = 0;
    asExternalLSAs_arraysize = 0;
    this->asExternalLSAs_var = 0;
    operator=(other);
}

OSPFLinkStateUpdatePacket::~OSPFLinkStateUpdatePacket()
{
    delete [] routerLSAs_var;
    delete [] networkLSAs_var;
    delete [] summaryLSAs_var;
    delete [] asExternalLSAs_var;
}

OSPFLinkStateUpdatePacket& OSPFLinkStateUpdatePacket::operator=(const OSPFLinkStateUpdatePacket& other)
{
    if (this==&other) return *this;
    OSPFPacket::operator=(other);
    this->numberOfLSAs_var = other.numberOfLSAs_var;
    delete [] this->routerLSAs_var;
    this->routerLSAs_var = (other.routerLSAs_arraysize==0) ? NULL : new OSPFRouterLSA[other.routerLSAs_arraysize];
    routerLSAs_arraysize = other.routerLSAs_arraysize;
    for (unsigned int i=0; i<routerLSAs_arraysize; i++)
        this->routerLSAs_var[i] = other.routerLSAs_var[i];
    delete [] this->networkLSAs_var;
    this->networkLSAs_var = (other.networkLSAs_arraysize==0) ? NULL : new OSPFNetworkLSA[other.networkLSAs_arraysize];
    networkLSAs_arraysize = other.networkLSAs_arraysize;
    for (unsigned int i=0; i<networkLSAs_arraysize; i++)
        this->networkLSAs_var[i] = other.networkLSAs_var[i];
    delete [] this->summaryLSAs_var;
    this->summaryLSAs_var = (other.summaryLSAs_arraysize==0) ? NULL : new OSPFSummaryLSA[other.summaryLSAs_arraysize];
    summaryLSAs_arraysize = other.summaryLSAs_arraysize;
    for (unsigned int i=0; i<summaryLSAs_arraysize; i++)
        this->summaryLSAs_var[i] = other.summaryLSAs_var[i];
    delete [] this->asExternalLSAs_var;
    this->asExternalLSAs_var = (other.asExternalLSAs_arraysize==0) ? NULL : new OSPFASExternalLSA[other.asExternalLSAs_arraysize];
    asExternalLSAs_arraysize = other.asExternalLSAs_arraysize;
    for (unsigned int i=0; i<asExternalLSAs_arraysize; i++)
        this->asExternalLSAs_var[i] = other.asExternalLSAs_var[i];
    return *this;
}

void OSPFLinkStateUpdatePacket::parsimPack(cCommBuffer *b)
{
    OSPFPacket::parsimPack(b);
    doPacking(b,this->numberOfLSAs_var);
    b->pack(routerLSAs_arraysize);
    doPacking(b,this->routerLSAs_var,routerLSAs_arraysize);
    b->pack(networkLSAs_arraysize);
    doPacking(b,this->networkLSAs_var,networkLSAs_arraysize);
    b->pack(summaryLSAs_arraysize);
    doPacking(b,this->summaryLSAs_var,summaryLSAs_arraysize);
    b->pack(asExternalLSAs_arraysize);
    doPacking(b,this->asExternalLSAs_var,asExternalLSAs_arraysize);
}

void OSPFLinkStateUpdatePacket::parsimUnpack(cCommBuffer *b)
{
    OSPFPacket::parsimUnpack(b);
    doUnpacking(b,this->numberOfLSAs_var);
    delete [] this->routerLSAs_var;
    b->unpack(routerLSAs_arraysize);
    if (routerLSAs_arraysize==0) {
        this->routerLSAs_var = 0;
    } else {
        this->routerLSAs_var = new OSPFRouterLSA[routerLSAs_arraysize];
        doUnpacking(b,this->routerLSAs_var,routerLSAs_arraysize);
    }
    delete [] this->networkLSAs_var;
    b->unpack(networkLSAs_arraysize);
    if (networkLSAs_arraysize==0) {
        this->networkLSAs_var = 0;
    } else {
        this->networkLSAs_var = new OSPFNetworkLSA[networkLSAs_arraysize];
        doUnpacking(b,this->networkLSAs_var,networkLSAs_arraysize);
    }
    delete [] this->summaryLSAs_var;
    b->unpack(summaryLSAs_arraysize);
    if (summaryLSAs_arraysize==0) {
        this->summaryLSAs_var = 0;
    } else {
        this->summaryLSAs_var = new OSPFSummaryLSA[summaryLSAs_arraysize];
        doUnpacking(b,this->summaryLSAs_var,summaryLSAs_arraysize);
    }
    delete [] this->asExternalLSAs_var;
    b->unpack(asExternalLSAs_arraysize);
    if (asExternalLSAs_arraysize==0) {
        this->asExternalLSAs_var = 0;
    } else {
        this->asExternalLSAs_var = new OSPFASExternalLSA[asExternalLSAs_arraysize];
        doUnpacking(b,this->asExternalLSAs_var,asExternalLSAs_arraysize);
    }
}

unsigned long OSPFLinkStateUpdatePacket::getNumberOfLSAs() const
{
    return numberOfLSAs_var;
}

void OSPFLinkStateUpdatePacket::setNumberOfLSAs(unsigned long numberOfLSAs_var)
{
    this->numberOfLSAs_var = numberOfLSAs_var;
}

void OSPFLinkStateUpdatePacket::setRouterLSAsArraySize(unsigned int size)
{
    OSPFRouterLSA *routerLSAs_var2 = (size==0) ? NULL : new OSPFRouterLSA[size];
    unsigned int sz = routerLSAs_arraysize < size ? routerLSAs_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        routerLSAs_var2[i] = this->routerLSAs_var[i];
    routerLSAs_arraysize = size;
    delete [] this->routerLSAs_var;
    this->routerLSAs_var = routerLSAs_var2;
}

unsigned int OSPFLinkStateUpdatePacket::getRouterLSAsArraySize() const
{
    return routerLSAs_arraysize;
}

OSPFRouterLSA& OSPFLinkStateUpdatePacket::getRouterLSAs(unsigned int k)
{
    if (k>=routerLSAs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", routerLSAs_arraysize, k);
    return routerLSAs_var[k];
}

void OSPFLinkStateUpdatePacket::setRouterLSAs(unsigned int k, const OSPFRouterLSA& routerLSAs_var)
{
    if (k>=routerLSAs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", routerLSAs_arraysize, k);
    this->routerLSAs_var[k]=routerLSAs_var;
}

void OSPFLinkStateUpdatePacket::setNetworkLSAsArraySize(unsigned int size)
{
    OSPFNetworkLSA *networkLSAs_var2 = (size==0) ? NULL : new OSPFNetworkLSA[size];
    unsigned int sz = networkLSAs_arraysize < size ? networkLSAs_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        networkLSAs_var2[i] = this->networkLSAs_var[i];
    networkLSAs_arraysize = size;
    delete [] this->networkLSAs_var;
    this->networkLSAs_var = networkLSAs_var2;
}

unsigned int OSPFLinkStateUpdatePacket::getNetworkLSAsArraySize() const
{
    return networkLSAs_arraysize;
}

OSPFNetworkLSA& OSPFLinkStateUpdatePacket::getNetworkLSAs(unsigned int k)
{
    if (k>=networkLSAs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", networkLSAs_arraysize, k);
    return networkLSAs_var[k];
}

void OSPFLinkStateUpdatePacket::setNetworkLSAs(unsigned int k, const OSPFNetworkLSA& networkLSAs_var)
{
    if (k>=networkLSAs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", networkLSAs_arraysize, k);
    this->networkLSAs_var[k]=networkLSAs_var;
}

void OSPFLinkStateUpdatePacket::setSummaryLSAsArraySize(unsigned int size)
{
    OSPFSummaryLSA *summaryLSAs_var2 = (size==0) ? NULL : new OSPFSummaryLSA[size];
    unsigned int sz = summaryLSAs_arraysize < size ? summaryLSAs_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        summaryLSAs_var2[i] = this->summaryLSAs_var[i];
    summaryLSAs_arraysize = size;
    delete [] this->summaryLSAs_var;
    this->summaryLSAs_var = summaryLSAs_var2;
}

unsigned int OSPFLinkStateUpdatePacket::getSummaryLSAsArraySize() const
{
    return summaryLSAs_arraysize;
}

OSPFSummaryLSA& OSPFLinkStateUpdatePacket::getSummaryLSAs(unsigned int k)
{
    if (k>=summaryLSAs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", summaryLSAs_arraysize, k);
    return summaryLSAs_var[k];
}

void OSPFLinkStateUpdatePacket::setSummaryLSAs(unsigned int k, const OSPFSummaryLSA& summaryLSAs_var)
{
    if (k>=summaryLSAs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", summaryLSAs_arraysize, k);
    this->summaryLSAs_var[k]=summaryLSAs_var;
}

void OSPFLinkStateUpdatePacket::setAsExternalLSAsArraySize(unsigned int size)
{
    OSPFASExternalLSA *asExternalLSAs_var2 = (size==0) ? NULL : new OSPFASExternalLSA[size];
    unsigned int sz = asExternalLSAs_arraysize < size ? asExternalLSAs_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        asExternalLSAs_var2[i] = this->asExternalLSAs_var[i];
    asExternalLSAs_arraysize = size;
    delete [] this->asExternalLSAs_var;
    this->asExternalLSAs_var = asExternalLSAs_var2;
}

unsigned int OSPFLinkStateUpdatePacket::getAsExternalLSAsArraySize() const
{
    return asExternalLSAs_arraysize;
}

OSPFASExternalLSA& OSPFLinkStateUpdatePacket::getAsExternalLSAs(unsigned int k)
{
    if (k>=asExternalLSAs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", asExternalLSAs_arraysize, k);
    return asExternalLSAs_var[k];
}

void OSPFLinkStateUpdatePacket::setAsExternalLSAs(unsigned int k, const OSPFASExternalLSA& asExternalLSAs_var)
{
    if (k>=asExternalLSAs_arraysize) throw cRuntimeError("Array of size %d indexed by %d", asExternalLSAs_arraysize, k);
    this->asExternalLSAs_var[k]=asExternalLSAs_var;
}

class OSPFLinkStateUpdatePacketDescriptor : public cClassDescriptor
{
  public:
    OSPFLinkStateUpdatePacketDescriptor();
    virtual ~OSPFLinkStateUpdatePacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFLinkStateUpdatePacketDescriptor);

OSPFLinkStateUpdatePacketDescriptor::OSPFLinkStateUpdatePacketDescriptor() : cClassDescriptor("OSPFLinkStateUpdatePacket", "OSPFPacket")
{
}

OSPFLinkStateUpdatePacketDescriptor::~OSPFLinkStateUpdatePacketDescriptor()
{
}

bool OSPFLinkStateUpdatePacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFLinkStateUpdatePacket *>(obj)!=NULL;
}

const char *OSPFLinkStateUpdatePacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFLinkStateUpdatePacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int OSPFLinkStateUpdatePacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        case 2: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        case 3: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        case 4: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *OSPFLinkStateUpdatePacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "numberOfLSAs";
        case 1: return "routerLSAs";
        case 2: return "networkLSAs";
        case 3: return "summaryLSAs";
        case 4: return "asExternalLSAs";
        default: return NULL;
    }
}

const char *OSPFLinkStateUpdatePacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned long";
        case 1: return "OSPFRouterLSA";
        case 2: return "OSPFNetworkLSA";
        case 3: return "OSPFSummaryLSA";
        case 4: return "OSPFASExternalLSA";
        default: return NULL;
    }
}

const char *OSPFLinkStateUpdatePacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFLinkStateUpdatePacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateUpdatePacket *pp = (OSPFLinkStateUpdatePacket *)object; (void)pp;
    switch (field) {
        case 1: return pp->getRouterLSAsArraySize();
        case 2: return pp->getNetworkLSAsArraySize();
        case 3: return pp->getSummaryLSAsArraySize();
        case 4: return pp->getAsExternalLSAsArraySize();
        default: return 0;
    }
}

bool OSPFLinkStateUpdatePacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateUpdatePacket *pp = (OSPFLinkStateUpdatePacket *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getNumberOfLSAs(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getRouterLSAs(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getNetworkLSAs(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: {std::stringstream out; out << pp->getSummaryLSAs(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: {std::stringstream out; out << pp->getAsExternalLSAs(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFLinkStateUpdatePacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateUpdatePacket *pp = (OSPFLinkStateUpdatePacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setNumberOfLSAs(string2ulong(value)); return true;
        default: return false;
    }
}

const char *OSPFLinkStateUpdatePacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "OSPFRouterLSA"; break;
        case 2: return "OSPFNetworkLSA"; break;
        case 3: return "OSPFSummaryLSA"; break;
        case 4: return "OSPFASExternalLSA"; break;
        default: return NULL;
    }
}

void *OSPFLinkStateUpdatePacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateUpdatePacket *pp = (OSPFLinkStateUpdatePacket *)object; (void)pp;
    switch (field) {
        case 1: return (void *)static_cast<cObject *>(&pp->getRouterLSAs(i)); break;
        case 2: return (void *)static_cast<cObject *>(&pp->getNetworkLSAs(i)); break;
        case 3: return (void *)static_cast<cObject *>(&pp->getSummaryLSAs(i)); break;
        case 4: return (void *)static_cast<cObject *>(&pp->getAsExternalLSAs(i)); break;
        default: return NULL;
    }
}

Register_Class(OSPFLinkStateAcknowledgementPacket);

OSPFLinkStateAcknowledgementPacket::OSPFLinkStateAcknowledgementPacket(const char *name, int kind) : OSPFPacket(name,kind)
{
    lsaHeaders_arraysize = 0;
    this->lsaHeaders_var = 0;
}

OSPFLinkStateAcknowledgementPacket::OSPFLinkStateAcknowledgementPacket(const OSPFLinkStateAcknowledgementPacket& other) : OSPFPacket()
{
    setName(other.getName());
    lsaHeaders_arraysize = 0;
    this->lsaHeaders_var = 0;
    operator=(other);
}

OSPFLinkStateAcknowledgementPacket::~OSPFLinkStateAcknowledgementPacket()
{
    delete [] lsaHeaders_var;
}

OSPFLinkStateAcknowledgementPacket& OSPFLinkStateAcknowledgementPacket::operator=(const OSPFLinkStateAcknowledgementPacket& other)
{
    if (this==&other) return *this;
    OSPFPacket::operator=(other);
    delete [] this->lsaHeaders_var;
    this->lsaHeaders_var = (other.lsaHeaders_arraysize==0) ? NULL : new OSPFLSAHeader[other.lsaHeaders_arraysize];
    lsaHeaders_arraysize = other.lsaHeaders_arraysize;
    for (unsigned int i=0; i<lsaHeaders_arraysize; i++)
        this->lsaHeaders_var[i] = other.lsaHeaders_var[i];
    return *this;
}

void OSPFLinkStateAcknowledgementPacket::parsimPack(cCommBuffer *b)
{
    OSPFPacket::parsimPack(b);
    b->pack(lsaHeaders_arraysize);
    doPacking(b,this->lsaHeaders_var,lsaHeaders_arraysize);
}

void OSPFLinkStateAcknowledgementPacket::parsimUnpack(cCommBuffer *b)
{
    OSPFPacket::parsimUnpack(b);
    delete [] this->lsaHeaders_var;
    b->unpack(lsaHeaders_arraysize);
    if (lsaHeaders_arraysize==0) {
        this->lsaHeaders_var = 0;
    } else {
        this->lsaHeaders_var = new OSPFLSAHeader[lsaHeaders_arraysize];
        doUnpacking(b,this->lsaHeaders_var,lsaHeaders_arraysize);
    }
}

void OSPFLinkStateAcknowledgementPacket::setLsaHeadersArraySize(unsigned int size)
{
    OSPFLSAHeader *lsaHeaders_var2 = (size==0) ? NULL : new OSPFLSAHeader[size];
    unsigned int sz = lsaHeaders_arraysize < size ? lsaHeaders_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        lsaHeaders_var2[i] = this->lsaHeaders_var[i];
    lsaHeaders_arraysize = size;
    delete [] this->lsaHeaders_var;
    this->lsaHeaders_var = lsaHeaders_var2;
}

unsigned int OSPFLinkStateAcknowledgementPacket::getLsaHeadersArraySize() const
{
    return lsaHeaders_arraysize;
}

OSPFLSAHeader& OSPFLinkStateAcknowledgementPacket::getLsaHeaders(unsigned int k)
{
    if (k>=lsaHeaders_arraysize) throw cRuntimeError("Array of size %d indexed by %d", lsaHeaders_arraysize, k);
    return lsaHeaders_var[k];
}

void OSPFLinkStateAcknowledgementPacket::setLsaHeaders(unsigned int k, const OSPFLSAHeader& lsaHeaders_var)
{
    if (k>=lsaHeaders_arraysize) throw cRuntimeError("Array of size %d indexed by %d", lsaHeaders_arraysize, k);
    this->lsaHeaders_var[k]=lsaHeaders_var;
}

class OSPFLinkStateAcknowledgementPacketDescriptor : public cClassDescriptor
{
  public:
    OSPFLinkStateAcknowledgementPacketDescriptor();
    virtual ~OSPFLinkStateAcknowledgementPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(OSPFLinkStateAcknowledgementPacketDescriptor);

OSPFLinkStateAcknowledgementPacketDescriptor::OSPFLinkStateAcknowledgementPacketDescriptor() : cClassDescriptor("OSPFLinkStateAcknowledgementPacket", "OSPFPacket")
{
}

OSPFLinkStateAcknowledgementPacketDescriptor::~OSPFLinkStateAcknowledgementPacketDescriptor()
{
}

bool OSPFLinkStateAcknowledgementPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OSPFLinkStateAcknowledgementPacket *>(obj)!=NULL;
}

const char *OSPFLinkStateAcknowledgementPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OSPFLinkStateAcknowledgementPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int OSPFLinkStateAcknowledgementPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *OSPFLinkStateAcknowledgementPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "lsaHeaders";
        default: return NULL;
    }
}

const char *OSPFLinkStateAcknowledgementPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OSPFLSAHeader";
        default: return NULL;
    }
}

const char *OSPFLinkStateAcknowledgementPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int OSPFLinkStateAcknowledgementPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateAcknowledgementPacket *pp = (OSPFLinkStateAcknowledgementPacket *)object; (void)pp;
    switch (field) {
        case 0: return pp->getLsaHeadersArraySize();
        default: return 0;
    }
}

bool OSPFLinkStateAcknowledgementPacketDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateAcknowledgementPacket *pp = (OSPFLinkStateAcknowledgementPacket *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLsaHeaders(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool OSPFLinkStateAcknowledgementPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateAcknowledgementPacket *pp = (OSPFLinkStateAcknowledgementPacket *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *OSPFLinkStateAcknowledgementPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OSPFLSAHeader"; break;
        default: return NULL;
    }
}

void *OSPFLinkStateAcknowledgementPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OSPFLinkStateAcknowledgementPacket *pp = (OSPFLinkStateAcknowledgementPacket *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getLsaHeaders(i)); break;
        default: return NULL;
    }
}


