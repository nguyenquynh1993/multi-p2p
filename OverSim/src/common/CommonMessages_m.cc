//
// Generated file, do not edit! Created by opp_msgc 4.0 from common/CommonMessages.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "CommonMessages_m.h"

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
    cEnum *e = cEnum::find("BaseOverlayMessageType");
    if (!e) enums.getInstance()->add(e = new cEnum("BaseOverlayMessageType"));
    e->insert(OVERLAYSIGNALING, "OVERLAYSIGNALING");
    e->insert(RPC, "RPC");
    e->insert(APPDATA, "APPDATA");
    e->insert(OVERLAYROUTE, "OVERLAYROUTE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("CompType");
    if (!e) enums.getInstance()->add(e = new cEnum("CompType"));
    e->insert(INVALID_COMP, "INVALID_COMP");
    e->insert(OVERLAY_COMP, "OVERLAY_COMP");
    e->insert(TIER1_COMP, "TIER1_COMP");
    e->insert(TIER2_COMP, "TIER2_COMP");
    e->insert(TIER3_COMP, "TIER3_COMP");
    e->insert(BOOTSTRAPLIST_COMP, "BOOTSTRAPLIST_COMP");
    e->insert(NEIGHBORCACHE_COMP, "NEIGHBORCACHE_COMP");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("RoutingType");
    if (!e) enums.getInstance()->add(e = new cEnum("RoutingType"));
    e->insert(NO_OVERLAY_ROUTING, "NO_OVERLAY_ROUTING");
    e->insert(DEFAULT_ROUTING, "DEFAULT_ROUTING");
    e->insert(ITERATIVE_ROUTING, "ITERATIVE_ROUTING");
    e->insert(EXHAUSTIVE_ITERATIVE_ROUTING, "EXHAUSTIVE_ITERATIVE_ROUTING");
    e->insert(SEMI_RECURSIVE_ROUTING, "SEMI_RECURSIVE_ROUTING");
    e->insert(FULL_RECURSIVE_ROUTING, "FULL_RECURSIVE_ROUTING");
    e->insert(RECURSIVE_SOURCE_ROUTING, "RECURSIVE_SOURCE_ROUTING");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("TransportType");
    if (!e) enums.getInstance()->add(e = new cEnum("TransportType"));
    e->insert(INVALID_TRANSPORT, "INVALID_TRANSPORT");
    e->insert(INTERNAL_TRANSPORT, "INTERNAL_TRANSPORT");
    e->insert(UDP_TRANSPORT, "UDP_TRANSPORT");
    e->insert(ROUTE_TRANSPORT, "ROUTE_TRANSPORT");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("CommonAPIMessageType");
    if (!e) enums.getInstance()->add(e = new cEnum("CommonAPIMessageType"));
    e->insert(COMMON_API_UNDEFINED, "COMMON_API_UNDEFINED");
    e->insert(KBR_ROUTE, "KBR_ROUTE");
    e->insert(KBR_DELIVER, "KBR_DELIVER");
    e->insert(KBR_FORWARD, "KBR_FORWARD");
    e->insert(KBR_FORWARD_RESPONSE, "KBR_FORWARD_RESPONSE");
    e->insert(KBR_UPDATE, "KBR_UPDATE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("StatType");
    if (!e) enums.getInstance()->add(e = new cEnum("StatType"));
    e->insert(MAINTENANCE_STAT, "MAINTENANCE_STAT");
    e->insert(APP_DATA_STAT, "APP_DATA_STAT");
    e->insert(APP_LOOKUP_STAT, "APP_LOOKUP_STAT");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("GameAPIMessageCommand");
    if (!e) enums.getInstance()->add(e = new cEnum("GameAPIMessageCommand"));
    e->insert(MOVEMENT_INDICATION, "MOVEMENT_INDICATION");
    e->insert(MOVEMENT_REQUEST, "MOVEMENT_REQUEST");
    e->insert(NEIGHBOR_UPDATE, "NEIGHBOR_UPDATE");
    e->insert(RESIZE_AOI, "RESIZE_AOI");
    e->insert(GAMEEVENT_CHAT, "GAMEEVENT_CHAT");
    e->insert(GAMEEVENT_SNOW, "GAMEEVENT_SNOW");
    e->insert(GAMEEVENT_FROZEN, "GAMEEVENT_FROZEN");
);

Register_Class(AuthBlock);

AuthBlock::AuthBlock() : cObject()
{
}

AuthBlock::AuthBlock(const AuthBlock& other) : cObject()
{
    operator=(other);
}

AuthBlock::~AuthBlock()
{
}

AuthBlock& AuthBlock::operator=(const AuthBlock& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->signature_var = other.signature_var;
    this->pubKey_var = other.pubKey_var;
    this->cert_var = other.cert_var;
    return *this;
}

void AuthBlock::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->signature_var);
    doPacking(b,this->pubKey_var);
    doPacking(b,this->cert_var);
}

void AuthBlock::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->signature_var);
    doUnpacking(b,this->pubKey_var);
    doUnpacking(b,this->cert_var);
}

BinaryValue& AuthBlock::getSignature()
{
    return signature_var;
}

void AuthBlock::setSignature(const BinaryValue& signature_var)
{
    this->signature_var = signature_var;
}

BinaryValue& AuthBlock::getPubKey()
{
    return pubKey_var;
}

void AuthBlock::setPubKey(const BinaryValue& pubKey_var)
{
    this->pubKey_var = pubKey_var;
}

BinaryValue& AuthBlock::getCert()
{
    return cert_var;
}

void AuthBlock::setCert(const BinaryValue& cert_var)
{
    this->cert_var = cert_var;
}

class AuthBlockDescriptor : public cClassDescriptor
{
  public:
    AuthBlockDescriptor();
    virtual ~AuthBlockDescriptor();

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

Register_ClassDescriptor(AuthBlockDescriptor);

AuthBlockDescriptor::AuthBlockDescriptor() : cClassDescriptor("AuthBlock", "cObject")
{
}

AuthBlockDescriptor::~AuthBlockDescriptor()
{
}

bool AuthBlockDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AuthBlock *>(obj)!=NULL;
}

const char *AuthBlockDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AuthBlockDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int AuthBlockDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *AuthBlockDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "signature";
        case 1: return "pubKey";
        case 2: return "cert";
        default: return NULL;
    }
}

const char *AuthBlockDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue";
        case 1: return "BinaryValue";
        case 2: return "BinaryValue";
        default: return NULL;
    }
}

const char *AuthBlockDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AuthBlockDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AuthBlock *pp = (AuthBlock *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool AuthBlockDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    AuthBlock *pp = (AuthBlock *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSignature(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getPubKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getCert(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool AuthBlockDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AuthBlock *pp = (AuthBlock *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *AuthBlockDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue"; break;
        case 1: return "BinaryValue"; break;
        case 2: return "BinaryValue"; break;
        default: return NULL;
    }
}

void *AuthBlockDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AuthBlock *pp = (AuthBlock *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSignature()); break;
        case 1: return (void *)(&pp->getPubKey()); break;
        case 2: return (void *)(&pp->getCert()); break;
        default: return NULL;
    }
}

Register_Class(BaseOverlayMessage);

BaseOverlayMessage::BaseOverlayMessage(const char *name, int kind) : OverSimMessage(name,kind)
{
    this->type_var = OVERLAYSIGNALING;
    this->statType_var = MAINTENANCE_STAT;
}

BaseOverlayMessage::BaseOverlayMessage(const BaseOverlayMessage& other) : OverSimMessage()
{
    setName(other.getName());
    operator=(other);
}

BaseOverlayMessage::~BaseOverlayMessage()
{
}

BaseOverlayMessage& BaseOverlayMessage::operator=(const BaseOverlayMessage& other)
{
    if (this==&other) return *this;
    OverSimMessage::operator=(other);
    this->type_var = other.type_var;
    this->statType_var = other.statType_var;
    return *this;
}

void BaseOverlayMessage::parsimPack(cCommBuffer *b)
{
    OverSimMessage::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->statType_var);
}

void BaseOverlayMessage::parsimUnpack(cCommBuffer *b)
{
    OverSimMessage::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->statType_var);
}

int BaseOverlayMessage::getType() const
{
    return type_var;
}

void BaseOverlayMessage::setType(int type_var)
{
    this->type_var = type_var;
}

int BaseOverlayMessage::getStatType() const
{
    return statType_var;
}

void BaseOverlayMessage::setStatType(int statType_var)
{
    this->statType_var = statType_var;
}

class BaseOverlayMessageDescriptor : public cClassDescriptor
{
  public:
    BaseOverlayMessageDescriptor();
    virtual ~BaseOverlayMessageDescriptor();

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

Register_ClassDescriptor(BaseOverlayMessageDescriptor);

BaseOverlayMessageDescriptor::BaseOverlayMessageDescriptor() : cClassDescriptor("BaseOverlayMessage", "OverSimMessage")
{
}

BaseOverlayMessageDescriptor::~BaseOverlayMessageDescriptor()
{
}

bool BaseOverlayMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BaseOverlayMessage *>(obj)!=NULL;
}

const char *BaseOverlayMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BaseOverlayMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int BaseOverlayMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *BaseOverlayMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "type";
        case 1: return "statType";
        default: return NULL;
    }
}

const char *BaseOverlayMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "int";
        default: return NULL;
    }
}

const char *BaseOverlayMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "BaseOverlayMessageType";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"enum")) return "StatType";
            return NULL;
        default: return NULL;
    }
}

int BaseOverlayMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BaseOverlayMessage *pp = (BaseOverlayMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool BaseOverlayMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    BaseOverlayMessage *pp = (BaseOverlayMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getType(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getStatType(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool BaseOverlayMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BaseOverlayMessage *pp = (BaseOverlayMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setStatType(string2long(value)); return true;
        default: return false;
    }
}

const char *BaseOverlayMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *BaseOverlayMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BaseOverlayMessage *pp = (BaseOverlayMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(BaseRouteMessage);

BaseRouteMessage::BaseRouteMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->routingType_var = 0;
    this->hopCount_var = 0;
    visitedHops_arraysize = 0;
    this->visitedHops_var = 0;
    nextHops_arraysize = 0;
    this->nextHops_var = 0;
    hints_arraysize = 0;
    this->hints_var = 0;
    this->hopStamp_var = 0;
    hopDelay_arraysize = 0;
    this->hopDelay_var = 0;
}

BaseRouteMessage::BaseRouteMessage(const BaseRouteMessage& other) : BaseOverlayMessage()
{
    setName(other.getName());
    visitedHops_arraysize = 0;
    this->visitedHops_var = 0;
    nextHops_arraysize = 0;
    this->nextHops_var = 0;
    hints_arraysize = 0;
    this->hints_var = 0;
    hopDelay_arraysize = 0;
    this->hopDelay_var = 0;
    operator=(other);
}

BaseRouteMessage::~BaseRouteMessage()
{
    delete [] visitedHops_var;
    delete [] nextHops_var;
    delete [] hints_var;
    delete [] hopDelay_var;
}

BaseRouteMessage& BaseRouteMessage::operator=(const BaseRouteMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    this->destKey_var = other.destKey_var;
    this->srcNode_var = other.srcNode_var;
    this->routingType_var = other.routingType_var;
    this->hopCount_var = other.hopCount_var;
    delete [] this->visitedHops_var;
    this->visitedHops_var = (other.visitedHops_arraysize==0) ? NULL : new TransportAddress[other.visitedHops_arraysize];
    visitedHops_arraysize = other.visitedHops_arraysize;
    for (unsigned int i=0; i<visitedHops_arraysize; i++)
        this->visitedHops_var[i] = other.visitedHops_var[i];
    delete [] this->nextHops_var;
    this->nextHops_var = (other.nextHops_arraysize==0) ? NULL : new TransportAddress[other.nextHops_arraysize];
    nextHops_arraysize = other.nextHops_arraysize;
    for (unsigned int i=0; i<nextHops_arraysize; i++)
        this->nextHops_var[i] = other.nextHops_var[i];
    delete [] this->hints_var;
    this->hints_var = (other.hints_arraysize==0) ? NULL : new NodeHandle[other.hints_arraysize];
    hints_arraysize = other.hints_arraysize;
    for (unsigned int i=0; i<hints_arraysize; i++)
        this->hints_var[i] = other.hints_var[i];
    this->hopStamp_var = other.hopStamp_var;
    delete [] this->hopDelay_var;
    this->hopDelay_var = (other.hopDelay_arraysize==0) ? NULL : new simtime_t[other.hopDelay_arraysize];
    hopDelay_arraysize = other.hopDelay_arraysize;
    for (unsigned int i=0; i<hopDelay_arraysize; i++)
        this->hopDelay_var[i] = other.hopDelay_var[i];
    return *this;
}

void BaseRouteMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->destKey_var);
    doPacking(b,this->srcNode_var);
    doPacking(b,this->routingType_var);
    doPacking(b,this->hopCount_var);
    b->pack(visitedHops_arraysize);
    doPacking(b,this->visitedHops_var,visitedHops_arraysize);
    b->pack(nextHops_arraysize);
    doPacking(b,this->nextHops_var,nextHops_arraysize);
    b->pack(hints_arraysize);
    doPacking(b,this->hints_var,hints_arraysize);
    doPacking(b,this->hopStamp_var);
    b->pack(hopDelay_arraysize);
    doPacking(b,this->hopDelay_var,hopDelay_arraysize);
}

void BaseRouteMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->destKey_var);
    doUnpacking(b,this->srcNode_var);
    doUnpacking(b,this->routingType_var);
    doUnpacking(b,this->hopCount_var);
    delete [] this->visitedHops_var;
    b->unpack(visitedHops_arraysize);
    if (visitedHops_arraysize==0) {
        this->visitedHops_var = 0;
    } else {
        this->visitedHops_var = new TransportAddress[visitedHops_arraysize];
        doUnpacking(b,this->visitedHops_var,visitedHops_arraysize);
    }
    delete [] this->nextHops_var;
    b->unpack(nextHops_arraysize);
    if (nextHops_arraysize==0) {
        this->nextHops_var = 0;
    } else {
        this->nextHops_var = new TransportAddress[nextHops_arraysize];
        doUnpacking(b,this->nextHops_var,nextHops_arraysize);
    }
    delete [] this->hints_var;
    b->unpack(hints_arraysize);
    if (hints_arraysize==0) {
        this->hints_var = 0;
    } else {
        this->hints_var = new NodeHandle[hints_arraysize];
        doUnpacking(b,this->hints_var,hints_arraysize);
    }
    doUnpacking(b,this->hopStamp_var);
    delete [] this->hopDelay_var;
    b->unpack(hopDelay_arraysize);
    if (hopDelay_arraysize==0) {
        this->hopDelay_var = 0;
    } else {
        this->hopDelay_var = new simtime_t[hopDelay_arraysize];
        doUnpacking(b,this->hopDelay_var,hopDelay_arraysize);
    }
}

OverlayKey& BaseRouteMessage::getDestKey()
{
    return destKey_var;
}

void BaseRouteMessage::setDestKey(const OverlayKey& destKey_var)
{
    this->destKey_var = destKey_var;
}

NodeHandle& BaseRouteMessage::getSrcNode()
{
    return srcNode_var;
}

void BaseRouteMessage::setSrcNode(const NodeHandle& srcNode_var)
{
    this->srcNode_var = srcNode_var;
}

int BaseRouteMessage::getRoutingType() const
{
    return routingType_var;
}

void BaseRouteMessage::setRoutingType(int routingType_var)
{
    this->routingType_var = routingType_var;
}

int BaseRouteMessage::getHopCount() const
{
    return hopCount_var;
}

void BaseRouteMessage::setHopCount(int hopCount_var)
{
    this->hopCount_var = hopCount_var;
}

void BaseRouteMessage::setVisitedHopsArraySize(unsigned int size)
{
    TransportAddress *visitedHops_var2 = (size==0) ? NULL : new TransportAddress[size];
    unsigned int sz = visitedHops_arraysize < size ? visitedHops_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        visitedHops_var2[i] = this->visitedHops_var[i];
    visitedHops_arraysize = size;
    delete [] this->visitedHops_var;
    this->visitedHops_var = visitedHops_var2;
}

unsigned int BaseRouteMessage::getVisitedHopsArraySize() const
{
    return visitedHops_arraysize;
}

TransportAddress& BaseRouteMessage::getVisitedHops(unsigned int k)
{
    if (k>=visitedHops_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visitedHops_arraysize, k);
    return visitedHops_var[k];
}

void BaseRouteMessage::setVisitedHops(unsigned int k, const TransportAddress& visitedHops_var)
{
    if (k>=visitedHops_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visitedHops_arraysize, k);
    this->visitedHops_var[k]=visitedHops_var;
}

void BaseRouteMessage::setNextHopsArraySize(unsigned int size)
{
    TransportAddress *nextHops_var2 = (size==0) ? NULL : new TransportAddress[size];
    unsigned int sz = nextHops_arraysize < size ? nextHops_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        nextHops_var2[i] = this->nextHops_var[i];
    nextHops_arraysize = size;
    delete [] this->nextHops_var;
    this->nextHops_var = nextHops_var2;
}

unsigned int BaseRouteMessage::getNextHopsArraySize() const
{
    return nextHops_arraysize;
}

TransportAddress& BaseRouteMessage::getNextHops(unsigned int k)
{
    if (k>=nextHops_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nextHops_arraysize, k);
    return nextHops_var[k];
}

void BaseRouteMessage::setNextHops(unsigned int k, const TransportAddress& nextHops_var)
{
    if (k>=nextHops_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nextHops_arraysize, k);
    this->nextHops_var[k]=nextHops_var;
}

void BaseRouteMessage::setHintsArraySize(unsigned int size)
{
    NodeHandle *hints_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = hints_arraysize < size ? hints_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        hints_var2[i] = this->hints_var[i];
    hints_arraysize = size;
    delete [] this->hints_var;
    this->hints_var = hints_var2;
}

unsigned int BaseRouteMessage::getHintsArraySize() const
{
    return hints_arraysize;
}

NodeHandle& BaseRouteMessage::getHints(unsigned int k)
{
    if (k>=hints_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hints_arraysize, k);
    return hints_var[k];
}

void BaseRouteMessage::setHints(unsigned int k, const NodeHandle& hints_var)
{
    if (k>=hints_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hints_arraysize, k);
    this->hints_var[k]=hints_var;
}

simtime_t BaseRouteMessage::getHopStamp() const
{
    return hopStamp_var;
}

void BaseRouteMessage::setHopStamp(simtime_t hopStamp_var)
{
    this->hopStamp_var = hopStamp_var;
}

void BaseRouteMessage::setHopDelayArraySize(unsigned int size)
{
    simtime_t *hopDelay_var2 = (size==0) ? NULL : new simtime_t[size];
    unsigned int sz = hopDelay_arraysize < size ? hopDelay_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        hopDelay_var2[i] = this->hopDelay_var[i];
    for (unsigned int i=sz; i<size; i++)
        hopDelay_var2[i] = 0;
    hopDelay_arraysize = size;
    delete [] this->hopDelay_var;
    this->hopDelay_var = hopDelay_var2;
}

unsigned int BaseRouteMessage::getHopDelayArraySize() const
{
    return hopDelay_arraysize;
}

simtime_t BaseRouteMessage::getHopDelay(unsigned int k) const
{
    if (k>=hopDelay_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hopDelay_arraysize, k);
    return hopDelay_var[k];
}

void BaseRouteMessage::setHopDelay(unsigned int k, simtime_t hopDelay_var)
{
    if (k>=hopDelay_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hopDelay_arraysize, k);
    this->hopDelay_var[k]=hopDelay_var;
}

class BaseRouteMessageDescriptor : public cClassDescriptor
{
  public:
    BaseRouteMessageDescriptor();
    virtual ~BaseRouteMessageDescriptor();

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

Register_ClassDescriptor(BaseRouteMessageDescriptor);

BaseRouteMessageDescriptor::BaseRouteMessageDescriptor() : cClassDescriptor("BaseRouteMessage", "BaseOverlayMessage")
{
}

BaseRouteMessageDescriptor::~BaseRouteMessageDescriptor()
{
}

bool BaseRouteMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BaseRouteMessage *>(obj)!=NULL;
}

const char *BaseRouteMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BaseRouteMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int BaseRouteMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISARRAY | FD_ISCOMPOUND;
        case 5: return FD_ISARRAY | FD_ISCOMPOUND;
        case 6: return FD_ISARRAY | FD_ISCOMPOUND;
        case 7: return FD_ISEDITABLE;
        case 8: return FD_ISARRAY | FD_ISEDITABLE;
        default: return 0;
    }
}

const char *BaseRouteMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "destKey";
        case 1: return "srcNode";
        case 2: return "routingType";
        case 3: return "hopCount";
        case 4: return "visitedHops";
        case 5: return "nextHops";
        case 6: return "hints";
        case 7: return "hopStamp";
        case 8: return "hopDelay";
        default: return NULL;
    }
}

const char *BaseRouteMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "NodeHandle";
        case 2: return "int";
        case 3: return "int";
        case 4: return "TransportAddress";
        case 5: return "TransportAddress";
        case 6: return "NodeHandle";
        case 7: return "simtime_t";
        case 8: return "simtime_t";
        default: return NULL;
    }
}

const char *BaseRouteMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "RoutingType";
            return NULL;
        default: return NULL;
    }
}

int BaseRouteMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BaseRouteMessage *pp = (BaseRouteMessage *)object; (void)pp;
    switch (field) {
        case 4: return pp->getVisitedHopsArraySize();
        case 5: return pp->getNextHopsArraySize();
        case 6: return pp->getHintsArraySize();
        case 8: return pp->getHopDelayArraySize();
        default: return 0;
    }
}

bool BaseRouteMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    BaseRouteMessage *pp = (BaseRouteMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getSrcNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: long2string(pp->getRoutingType(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getHopCount(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->getVisitedHops(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 5: {std::stringstream out; out << pp->getNextHops(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: {std::stringstream out; out << pp->getHints(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 7: double2string(pp->getHopStamp(),resultbuf,bufsize); return true;
        case 8: double2string(pp->getHopDelay(i),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool BaseRouteMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BaseRouteMessage *pp = (BaseRouteMessage *)object; (void)pp;
    switch (field) {
        case 2: pp->setRoutingType(string2long(value)); return true;
        case 3: pp->setHopCount(string2long(value)); return true;
        case 7: pp->setHopStamp(string2double(value)); return true;
        case 8: pp->setHopDelay(i,string2double(value)); return true;
        default: return false;
    }
}

const char *BaseRouteMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 1: return "NodeHandle"; break;
        case 4: return "TransportAddress"; break;
        case 5: return "TransportAddress"; break;
        case 6: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *BaseRouteMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BaseRouteMessage *pp = (BaseRouteMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestKey()); break;
        case 1: return (void *)(&pp->getSrcNode()); break;
        case 4: return (void *)(&pp->getVisitedHops(i)); break;
        case 5: return (void *)(&pp->getNextHops(i)); break;
        case 6: return (void *)(&pp->getHints(i)); break;
        default: return NULL;
    }
}

Register_Class(BaseAppDataMessage);

BaseAppDataMessage::BaseAppDataMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->destComp_var = 0;
    this->srcComp_var = 0;
}

BaseAppDataMessage::BaseAppDataMessage(const BaseAppDataMessage& other) : BaseOverlayMessage()
{
    setName(other.getName());
    operator=(other);
}

BaseAppDataMessage::~BaseAppDataMessage()
{
}

BaseAppDataMessage& BaseAppDataMessage::operator=(const BaseAppDataMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    this->destComp_var = other.destComp_var;
    this->srcComp_var = other.srcComp_var;
    return *this;
}

void BaseAppDataMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->destComp_var);
    doPacking(b,this->srcComp_var);
}

void BaseAppDataMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->destComp_var);
    doUnpacking(b,this->srcComp_var);
}

int BaseAppDataMessage::getDestComp() const
{
    return destComp_var;
}

void BaseAppDataMessage::setDestComp(int destComp_var)
{
    this->destComp_var = destComp_var;
}

int BaseAppDataMessage::getSrcComp() const
{
    return srcComp_var;
}

void BaseAppDataMessage::setSrcComp(int srcComp_var)
{
    this->srcComp_var = srcComp_var;
}

class BaseAppDataMessageDescriptor : public cClassDescriptor
{
  public:
    BaseAppDataMessageDescriptor();
    virtual ~BaseAppDataMessageDescriptor();

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

Register_ClassDescriptor(BaseAppDataMessageDescriptor);

BaseAppDataMessageDescriptor::BaseAppDataMessageDescriptor() : cClassDescriptor("BaseAppDataMessage", "BaseOverlayMessage")
{
}

BaseAppDataMessageDescriptor::~BaseAppDataMessageDescriptor()
{
}

bool BaseAppDataMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BaseAppDataMessage *>(obj)!=NULL;
}

const char *BaseAppDataMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BaseAppDataMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int BaseAppDataMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *BaseAppDataMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "destComp";
        case 1: return "srcComp";
        default: return NULL;
    }
}

const char *BaseAppDataMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "int";
        default: return NULL;
    }
}

const char *BaseAppDataMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "CompType";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"enum")) return "CompType";
            return NULL;
        default: return NULL;
    }
}

int BaseAppDataMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BaseAppDataMessage *pp = (BaseAppDataMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool BaseAppDataMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    BaseAppDataMessage *pp = (BaseAppDataMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getDestComp(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getSrcComp(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool BaseAppDataMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BaseAppDataMessage *pp = (BaseAppDataMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setDestComp(string2long(value)); return true;
        case 1: pp->setSrcComp(string2long(value)); return true;
        default: return false;
    }
}

const char *BaseAppDataMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *BaseAppDataMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BaseAppDataMessage *pp = (BaseAppDataMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(BaseRpcMessage);

BaseRpcMessage::BaseRpcMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->nonce_var = 0;
    authBlock_arraysize = 0;
    this->authBlock_var = 0;
}

BaseRpcMessage::BaseRpcMessage(const BaseRpcMessage& other) : BaseOverlayMessage()
{
    setName(other.getName());
    authBlock_arraysize = 0;
    this->authBlock_var = 0;
    operator=(other);
}

BaseRpcMessage::~BaseRpcMessage()
{
    delete [] authBlock_var;
}

BaseRpcMessage& BaseRpcMessage::operator=(const BaseRpcMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    this->nonce_var = other.nonce_var;
    this->srcNode_var = other.srcNode_var;
    delete [] this->authBlock_var;
    this->authBlock_var = (other.authBlock_arraysize==0) ? NULL : new AuthBlock[other.authBlock_arraysize];
    authBlock_arraysize = other.authBlock_arraysize;
    for (unsigned int i=0; i<authBlock_arraysize; i++)
        this->authBlock_var[i] = other.authBlock_var[i];
    return *this;
}

void BaseRpcMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->nonce_var);
    doPacking(b,this->srcNode_var);
    b->pack(authBlock_arraysize);
    doPacking(b,this->authBlock_var,authBlock_arraysize);
}

void BaseRpcMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->nonce_var);
    doUnpacking(b,this->srcNode_var);
    delete [] this->authBlock_var;
    b->unpack(authBlock_arraysize);
    if (authBlock_arraysize==0) {
        this->authBlock_var = 0;
    } else {
        this->authBlock_var = new AuthBlock[authBlock_arraysize];
        doUnpacking(b,this->authBlock_var,authBlock_arraysize);
    }
}

unsigned int BaseRpcMessage::getNonce() const
{
    return nonce_var;
}

void BaseRpcMessage::setNonce(unsigned int nonce_var)
{
    this->nonce_var = nonce_var;
}

NodeHandle& BaseRpcMessage::getSrcNode()
{
    return srcNode_var;
}

void BaseRpcMessage::setSrcNode(const NodeHandle& srcNode_var)
{
    this->srcNode_var = srcNode_var;
}

void BaseRpcMessage::setAuthBlockArraySize(unsigned int size)
{
    AuthBlock *authBlock_var2 = (size==0) ? NULL : new AuthBlock[size];
    unsigned int sz = authBlock_arraysize < size ? authBlock_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        authBlock_var2[i] = this->authBlock_var[i];
    authBlock_arraysize = size;
    delete [] this->authBlock_var;
    this->authBlock_var = authBlock_var2;
}

unsigned int BaseRpcMessage::getAuthBlockArraySize() const
{
    return authBlock_arraysize;
}

AuthBlock& BaseRpcMessage::getAuthBlock(unsigned int k)
{
    if (k>=authBlock_arraysize) throw cRuntimeError("Array of size %d indexed by %d", authBlock_arraysize, k);
    return authBlock_var[k];
}

void BaseRpcMessage::setAuthBlock(unsigned int k, const AuthBlock& authBlock_var)
{
    if (k>=authBlock_arraysize) throw cRuntimeError("Array of size %d indexed by %d", authBlock_arraysize, k);
    this->authBlock_var[k]=authBlock_var;
}

class BaseRpcMessageDescriptor : public cClassDescriptor
{
  public:
    BaseRpcMessageDescriptor();
    virtual ~BaseRpcMessageDescriptor();

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

Register_ClassDescriptor(BaseRpcMessageDescriptor);

BaseRpcMessageDescriptor::BaseRpcMessageDescriptor() : cClassDescriptor("BaseRpcMessage", "BaseOverlayMessage")
{
}

BaseRpcMessageDescriptor::~BaseRpcMessageDescriptor()
{
}

bool BaseRpcMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BaseRpcMessage *>(obj)!=NULL;
}

const char *BaseRpcMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BaseRpcMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int BaseRpcMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        default: return 0;
    }
}

const char *BaseRpcMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "nonce";
        case 1: return "srcNode";
        case 2: return "authBlock";
        default: return NULL;
    }
}

const char *BaseRpcMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned int";
        case 1: return "NodeHandle";
        case 2: return "AuthBlock";
        default: return NULL;
    }
}

const char *BaseRpcMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"sizetype")) return "uint8_t";
            return NULL;
        default: return NULL;
    }
}

int BaseRpcMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BaseRpcMessage *pp = (BaseRpcMessage *)object; (void)pp;
    switch (field) {
        case 2: return pp->getAuthBlockArraySize();
        default: return 0;
    }
}

bool BaseRpcMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    BaseRpcMessage *pp = (BaseRpcMessage *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getNonce(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getSrcNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getAuthBlock(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool BaseRpcMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BaseRpcMessage *pp = (BaseRpcMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setNonce(string2ulong(value)); return true;
        default: return false;
    }
}

const char *BaseRpcMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "NodeHandle"; break;
        case 2: return "AuthBlock"; break;
        default: return NULL;
    }
}

void *BaseRpcMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BaseRpcMessage *pp = (BaseRpcMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSrcNode()); break;
        case 2: return (void *)static_cast<cObject *>(&pp->getAuthBlock(i)); break;
        default: return NULL;
    }
}

Register_Class(BaseCallMessage);

BaseCallMessage::BaseCallMessage(const char *name, int kind) : BaseRpcMessage(name,kind)
{
}

BaseCallMessage::BaseCallMessage(const BaseCallMessage& other) : BaseRpcMessage()
{
    setName(other.getName());
    operator=(other);
}

BaseCallMessage::~BaseCallMessage()
{
}

BaseCallMessage& BaseCallMessage::operator=(const BaseCallMessage& other)
{
    if (this==&other) return *this;
    BaseRpcMessage::operator=(other);
    return *this;
}

void BaseCallMessage::parsimPack(cCommBuffer *b)
{
    BaseRpcMessage::parsimPack(b);
}

void BaseCallMessage::parsimUnpack(cCommBuffer *b)
{
    BaseRpcMessage::parsimUnpack(b);
}

class BaseCallMessageDescriptor : public cClassDescriptor
{
  public:
    BaseCallMessageDescriptor();
    virtual ~BaseCallMessageDescriptor();

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

Register_ClassDescriptor(BaseCallMessageDescriptor);

BaseCallMessageDescriptor::BaseCallMessageDescriptor() : cClassDescriptor("BaseCallMessage", "BaseRpcMessage")
{
}

BaseCallMessageDescriptor::~BaseCallMessageDescriptor()
{
}

bool BaseCallMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BaseCallMessage *>(obj)!=NULL;
}

const char *BaseCallMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BaseCallMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int BaseCallMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *BaseCallMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *BaseCallMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *BaseCallMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BaseCallMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BaseCallMessage *pp = (BaseCallMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool BaseCallMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    BaseCallMessage *pp = (BaseCallMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool BaseCallMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BaseCallMessage *pp = (BaseCallMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *BaseCallMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *BaseCallMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BaseCallMessage *pp = (BaseCallMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(BaseResponseMessage);

BaseResponseMessage::BaseResponseMessage(const char *name, int kind) : BaseRpcMessage(name,kind)
{
    this->callHopCount_var = 0;
    coords_arraysize = 0;
    this->coords_var = 0;
    this->error_var = 0;
}

BaseResponseMessage::BaseResponseMessage(const BaseResponseMessage& other) : BaseRpcMessage()
{
    setName(other.getName());
    coords_arraysize = 0;
    this->coords_var = 0;
    operator=(other);
}

BaseResponseMessage::~BaseResponseMessage()
{
    delete [] coords_var;
}

BaseResponseMessage& BaseResponseMessage::operator=(const BaseResponseMessage& other)
{
    if (this==&other) return *this;
    BaseRpcMessage::operator=(other);
    this->callHopCount_var = other.callHopCount_var;
    delete [] this->coords_var;
    this->coords_var = (other.coords_arraysize==0) ? NULL : new double[other.coords_arraysize];
    coords_arraysize = other.coords_arraysize;
    for (unsigned int i=0; i<coords_arraysize; i++)
        this->coords_var[i] = other.coords_var[i];
    this->error_var = other.error_var;
    return *this;
}

void BaseResponseMessage::parsimPack(cCommBuffer *b)
{
    BaseRpcMessage::parsimPack(b);
    doPacking(b,this->callHopCount_var);
    b->pack(coords_arraysize);
    doPacking(b,this->coords_var,coords_arraysize);
    doPacking(b,this->error_var);
}

void BaseResponseMessage::parsimUnpack(cCommBuffer *b)
{
    BaseRpcMessage::parsimUnpack(b);
    doUnpacking(b,this->callHopCount_var);
    delete [] this->coords_var;
    b->unpack(coords_arraysize);
    if (coords_arraysize==0) {
        this->coords_var = 0;
    } else {
        this->coords_var = new double[coords_arraysize];
        doUnpacking(b,this->coords_var,coords_arraysize);
    }
    doUnpacking(b,this->error_var);
}

int BaseResponseMessage::getCallHopCount() const
{
    return callHopCount_var;
}

void BaseResponseMessage::setCallHopCount(int callHopCount_var)
{
    this->callHopCount_var = callHopCount_var;
}

void BaseResponseMessage::setCoordsArraySize(unsigned int size)
{
    double *coords_var2 = (size==0) ? NULL : new double[size];
    unsigned int sz = coords_arraysize < size ? coords_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        coords_var2[i] = this->coords_var[i];
    for (unsigned int i=sz; i<size; i++)
        coords_var2[i] = 0;
    coords_arraysize = size;
    delete [] this->coords_var;
    this->coords_var = coords_var2;
}

unsigned int BaseResponseMessage::getCoordsArraySize() const
{
    return coords_arraysize;
}

double BaseResponseMessage::getCoords(unsigned int k) const
{
    if (k>=coords_arraysize) throw cRuntimeError("Array of size %d indexed by %d", coords_arraysize, k);
    return coords_var[k];
}

void BaseResponseMessage::setCoords(unsigned int k, double coords_var)
{
    if (k>=coords_arraysize) throw cRuntimeError("Array of size %d indexed by %d", coords_arraysize, k);
    this->coords_var[k]=coords_var;
}

double BaseResponseMessage::getError() const
{
    return error_var;
}

void BaseResponseMessage::setError(double error_var)
{
    this->error_var = error_var;
}

class BaseResponseMessageDescriptor : public cClassDescriptor
{
  public:
    BaseResponseMessageDescriptor();
    virtual ~BaseResponseMessageDescriptor();

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

Register_ClassDescriptor(BaseResponseMessageDescriptor);

BaseResponseMessageDescriptor::BaseResponseMessageDescriptor() : cClassDescriptor("BaseResponseMessage", "BaseRpcMessage")
{
}

BaseResponseMessageDescriptor::~BaseResponseMessageDescriptor()
{
}

bool BaseResponseMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BaseResponseMessage *>(obj)!=NULL;
}

const char *BaseResponseMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BaseResponseMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int BaseResponseMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *BaseResponseMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "callHopCount";
        case 1: return "coords";
        case 2: return "error";
        default: return NULL;
    }
}

const char *BaseResponseMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        case 1: return "double";
        case 2: return "double";
        default: return NULL;
    }
}

const char *BaseResponseMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BaseResponseMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BaseResponseMessage *pp = (BaseResponseMessage *)object; (void)pp;
    switch (field) {
        case 1: return pp->getCoordsArraySize();
        default: return 0;
    }
}

bool BaseResponseMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    BaseResponseMessage *pp = (BaseResponseMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getCallHopCount(),resultbuf,bufsize); return true;
        case 1: double2string(pp->getCoords(i),resultbuf,bufsize); return true;
        case 2: double2string(pp->getError(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool BaseResponseMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BaseResponseMessage *pp = (BaseResponseMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCallHopCount(string2long(value)); return true;
        case 1: pp->setCoords(i,string2double(value)); return true;
        case 2: pp->setError(string2double(value)); return true;
        default: return false;
    }
}

const char *BaseResponseMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *BaseResponseMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BaseResponseMessage *pp = (BaseResponseMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RpcTimeoutMessage);

RpcTimeoutMessage::RpcTimeoutMessage(const char *name, int kind) : BaseRpcMessage(name,kind)
{
}

RpcTimeoutMessage::RpcTimeoutMessage(const RpcTimeoutMessage& other) : BaseRpcMessage()
{
    setName(other.getName());
    operator=(other);
}

RpcTimeoutMessage::~RpcTimeoutMessage()
{
}

RpcTimeoutMessage& RpcTimeoutMessage::operator=(const RpcTimeoutMessage& other)
{
    if (this==&other) return *this;
    BaseRpcMessage::operator=(other);
    return *this;
}

void RpcTimeoutMessage::parsimPack(cCommBuffer *b)
{
    BaseRpcMessage::parsimPack(b);
}

void RpcTimeoutMessage::parsimUnpack(cCommBuffer *b)
{
    BaseRpcMessage::parsimUnpack(b);
}

class RpcTimeoutMessageDescriptor : public cClassDescriptor
{
  public:
    RpcTimeoutMessageDescriptor();
    virtual ~RpcTimeoutMessageDescriptor();

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

Register_ClassDescriptor(RpcTimeoutMessageDescriptor);

RpcTimeoutMessageDescriptor::RpcTimeoutMessageDescriptor() : cClassDescriptor("RpcTimeoutMessage", "BaseRpcMessage")
{
}

RpcTimeoutMessageDescriptor::~RpcTimeoutMessageDescriptor()
{
}

bool RpcTimeoutMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RpcTimeoutMessage *>(obj)!=NULL;
}

const char *RpcTimeoutMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RpcTimeoutMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RpcTimeoutMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *RpcTimeoutMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *RpcTimeoutMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *RpcTimeoutMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RpcTimeoutMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RpcTimeoutMessage *pp = (RpcTimeoutMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool RpcTimeoutMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    RpcTimeoutMessage *pp = (RpcTimeoutMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool RpcTimeoutMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RpcTimeoutMessage *pp = (RpcTimeoutMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RpcTimeoutMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *RpcTimeoutMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RpcTimeoutMessage *pp = (RpcTimeoutMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(FindNodeCall);

FindNodeCall::FindNodeCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->numRedundantNodes_var = 0;
    this->numSiblings_var = 0;
    this->exhaustiveIterative_var = false;
}

FindNodeCall::FindNodeCall(const FindNodeCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

FindNodeCall::~FindNodeCall()
{
}

FindNodeCall& FindNodeCall::operator=(const FindNodeCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->lookupKey_var = other.lookupKey_var;
    this->numRedundantNodes_var = other.numRedundantNodes_var;
    this->numSiblings_var = other.numSiblings_var;
    this->exhaustiveIterative_var = other.exhaustiveIterative_var;
    return *this;
}

void FindNodeCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->lookupKey_var);
    doPacking(b,this->numRedundantNodes_var);
    doPacking(b,this->numSiblings_var);
    doPacking(b,this->exhaustiveIterative_var);
}

void FindNodeCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->lookupKey_var);
    doUnpacking(b,this->numRedundantNodes_var);
    doUnpacking(b,this->numSiblings_var);
    doUnpacking(b,this->exhaustiveIterative_var);
}

OverlayKey& FindNodeCall::getLookupKey()
{
    return lookupKey_var;
}

void FindNodeCall::setLookupKey(const OverlayKey& lookupKey_var)
{
    this->lookupKey_var = lookupKey_var;
}

int FindNodeCall::getNumRedundantNodes() const
{
    return numRedundantNodes_var;
}

void FindNodeCall::setNumRedundantNodes(int numRedundantNodes_var)
{
    this->numRedundantNodes_var = numRedundantNodes_var;
}

int FindNodeCall::getNumSiblings() const
{
    return numSiblings_var;
}

void FindNodeCall::setNumSiblings(int numSiblings_var)
{
    this->numSiblings_var = numSiblings_var;
}

bool FindNodeCall::getExhaustiveIterative() const
{
    return exhaustiveIterative_var;
}

void FindNodeCall::setExhaustiveIterative(bool exhaustiveIterative_var)
{
    this->exhaustiveIterative_var = exhaustiveIterative_var;
}

class FindNodeCallDescriptor : public cClassDescriptor
{
  public:
    FindNodeCallDescriptor();
    virtual ~FindNodeCallDescriptor();

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

Register_ClassDescriptor(FindNodeCallDescriptor);

FindNodeCallDescriptor::FindNodeCallDescriptor() : cClassDescriptor("FindNodeCall", "BaseCallMessage")
{
}

FindNodeCallDescriptor::~FindNodeCallDescriptor()
{
}

bool FindNodeCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FindNodeCall *>(obj)!=NULL;
}

const char *FindNodeCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FindNodeCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int FindNodeCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *FindNodeCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "lookupKey";
        case 1: return "numRedundantNodes";
        case 2: return "numSiblings";
        case 3: return "exhaustiveIterative";
        default: return NULL;
    }
}

const char *FindNodeCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "int";
        case 2: return "int";
        case 3: return "bool";
        default: return NULL;
    }
}

const char *FindNodeCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FindNodeCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FindNodeCall *pp = (FindNodeCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool FindNodeCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    FindNodeCall *pp = (FindNodeCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLookupKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getNumRedundantNodes(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getNumSiblings(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->getExhaustiveIterative(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool FindNodeCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FindNodeCall *pp = (FindNodeCall *)object; (void)pp;
    switch (field) {
        case 1: pp->setNumRedundantNodes(string2long(value)); return true;
        case 2: pp->setNumSiblings(string2long(value)); return true;
        case 3: pp->setExhaustiveIterative(string2bool(value)); return true;
        default: return false;
    }
}

const char *FindNodeCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        default: return NULL;
    }
}

void *FindNodeCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FindNodeCall *pp = (FindNodeCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLookupKey()); break;
        default: return NULL;
    }
}

Register_Class(FindNodeResponse);

FindNodeResponse::FindNodeResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->siblings_var = 0;
    closestNodes_arraysize = 0;
    this->closestNodes_var = 0;
}

FindNodeResponse::FindNodeResponse(const FindNodeResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    closestNodes_arraysize = 0;
    this->closestNodes_var = 0;
    operator=(other);
}

FindNodeResponse::~FindNodeResponse()
{
    delete [] closestNodes_var;
}

FindNodeResponse& FindNodeResponse::operator=(const FindNodeResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->siblings_var = other.siblings_var;
    delete [] this->closestNodes_var;
    this->closestNodes_var = (other.closestNodes_arraysize==0) ? NULL : new NodeHandle[other.closestNodes_arraysize];
    closestNodes_arraysize = other.closestNodes_arraysize;
    for (unsigned int i=0; i<closestNodes_arraysize; i++)
        this->closestNodes_var[i] = other.closestNodes_var[i];
    return *this;
}

void FindNodeResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->siblings_var);
    b->pack(closestNodes_arraysize);
    doPacking(b,this->closestNodes_var,closestNodes_arraysize);
}

void FindNodeResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->siblings_var);
    delete [] this->closestNodes_var;
    b->unpack(closestNodes_arraysize);
    if (closestNodes_arraysize==0) {
        this->closestNodes_var = 0;
    } else {
        this->closestNodes_var = new NodeHandle[closestNodes_arraysize];
        doUnpacking(b,this->closestNodes_var,closestNodes_arraysize);
    }
}

bool FindNodeResponse::getSiblings() const
{
    return siblings_var;
}

void FindNodeResponse::setSiblings(bool siblings_var)
{
    this->siblings_var = siblings_var;
}

void FindNodeResponse::setClosestNodesArraySize(unsigned int size)
{
    NodeHandle *closestNodes_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = closestNodes_arraysize < size ? closestNodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        closestNodes_var2[i] = this->closestNodes_var[i];
    closestNodes_arraysize = size;
    delete [] this->closestNodes_var;
    this->closestNodes_var = closestNodes_var2;
}

unsigned int FindNodeResponse::getClosestNodesArraySize() const
{
    return closestNodes_arraysize;
}

NodeHandle& FindNodeResponse::getClosestNodes(unsigned int k)
{
    if (k>=closestNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", closestNodes_arraysize, k);
    return closestNodes_var[k];
}

void FindNodeResponse::setClosestNodes(unsigned int k, const NodeHandle& closestNodes_var)
{
    if (k>=closestNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", closestNodes_arraysize, k);
    this->closestNodes_var[k]=closestNodes_var;
}

class FindNodeResponseDescriptor : public cClassDescriptor
{
  public:
    FindNodeResponseDescriptor();
    virtual ~FindNodeResponseDescriptor();

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

Register_ClassDescriptor(FindNodeResponseDescriptor);

FindNodeResponseDescriptor::FindNodeResponseDescriptor() : cClassDescriptor("FindNodeResponse", "BaseResponseMessage")
{
}

FindNodeResponseDescriptor::~FindNodeResponseDescriptor()
{
}

bool FindNodeResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FindNodeResponse *>(obj)!=NULL;
}

const char *FindNodeResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FindNodeResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int FindNodeResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *FindNodeResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "siblings";
        case 1: return "closestNodes";
        default: return NULL;
    }
}

const char *FindNodeResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "NodeHandle";
        default: return NULL;
    }
}

const char *FindNodeResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FindNodeResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FindNodeResponse *pp = (FindNodeResponse *)object; (void)pp;
    switch (field) {
        case 1: return pp->getClosestNodesArraySize();
        default: return 0;
    }
}

bool FindNodeResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    FindNodeResponse *pp = (FindNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getSiblings(),resultbuf,bufsize); return true;
        case 1: {std::stringstream out; out << pp->getClosestNodes(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool FindNodeResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FindNodeResponse *pp = (FindNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setSiblings(string2bool(value)); return true;
        default: return false;
    }
}

const char *FindNodeResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *FindNodeResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FindNodeResponse *pp = (FindNodeResponse *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getClosestNodes(i)); break;
        default: return NULL;
    }
}

Register_Class(FailedNodeCall);

FailedNodeCall::FailedNodeCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

FailedNodeCall::FailedNodeCall(const FailedNodeCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

FailedNodeCall::~FailedNodeCall()
{
}

FailedNodeCall& FailedNodeCall::operator=(const FailedNodeCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->failedNode_var = other.failedNode_var;
    return *this;
}

void FailedNodeCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->failedNode_var);
}

void FailedNodeCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->failedNode_var);
}

TransportAddress& FailedNodeCall::getFailedNode()
{
    return failedNode_var;
}

void FailedNodeCall::setFailedNode(const TransportAddress& failedNode_var)
{
    this->failedNode_var = failedNode_var;
}

class FailedNodeCallDescriptor : public cClassDescriptor
{
  public:
    FailedNodeCallDescriptor();
    virtual ~FailedNodeCallDescriptor();

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

Register_ClassDescriptor(FailedNodeCallDescriptor);

FailedNodeCallDescriptor::FailedNodeCallDescriptor() : cClassDescriptor("FailedNodeCall", "BaseCallMessage")
{
}

FailedNodeCallDescriptor::~FailedNodeCallDescriptor()
{
}

bool FailedNodeCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FailedNodeCall *>(obj)!=NULL;
}

const char *FailedNodeCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FailedNodeCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int FailedNodeCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *FailedNodeCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "failedNode";
        default: return NULL;
    }
}

const char *FailedNodeCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress";
        default: return NULL;
    }
}

const char *FailedNodeCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FailedNodeCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FailedNodeCall *pp = (FailedNodeCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool FailedNodeCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    FailedNodeCall *pp = (FailedNodeCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getFailedNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool FailedNodeCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FailedNodeCall *pp = (FailedNodeCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *FailedNodeCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *FailedNodeCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FailedNodeCall *pp = (FailedNodeCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getFailedNode()); break;
        default: return NULL;
    }
}

Register_Class(FailedNodeResponse);

FailedNodeResponse::FailedNodeResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->tryAgain_var = 0;
}

FailedNodeResponse::FailedNodeResponse(const FailedNodeResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    operator=(other);
}

FailedNodeResponse::~FailedNodeResponse()
{
}

FailedNodeResponse& FailedNodeResponse::operator=(const FailedNodeResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->tryAgain_var = other.tryAgain_var;
    return *this;
}

void FailedNodeResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->tryAgain_var);
}

void FailedNodeResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->tryAgain_var);
}

bool FailedNodeResponse::getTryAgain() const
{
    return tryAgain_var;
}

void FailedNodeResponse::setTryAgain(bool tryAgain_var)
{
    this->tryAgain_var = tryAgain_var;
}

class FailedNodeResponseDescriptor : public cClassDescriptor
{
  public:
    FailedNodeResponseDescriptor();
    virtual ~FailedNodeResponseDescriptor();

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

Register_ClassDescriptor(FailedNodeResponseDescriptor);

FailedNodeResponseDescriptor::FailedNodeResponseDescriptor() : cClassDescriptor("FailedNodeResponse", "BaseResponseMessage")
{
}

FailedNodeResponseDescriptor::~FailedNodeResponseDescriptor()
{
}

bool FailedNodeResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FailedNodeResponse *>(obj)!=NULL;
}

const char *FailedNodeResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FailedNodeResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int FailedNodeResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *FailedNodeResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "tryAgain";
        default: return NULL;
    }
}

const char *FailedNodeResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        default: return NULL;
    }
}

const char *FailedNodeResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FailedNodeResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FailedNodeResponse *pp = (FailedNodeResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool FailedNodeResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    FailedNodeResponse *pp = (FailedNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getTryAgain(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool FailedNodeResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FailedNodeResponse *pp = (FailedNodeResponse *)object; (void)pp;
    switch (field) {
        case 0: pp->setTryAgain(string2bool(value)); return true;
        default: return false;
    }
}

const char *FailedNodeResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *FailedNodeResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FailedNodeResponse *pp = (FailedNodeResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PingCall);

PingCall::PingCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

PingCall::PingCall(const PingCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

PingCall::~PingCall()
{
}

PingCall& PingCall::operator=(const PingCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    return *this;
}

void PingCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void PingCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class PingCallDescriptor : public cClassDescriptor
{
  public:
    PingCallDescriptor();
    virtual ~PingCallDescriptor();

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

Register_ClassDescriptor(PingCallDescriptor);

PingCallDescriptor::PingCallDescriptor() : cClassDescriptor("PingCall", "BaseCallMessage")
{
}

PingCallDescriptor::~PingCallDescriptor()
{
}

bool PingCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PingCall *>(obj)!=NULL;
}

const char *PingCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PingCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int PingCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *PingCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *PingCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *PingCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PingCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PingCall *pp = (PingCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PingCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PingCall *pp = (PingCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool PingCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PingCall *pp = (PingCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PingCallDescriptor::getFieldStructName(void *object, int field) const
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

void *PingCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PingCall *pp = (PingCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PingResponse);

PingResponse::PingResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

PingResponse::PingResponse(const PingResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    operator=(other);
}

PingResponse::~PingResponse()
{
}

PingResponse& PingResponse::operator=(const PingResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    return *this;
}

void PingResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void PingResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class PingResponseDescriptor : public cClassDescriptor
{
  public:
    PingResponseDescriptor();
    virtual ~PingResponseDescriptor();

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

Register_ClassDescriptor(PingResponseDescriptor);

PingResponseDescriptor::PingResponseDescriptor() : cClassDescriptor("PingResponse", "BaseResponseMessage")
{
}

PingResponseDescriptor::~PingResponseDescriptor()
{
}

bool PingResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PingResponse *>(obj)!=NULL;
}

const char *PingResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PingResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int PingResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *PingResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *PingResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *PingResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PingResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PingResponse *pp = (PingResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PingResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PingResponse *pp = (PingResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool PingResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PingResponse *pp = (PingResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PingResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *PingResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PingResponse *pp = (PingResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(CompReadyMessage);

CompReadyMessage::CompReadyMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->ready_var = 0;
    this->comp_var = 0;
}

CompReadyMessage::CompReadyMessage(const CompReadyMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

CompReadyMessage::~CompReadyMessage()
{
}

CompReadyMessage& CompReadyMessage::operator=(const CompReadyMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->ready_var = other.ready_var;
    this->comp_var = other.comp_var;
    return *this;
}

void CompReadyMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->ready_var);
    doPacking(b,this->comp_var);
}

void CompReadyMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->ready_var);
    doUnpacking(b,this->comp_var);
}

bool CompReadyMessage::getReady() const
{
    return ready_var;
}

void CompReadyMessage::setReady(bool ready_var)
{
    this->ready_var = ready_var;
}

int CompReadyMessage::getComp() const
{
    return comp_var;
}

void CompReadyMessage::setComp(int comp_var)
{
    this->comp_var = comp_var;
}

class CompReadyMessageDescriptor : public cClassDescriptor
{
  public:
    CompReadyMessageDescriptor();
    virtual ~CompReadyMessageDescriptor();

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

Register_ClassDescriptor(CompReadyMessageDescriptor);

CompReadyMessageDescriptor::CompReadyMessageDescriptor() : cClassDescriptor("CompReadyMessage", "cPacket")
{
}

CompReadyMessageDescriptor::~CompReadyMessageDescriptor()
{
}

bool CompReadyMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CompReadyMessage *>(obj)!=NULL;
}

const char *CompReadyMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CompReadyMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int CompReadyMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *CompReadyMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "ready";
        case 1: return "comp";
        default: return NULL;
    }
}

const char *CompReadyMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "bool";
        case 1: return "int";
        default: return NULL;
    }
}

const char *CompReadyMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "CompType";
            return NULL;
        default: return NULL;
    }
}

int CompReadyMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CompReadyMessage *pp = (CompReadyMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool CompReadyMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    CompReadyMessage *pp = (CompReadyMessage *)object; (void)pp;
    switch (field) {
        case 0: bool2string(pp->getReady(),resultbuf,bufsize); return true;
        case 1: long2string(pp->getComp(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool CompReadyMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CompReadyMessage *pp = (CompReadyMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setReady(string2bool(value)); return true;
        case 1: pp->setComp(string2long(value)); return true;
        default: return false;
    }
}

const char *CompReadyMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *CompReadyMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CompReadyMessage *pp = (CompReadyMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(BootstrapLookupMessage);

BootstrapLookupMessage::BootstrapLookupMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
}

BootstrapLookupMessage::BootstrapLookupMessage(const BootstrapLookupMessage& other) : BaseOverlayMessage()
{
    setName(other.getName());
    operator=(other);
}

BootstrapLookupMessage::~BootstrapLookupMessage()
{
}

BootstrapLookupMessage& BootstrapLookupMessage::operator=(const BootstrapLookupMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    return *this;
}

void BootstrapLookupMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
}

void BootstrapLookupMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
}

class BootstrapLookupMessageDescriptor : public cClassDescriptor
{
  public:
    BootstrapLookupMessageDescriptor();
    virtual ~BootstrapLookupMessageDescriptor();

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

Register_ClassDescriptor(BootstrapLookupMessageDescriptor);

BootstrapLookupMessageDescriptor::BootstrapLookupMessageDescriptor() : cClassDescriptor("BootstrapLookupMessage", "BaseOverlayMessage")
{
}

BootstrapLookupMessageDescriptor::~BootstrapLookupMessageDescriptor()
{
}

bool BootstrapLookupMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BootstrapLookupMessage *>(obj)!=NULL;
}

const char *BootstrapLookupMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BootstrapLookupMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int BootstrapLookupMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *BootstrapLookupMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *BootstrapLookupMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *BootstrapLookupMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BootstrapLookupMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BootstrapLookupMessage *pp = (BootstrapLookupMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool BootstrapLookupMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    BootstrapLookupMessage *pp = (BootstrapLookupMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool BootstrapLookupMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BootstrapLookupMessage *pp = (BootstrapLookupMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *BootstrapLookupMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *BootstrapLookupMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BootstrapLookupMessage *pp = (BootstrapLookupMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NextHopCall);

NextHopCall::NextHopCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

NextHopCall::NextHopCall(const NextHopCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

NextHopCall::~NextHopCall()
{
}

NextHopCall& NextHopCall::operator=(const NextHopCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    return *this;
}

void NextHopCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void NextHopCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class NextHopCallDescriptor : public cClassDescriptor
{
  public:
    NextHopCallDescriptor();
    virtual ~NextHopCallDescriptor();

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

Register_ClassDescriptor(NextHopCallDescriptor);

NextHopCallDescriptor::NextHopCallDescriptor() : cClassDescriptor("NextHopCall", "BaseCallMessage")
{
}

NextHopCallDescriptor::~NextHopCallDescriptor()
{
}

bool NextHopCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NextHopCall *>(obj)!=NULL;
}

const char *NextHopCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NextHopCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int NextHopCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *NextHopCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NextHopCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NextHopCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NextHopCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NextHopCall *pp = (NextHopCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool NextHopCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NextHopCall *pp = (NextHopCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool NextHopCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NextHopCall *pp = (NextHopCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NextHopCallDescriptor::getFieldStructName(void *object, int field) const
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

void *NextHopCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NextHopCall *pp = (NextHopCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NextHopResponse);

NextHopResponse::NextHopResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
}

NextHopResponse::NextHopResponse(const NextHopResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    operator=(other);
}

NextHopResponse::~NextHopResponse()
{
}

NextHopResponse& NextHopResponse::operator=(const NextHopResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    return *this;
}

void NextHopResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
}

void NextHopResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
}

class NextHopResponseDescriptor : public cClassDescriptor
{
  public:
    NextHopResponseDescriptor();
    virtual ~NextHopResponseDescriptor();

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

Register_ClassDescriptor(NextHopResponseDescriptor);

NextHopResponseDescriptor::NextHopResponseDescriptor() : cClassDescriptor("NextHopResponse", "BaseResponseMessage")
{
}

NextHopResponseDescriptor::~NextHopResponseDescriptor()
{
}

bool NextHopResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NextHopResponse *>(obj)!=NULL;
}

const char *NextHopResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NextHopResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int NextHopResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *NextHopResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NextHopResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NextHopResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NextHopResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NextHopResponse *pp = (NextHopResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool NextHopResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NextHopResponse *pp = (NextHopResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool NextHopResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NextHopResponse *pp = (NextHopResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NextHopResponseDescriptor::getFieldStructName(void *object, int field) const
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

void *NextHopResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NextHopResponse *pp = (NextHopResponse *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(CommonAPIMessage);

CommonAPIMessage::CommonAPIMessage(const char *name, int kind) : cPacket(name,kind)
{
    this->type_var = COMMON_API_UNDEFINED;
}

CommonAPIMessage::CommonAPIMessage(const CommonAPIMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

CommonAPIMessage::~CommonAPIMessage()
{
}

CommonAPIMessage& CommonAPIMessage::operator=(const CommonAPIMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->type_var = other.type_var;
    return *this;
}

void CommonAPIMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->type_var);
}

void CommonAPIMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
}

int CommonAPIMessage::getType() const
{
    return type_var;
}

void CommonAPIMessage::setType(int type_var)
{
    this->type_var = type_var;
}

class CommonAPIMessageDescriptor : public cClassDescriptor
{
  public:
    CommonAPIMessageDescriptor();
    virtual ~CommonAPIMessageDescriptor();

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

Register_ClassDescriptor(CommonAPIMessageDescriptor);

CommonAPIMessageDescriptor::CommonAPIMessageDescriptor() : cClassDescriptor("CommonAPIMessage", "cPacket")
{
}

CommonAPIMessageDescriptor::~CommonAPIMessageDescriptor()
{
}

bool CommonAPIMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CommonAPIMessage *>(obj)!=NULL;
}

const char *CommonAPIMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CommonAPIMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int CommonAPIMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *CommonAPIMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "type";
        default: return NULL;
    }
}

const char *CommonAPIMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        default: return NULL;
    }
}

const char *CommonAPIMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "CommonAPIMessageType";
            return NULL;
        default: return NULL;
    }
}

int CommonAPIMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CommonAPIMessage *pp = (CommonAPIMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool CommonAPIMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    CommonAPIMessage *pp = (CommonAPIMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getType(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool CommonAPIMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CommonAPIMessage *pp = (CommonAPIMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *CommonAPIMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *CommonAPIMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CommonAPIMessage *pp = (CommonAPIMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(KBRroute);

KBRroute::KBRroute(const char *name, int kind) : CommonAPIMessage(name,kind)
{
    this->destComp_var = 0;
    this->srcComp_var = 0;
    sourceRoute_arraysize = 0;
    this->sourceRoute_var = 0;
    this->routingType_var = 0;
}

KBRroute::KBRroute(const KBRroute& other) : CommonAPIMessage()
{
    setName(other.getName());
    sourceRoute_arraysize = 0;
    this->sourceRoute_var = 0;
    operator=(other);
}

KBRroute::~KBRroute()
{
    delete [] sourceRoute_var;
}

KBRroute& KBRroute::operator=(const KBRroute& other)
{
    if (this==&other) return *this;
    CommonAPIMessage::operator=(other);
    this->destKey_var = other.destKey_var;
    this->destComp_var = other.destComp_var;
    this->srcComp_var = other.srcComp_var;
    delete [] this->sourceRoute_var;
    this->sourceRoute_var = (other.sourceRoute_arraysize==0) ? NULL : new TransportAddress[other.sourceRoute_arraysize];
    sourceRoute_arraysize = other.sourceRoute_arraysize;
    for (unsigned int i=0; i<sourceRoute_arraysize; i++)
        this->sourceRoute_var[i] = other.sourceRoute_var[i];
    this->routingType_var = other.routingType_var;
    return *this;
}

void KBRroute::parsimPack(cCommBuffer *b)
{
    CommonAPIMessage::parsimPack(b);
    doPacking(b,this->destKey_var);
    doPacking(b,this->destComp_var);
    doPacking(b,this->srcComp_var);
    b->pack(sourceRoute_arraysize);
    doPacking(b,this->sourceRoute_var,sourceRoute_arraysize);
    doPacking(b,this->routingType_var);
}

void KBRroute::parsimUnpack(cCommBuffer *b)
{
    CommonAPIMessage::parsimUnpack(b);
    doUnpacking(b,this->destKey_var);
    doUnpacking(b,this->destComp_var);
    doUnpacking(b,this->srcComp_var);
    delete [] this->sourceRoute_var;
    b->unpack(sourceRoute_arraysize);
    if (sourceRoute_arraysize==0) {
        this->sourceRoute_var = 0;
    } else {
        this->sourceRoute_var = new TransportAddress[sourceRoute_arraysize];
        doUnpacking(b,this->sourceRoute_var,sourceRoute_arraysize);
    }
    doUnpacking(b,this->routingType_var);
}

OverlayKey& KBRroute::getDestKey()
{
    return destKey_var;
}

void KBRroute::setDestKey(const OverlayKey& destKey_var)
{
    this->destKey_var = destKey_var;
}

int KBRroute::getDestComp() const
{
    return destComp_var;
}

void KBRroute::setDestComp(int destComp_var)
{
    this->destComp_var = destComp_var;
}

int KBRroute::getSrcComp() const
{
    return srcComp_var;
}

void KBRroute::setSrcComp(int srcComp_var)
{
    this->srcComp_var = srcComp_var;
}

void KBRroute::setSourceRouteArraySize(unsigned int size)
{
    TransportAddress *sourceRoute_var2 = (size==0) ? NULL : new TransportAddress[size];
    unsigned int sz = sourceRoute_arraysize < size ? sourceRoute_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        sourceRoute_var2[i] = this->sourceRoute_var[i];
    sourceRoute_arraysize = size;
    delete [] this->sourceRoute_var;
    this->sourceRoute_var = sourceRoute_var2;
}

unsigned int KBRroute::getSourceRouteArraySize() const
{
    return sourceRoute_arraysize;
}

TransportAddress& KBRroute::getSourceRoute(unsigned int k)
{
    if (k>=sourceRoute_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sourceRoute_arraysize, k);
    return sourceRoute_var[k];
}

void KBRroute::setSourceRoute(unsigned int k, const TransportAddress& sourceRoute_var)
{
    if (k>=sourceRoute_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sourceRoute_arraysize, k);
    this->sourceRoute_var[k]=sourceRoute_var;
}

int KBRroute::getRoutingType() const
{
    return routingType_var;
}

void KBRroute::setRoutingType(int routingType_var)
{
    this->routingType_var = routingType_var;
}

class KBRrouteDescriptor : public cClassDescriptor
{
  public:
    KBRrouteDescriptor();
    virtual ~KBRrouteDescriptor();

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

Register_ClassDescriptor(KBRrouteDescriptor);

KBRrouteDescriptor::KBRrouteDescriptor() : cClassDescriptor("KBRroute", "CommonAPIMessage")
{
}

KBRrouteDescriptor::~KBRrouteDescriptor()
{
}

bool KBRrouteDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KBRroute *>(obj)!=NULL;
}

const char *KBRrouteDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KBRrouteDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int KBRrouteDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISARRAY | FD_ISCOMPOUND;
        case 4: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *KBRrouteDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "destKey";
        case 1: return "destComp";
        case 2: return "srcComp";
        case 3: return "sourceRoute";
        case 4: return "routingType";
        default: return NULL;
    }
}

const char *KBRrouteDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "int";
        case 2: return "int";
        case 3: return "TransportAddress";
        case 4: return "int";
        default: return NULL;
    }
}

const char *KBRrouteDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "CompType";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"enum")) return "CompType";
            return NULL;
        case 4:
            if (!strcmp(propertyname,"enum")) return "RoutingType";
            return NULL;
        default: return NULL;
    }
}

int KBRrouteDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KBRroute *pp = (KBRroute *)object; (void)pp;
    switch (field) {
        case 3: return pp->getSourceRouteArraySize();
        default: return 0;
    }
}

bool KBRrouteDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    KBRroute *pp = (KBRroute *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getDestComp(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getSrcComp(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getSourceRoute(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: long2string(pp->getRoutingType(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool KBRrouteDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KBRroute *pp = (KBRroute *)object; (void)pp;
    switch (field) {
        case 1: pp->setDestComp(string2long(value)); return true;
        case 2: pp->setSrcComp(string2long(value)); return true;
        case 4: pp->setRoutingType(string2long(value)); return true;
        default: return false;
    }
}

const char *KBRrouteDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 3: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *KBRrouteDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KBRroute *pp = (KBRroute *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestKey()); break;
        case 3: return (void *)(&pp->getSourceRoute(i)); break;
        default: return NULL;
    }
}

Register_Class(KBRforward);

KBRforward::KBRforward(const char *name, int kind) : CommonAPIMessage(name,kind)
{
}

KBRforward::KBRforward(const KBRforward& other) : CommonAPIMessage()
{
    setName(other.getName());
    operator=(other);
}

KBRforward::~KBRforward()
{
}

KBRforward& KBRforward::operator=(const KBRforward& other)
{
    if (this==&other) return *this;
    CommonAPIMessage::operator=(other);
    this->destKey_var = other.destKey_var;
    this->nextHopNode_var = other.nextHopNode_var;
    return *this;
}

void KBRforward::parsimPack(cCommBuffer *b)
{
    CommonAPIMessage::parsimPack(b);
    doPacking(b,this->destKey_var);
    doPacking(b,this->nextHopNode_var);
}

void KBRforward::parsimUnpack(cCommBuffer *b)
{
    CommonAPIMessage::parsimUnpack(b);
    doUnpacking(b,this->destKey_var);
    doUnpacking(b,this->nextHopNode_var);
}

OverlayKey& KBRforward::getDestKey()
{
    return destKey_var;
}

void KBRforward::setDestKey(const OverlayKey& destKey_var)
{
    this->destKey_var = destKey_var;
}

NodeHandle& KBRforward::getNextHopNode()
{
    return nextHopNode_var;
}

void KBRforward::setNextHopNode(const NodeHandle& nextHopNode_var)
{
    this->nextHopNode_var = nextHopNode_var;
}

class KBRforwardDescriptor : public cClassDescriptor
{
  public:
    KBRforwardDescriptor();
    virtual ~KBRforwardDescriptor();

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

Register_ClassDescriptor(KBRforwardDescriptor);

KBRforwardDescriptor::KBRforwardDescriptor() : cClassDescriptor("KBRforward", "CommonAPIMessage")
{
}

KBRforwardDescriptor::~KBRforwardDescriptor()
{
}

bool KBRforwardDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KBRforward *>(obj)!=NULL;
}

const char *KBRforwardDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KBRforwardDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int KBRforwardDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *KBRforwardDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "destKey";
        case 1: return "nextHopNode";
        default: return NULL;
    }
}

const char *KBRforwardDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "NodeHandle";
        default: return NULL;
    }
}

const char *KBRforwardDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KBRforwardDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KBRforward *pp = (KBRforward *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool KBRforwardDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    KBRforward *pp = (KBRforward *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getNextHopNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool KBRforwardDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KBRforward *pp = (KBRforward *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *KBRforwardDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 1: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *KBRforwardDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KBRforward *pp = (KBRforward *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestKey()); break;
        case 1: return (void *)(&pp->getNextHopNode()); break;
        default: return NULL;
    }
}

Register_Class(KBRdeliver);

KBRdeliver::KBRdeliver(const char *name, int kind) : CommonAPIMessage(name,kind)
{
}

KBRdeliver::KBRdeliver(const KBRdeliver& other) : CommonAPIMessage()
{
    setName(other.getName());
    operator=(other);
}

KBRdeliver::~KBRdeliver()
{
}

KBRdeliver& KBRdeliver::operator=(const KBRdeliver& other)
{
    if (this==&other) return *this;
    CommonAPIMessage::operator=(other);
    this->destKey_var = other.destKey_var;
    return *this;
}

void KBRdeliver::parsimPack(cCommBuffer *b)
{
    CommonAPIMessage::parsimPack(b);
    doPacking(b,this->destKey_var);
}

void KBRdeliver::parsimUnpack(cCommBuffer *b)
{
    CommonAPIMessage::parsimUnpack(b);
    doUnpacking(b,this->destKey_var);
}

OverlayKey& KBRdeliver::getDestKey()
{
    return destKey_var;
}

void KBRdeliver::setDestKey(const OverlayKey& destKey_var)
{
    this->destKey_var = destKey_var;
}

class KBRdeliverDescriptor : public cClassDescriptor
{
  public:
    KBRdeliverDescriptor();
    virtual ~KBRdeliverDescriptor();

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

Register_ClassDescriptor(KBRdeliverDescriptor);

KBRdeliverDescriptor::KBRdeliverDescriptor() : cClassDescriptor("KBRdeliver", "CommonAPIMessage")
{
}

KBRdeliverDescriptor::~KBRdeliverDescriptor()
{
}

bool KBRdeliverDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KBRdeliver *>(obj)!=NULL;
}

const char *KBRdeliverDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KBRdeliverDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int KBRdeliverDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *KBRdeliverDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "destKey";
        default: return NULL;
    }
}

const char *KBRdeliverDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        default: return NULL;
    }
}

const char *KBRdeliverDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KBRdeliverDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KBRdeliver *pp = (KBRdeliver *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool KBRdeliverDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    KBRdeliver *pp = (KBRdeliver *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool KBRdeliverDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KBRdeliver *pp = (KBRdeliver *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *KBRdeliverDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        default: return NULL;
    }
}

void *KBRdeliverDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KBRdeliver *pp = (KBRdeliver *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestKey()); break;
        default: return NULL;
    }
}

Register_Class(KBRupdate);

KBRupdate::KBRupdate(const char *name, int kind) : CommonAPIMessage(name,kind)
{
    this->joined_var = 0;
}

KBRupdate::KBRupdate(const KBRupdate& other) : CommonAPIMessage()
{
    setName(other.getName());
    operator=(other);
}

KBRupdate::~KBRupdate()
{
}

KBRupdate& KBRupdate::operator=(const KBRupdate& other)
{
    if (this==&other) return *this;
    CommonAPIMessage::operator=(other);
    this->node_var = other.node_var;
    this->joined_var = other.joined_var;
    return *this;
}

void KBRupdate::parsimPack(cCommBuffer *b)
{
    CommonAPIMessage::parsimPack(b);
    doPacking(b,this->node_var);
    doPacking(b,this->joined_var);
}

void KBRupdate::parsimUnpack(cCommBuffer *b)
{
    CommonAPIMessage::parsimUnpack(b);
    doUnpacking(b,this->node_var);
    doUnpacking(b,this->joined_var);
}

NodeHandle& KBRupdate::getNode()
{
    return node_var;
}

void KBRupdate::setNode(const NodeHandle& node_var)
{
    this->node_var = node_var;
}

bool KBRupdate::getJoined() const
{
    return joined_var;
}

void KBRupdate::setJoined(bool joined_var)
{
    this->joined_var = joined_var;
}

class KBRupdateDescriptor : public cClassDescriptor
{
  public:
    KBRupdateDescriptor();
    virtual ~KBRupdateDescriptor();

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

Register_ClassDescriptor(KBRupdateDescriptor);

KBRupdateDescriptor::KBRupdateDescriptor() : cClassDescriptor("KBRupdate", "CommonAPIMessage")
{
}

KBRupdateDescriptor::~KBRupdateDescriptor()
{
}

bool KBRupdateDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<KBRupdate *>(obj)!=NULL;
}

const char *KBRupdateDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int KBRupdateDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int KBRupdateDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *KBRupdateDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "node";
        case 1: return "joined";
        default: return NULL;
    }
}

const char *KBRupdateDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle";
        case 1: return "bool";
        default: return NULL;
    }
}

const char *KBRupdateDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int KBRupdateDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    KBRupdate *pp = (KBRupdate *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool KBRupdateDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    KBRupdate *pp = (KBRupdate *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: bool2string(pp->getJoined(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool KBRupdateDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    KBRupdate *pp = (KBRupdate *)object; (void)pp;
    switch (field) {
        case 1: pp->setJoined(string2bool(value)); return true;
        default: return false;
    }
}

const char *KBRupdateDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *KBRupdateDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    KBRupdate *pp = (KBRupdate *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNode()); break;
        default: return NULL;
    }
}

Register_Class(DhtDumpEntry);

DhtDumpEntry::DhtDumpEntry() : cObject()
{
    this->kind_var = 0;
    this->id_var = 0;
    this->ttl_var = 0;
    this->is_modifiable_var = 0;
    this->responsible_var = 0;
}

DhtDumpEntry::DhtDumpEntry(const DhtDumpEntry& other) : cObject()
{
    operator=(other);
}

DhtDumpEntry::~DhtDumpEntry()
{
}

DhtDumpEntry& DhtDumpEntry::operator=(const DhtDumpEntry& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->key_var = other.key_var;
    this->kind_var = other.kind_var;
    this->id_var = other.id_var;
    this->value_var = other.value_var;
    this->ttl_var = other.ttl_var;
    this->ownerNode_var = other.ownerNode_var;
    this->is_modifiable_var = other.is_modifiable_var;
    this->responsible_var = other.responsible_var;
    return *this;
}

void DhtDumpEntry::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->key_var);
    doPacking(b,this->kind_var);
    doPacking(b,this->id_var);
    doPacking(b,this->value_var);
    doPacking(b,this->ttl_var);
    doPacking(b,this->ownerNode_var);
    doPacking(b,this->is_modifiable_var);
    doPacking(b,this->responsible_var);
}

void DhtDumpEntry::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->value_var);
    doUnpacking(b,this->ttl_var);
    doUnpacking(b,this->ownerNode_var);
    doUnpacking(b,this->is_modifiable_var);
    doUnpacking(b,this->responsible_var);
}

OverlayKey& DhtDumpEntry::getKey()
{
    return key_var;
}

void DhtDumpEntry::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

uint32_t DhtDumpEntry::getKind() const
{
    return kind_var;
}

void DhtDumpEntry::setKind(uint32_t kind_var)
{
    this->kind_var = kind_var;
}

uint32_t DhtDumpEntry::getId() const
{
    return id_var;
}

void DhtDumpEntry::setId(uint32_t id_var)
{
    this->id_var = id_var;
}

BinaryValue& DhtDumpEntry::getValue()
{
    return value_var;
}

void DhtDumpEntry::setValue(const BinaryValue& value_var)
{
    this->value_var = value_var;
}

int DhtDumpEntry::getTtl() const
{
    return ttl_var;
}

void DhtDumpEntry::setTtl(int ttl_var)
{
    this->ttl_var = ttl_var;
}

NodeHandle& DhtDumpEntry::getOwnerNode()
{
    return ownerNode_var;
}

void DhtDumpEntry::setOwnerNode(const NodeHandle& ownerNode_var)
{
    this->ownerNode_var = ownerNode_var;
}

bool DhtDumpEntry::getIs_modifiable() const
{
    return is_modifiable_var;
}

void DhtDumpEntry::setIs_modifiable(bool is_modifiable_var)
{
    this->is_modifiable_var = is_modifiable_var;
}

bool DhtDumpEntry::getResponsible() const
{
    return responsible_var;
}

void DhtDumpEntry::setResponsible(bool responsible_var)
{
    this->responsible_var = responsible_var;
}

class DhtDumpEntryDescriptor : public cClassDescriptor
{
  public:
    DhtDumpEntryDescriptor();
    virtual ~DhtDumpEntryDescriptor();

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

Register_ClassDescriptor(DhtDumpEntryDescriptor);

DhtDumpEntryDescriptor::DhtDumpEntryDescriptor() : cClassDescriptor("DhtDumpEntry", "cObject")
{
}

DhtDumpEntryDescriptor::~DhtDumpEntryDescriptor()
{
}

bool DhtDumpEntryDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DhtDumpEntry *>(obj)!=NULL;
}

const char *DhtDumpEntryDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DhtDumpEntryDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int DhtDumpEntryDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 5: return FD_ISCOMPOUND;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *DhtDumpEntryDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "kind";
        case 2: return "id";
        case 3: return "value";
        case 4: return "ttl";
        case 5: return "ownerNode";
        case 6: return "is_modifiable";
        case 7: return "responsible";
        default: return NULL;
    }
}

const char *DhtDumpEntryDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "uint32_t";
        case 2: return "uint32_t";
        case 3: return "BinaryValue";
        case 4: return "int";
        case 5: return "NodeHandle";
        case 6: return "bool";
        case 7: return "bool";
        default: return NULL;
    }
}

const char *DhtDumpEntryDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DhtDumpEntryDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DhtDumpEntry *pp = (DhtDumpEntry *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool DhtDumpEntryDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DhtDumpEntry *pp = (DhtDumpEntry *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getKind(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getId(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getValue(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: long2string(pp->getTtl(),resultbuf,bufsize); return true;
        case 5: {std::stringstream out; out << pp->getOwnerNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 6: bool2string(pp->getIs_modifiable(),resultbuf,bufsize); return true;
        case 7: bool2string(pp->getResponsible(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool DhtDumpEntryDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DhtDumpEntry *pp = (DhtDumpEntry *)object; (void)pp;
    switch (field) {
        case 1: pp->setKind(string2ulong(value)); return true;
        case 2: pp->setId(string2ulong(value)); return true;
        case 4: pp->setTtl(string2long(value)); return true;
        case 6: pp->setIs_modifiable(string2bool(value)); return true;
        case 7: pp->setResponsible(string2bool(value)); return true;
        default: return false;
    }
}

const char *DhtDumpEntryDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 3: return "BinaryValue"; break;
        case 5: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *DhtDumpEntryDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DhtDumpEntry *pp = (DhtDumpEntry *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        case 3: return (void *)(&pp->getValue()); break;
        case 5: return (void *)(&pp->getOwnerNode()); break;
        default: return NULL;
    }
}

Register_Class(DHTputCAPICall);

DHTputCAPICall::DHTputCAPICall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->kind_var = 1;
    this->id_var = 1;
    this->ttl_var = 0;
    this->isModifiable_var = 0;
}

DHTputCAPICall::DHTputCAPICall(const DHTputCAPICall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

DHTputCAPICall::~DHTputCAPICall()
{
}

DHTputCAPICall& DHTputCAPICall::operator=(const DHTputCAPICall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->key_var = other.key_var;
    this->kind_var = other.kind_var;
    this->id_var = other.id_var;
    this->value_var = other.value_var;
    this->ttl_var = other.ttl_var;
    this->isModifiable_var = other.isModifiable_var;
    return *this;
}

void DHTputCAPICall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->kind_var);
    doPacking(b,this->id_var);
    doPacking(b,this->value_var);
    doPacking(b,this->ttl_var);
    doPacking(b,this->isModifiable_var);
}

void DHTputCAPICall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->value_var);
    doUnpacking(b,this->ttl_var);
    doUnpacking(b,this->isModifiable_var);
}

OverlayKey& DHTputCAPICall::getKey()
{
    return key_var;
}

void DHTputCAPICall::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

uint32_t DHTputCAPICall::getKind() const
{
    return kind_var;
}

void DHTputCAPICall::setKind(uint32_t kind_var)
{
    this->kind_var = kind_var;
}

uint32_t DHTputCAPICall::getId() const
{
    return id_var;
}

void DHTputCAPICall::setId(uint32_t id_var)
{
    this->id_var = id_var;
}

BinaryValue& DHTputCAPICall::getValue()
{
    return value_var;
}

void DHTputCAPICall::setValue(const BinaryValue& value_var)
{
    this->value_var = value_var;
}

int DHTputCAPICall::getTtl() const
{
    return ttl_var;
}

void DHTputCAPICall::setTtl(int ttl_var)
{
    this->ttl_var = ttl_var;
}

bool DHTputCAPICall::getIsModifiable() const
{
    return isModifiable_var;
}

void DHTputCAPICall::setIsModifiable(bool isModifiable_var)
{
    this->isModifiable_var = isModifiable_var;
}

class DHTputCAPICallDescriptor : public cClassDescriptor
{
  public:
    DHTputCAPICallDescriptor();
    virtual ~DHTputCAPICallDescriptor();

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

Register_ClassDescriptor(DHTputCAPICallDescriptor);

DHTputCAPICallDescriptor::DHTputCAPICallDescriptor() : cClassDescriptor("DHTputCAPICall", "BaseCallMessage")
{
}

DHTputCAPICallDescriptor::~DHTputCAPICallDescriptor()
{
}

bool DHTputCAPICallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTputCAPICall *>(obj)!=NULL;
}

const char *DHTputCAPICallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTputCAPICallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int DHTputCAPICallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 5: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *DHTputCAPICallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "kind";
        case 2: return "id";
        case 3: return "value";
        case 4: return "ttl";
        case 5: return "isModifiable";
        default: return NULL;
    }
}

const char *DHTputCAPICallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "uint32_t";
        case 2: return "uint32_t";
        case 3: return "BinaryValue";
        case 4: return "int";
        case 5: return "bool";
        default: return NULL;
    }
}

const char *DHTputCAPICallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTputCAPICallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTputCAPICall *pp = (DHTputCAPICall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool DHTputCAPICallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTputCAPICall *pp = (DHTputCAPICall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getKind(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getId(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getValue(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: long2string(pp->getTtl(),resultbuf,bufsize); return true;
        case 5: bool2string(pp->getIsModifiable(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool DHTputCAPICallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTputCAPICall *pp = (DHTputCAPICall *)object; (void)pp;
    switch (field) {
        case 1: pp->setKind(string2ulong(value)); return true;
        case 2: pp->setId(string2ulong(value)); return true;
        case 4: pp->setTtl(string2long(value)); return true;
        case 5: pp->setIsModifiable(string2bool(value)); return true;
        default: return false;
    }
}

const char *DHTputCAPICallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 3: return "BinaryValue"; break;
        default: return NULL;
    }
}

void *DHTputCAPICallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTputCAPICall *pp = (DHTputCAPICall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        case 3: return (void *)(&pp->getValue()); break;
        default: return NULL;
    }
}

Register_Class(DHTgetCAPICall);

DHTgetCAPICall::DHTgetCAPICall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->kind_var = 1;
    this->id_var = 1;
}

DHTgetCAPICall::DHTgetCAPICall(const DHTgetCAPICall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

DHTgetCAPICall::~DHTgetCAPICall()
{
}

DHTgetCAPICall& DHTgetCAPICall::operator=(const DHTgetCAPICall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->key_var = other.key_var;
    this->kind_var = other.kind_var;
    this->id_var = other.id_var;
    return *this;
}

void DHTgetCAPICall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->kind_var);
    doPacking(b,this->id_var);
}

void DHTgetCAPICall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->id_var);
}

OverlayKey& DHTgetCAPICall::getKey()
{
    return key_var;
}

void DHTgetCAPICall::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

uint32_t DHTgetCAPICall::getKind() const
{
    return kind_var;
}

void DHTgetCAPICall::setKind(uint32_t kind_var)
{
    this->kind_var = kind_var;
}

uint32_t DHTgetCAPICall::getId() const
{
    return id_var;
}

void DHTgetCAPICall::setId(uint32_t id_var)
{
    this->id_var = id_var;
}

class DHTgetCAPICallDescriptor : public cClassDescriptor
{
  public:
    DHTgetCAPICallDescriptor();
    virtual ~DHTgetCAPICallDescriptor();

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

Register_ClassDescriptor(DHTgetCAPICallDescriptor);

DHTgetCAPICallDescriptor::DHTgetCAPICallDescriptor() : cClassDescriptor("DHTgetCAPICall", "BaseCallMessage")
{
}

DHTgetCAPICallDescriptor::~DHTgetCAPICallDescriptor()
{
}

bool DHTgetCAPICallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTgetCAPICall *>(obj)!=NULL;
}

const char *DHTgetCAPICallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTgetCAPICallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int DHTgetCAPICallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *DHTgetCAPICallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "kind";
        case 2: return "id";
        default: return NULL;
    }
}

const char *DHTgetCAPICallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "uint32_t";
        case 2: return "uint32_t";
        default: return NULL;
    }
}

const char *DHTgetCAPICallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTgetCAPICallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTgetCAPICall *pp = (DHTgetCAPICall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool DHTgetCAPICallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTgetCAPICall *pp = (DHTgetCAPICall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getKind(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getId(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool DHTgetCAPICallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTgetCAPICall *pp = (DHTgetCAPICall *)object; (void)pp;
    switch (field) {
        case 1: pp->setKind(string2ulong(value)); return true;
        case 2: pp->setId(string2ulong(value)); return true;
        default: return false;
    }
}

const char *DHTgetCAPICallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        default: return NULL;
    }
}

void *DHTgetCAPICallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTgetCAPICall *pp = (DHTgetCAPICall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        default: return NULL;
    }
}

Register_Class(DHTputCAPIResponse);

DHTputCAPIResponse::DHTputCAPIResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->isSuccess_var = 0;
}

DHTputCAPIResponse::DHTputCAPIResponse(const DHTputCAPIResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    operator=(other);
}

DHTputCAPIResponse::~DHTputCAPIResponse()
{
}

DHTputCAPIResponse& DHTputCAPIResponse::operator=(const DHTputCAPIResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->key_var = other.key_var;
    this->value_var = other.value_var;
    this->isSuccess_var = other.isSuccess_var;
    return *this;
}

void DHTputCAPIResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->value_var);
    doPacking(b,this->isSuccess_var);
}

void DHTputCAPIResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->value_var);
    doUnpacking(b,this->isSuccess_var);
}

OverlayKey& DHTputCAPIResponse::getKey()
{
    return key_var;
}

void DHTputCAPIResponse::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

BinaryValue& DHTputCAPIResponse::getValue()
{
    return value_var;
}

void DHTputCAPIResponse::setValue(const BinaryValue& value_var)
{
    this->value_var = value_var;
}

bool DHTputCAPIResponse::getIsSuccess() const
{
    return isSuccess_var;
}

void DHTputCAPIResponse::setIsSuccess(bool isSuccess_var)
{
    this->isSuccess_var = isSuccess_var;
}

class DHTputCAPIResponseDescriptor : public cClassDescriptor
{
  public:
    DHTputCAPIResponseDescriptor();
    virtual ~DHTputCAPIResponseDescriptor();

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

Register_ClassDescriptor(DHTputCAPIResponseDescriptor);

DHTputCAPIResponseDescriptor::DHTputCAPIResponseDescriptor() : cClassDescriptor("DHTputCAPIResponse", "BaseResponseMessage")
{
}

DHTputCAPIResponseDescriptor::~DHTputCAPIResponseDescriptor()
{
}

bool DHTputCAPIResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTputCAPIResponse *>(obj)!=NULL;
}

const char *DHTputCAPIResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTputCAPIResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int DHTputCAPIResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *DHTputCAPIResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "value";
        case 2: return "isSuccess";
        default: return NULL;
    }
}

const char *DHTputCAPIResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "BinaryValue";
        case 2: return "bool";
        default: return NULL;
    }
}

const char *DHTputCAPIResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTputCAPIResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTputCAPIResponse *pp = (DHTputCAPIResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool DHTputCAPIResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTputCAPIResponse *pp = (DHTputCAPIResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getValue(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: bool2string(pp->getIsSuccess(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool DHTputCAPIResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTputCAPIResponse *pp = (DHTputCAPIResponse *)object; (void)pp;
    switch (field) {
        case 2: pp->setIsSuccess(string2bool(value)); return true;
        default: return false;
    }
}

const char *DHTputCAPIResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 1: return "BinaryValue"; break;
        default: return NULL;
    }
}

void *DHTputCAPIResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTputCAPIResponse *pp = (DHTputCAPIResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        case 1: return (void *)(&pp->getValue()); break;
        default: return NULL;
    }
}

Register_Class(DHTgetCAPIResponse);

DHTgetCAPIResponse::DHTgetCAPIResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    result_arraysize = 0;
    this->result_var = 0;
    this->isSuccess_var = 0;
}

DHTgetCAPIResponse::DHTgetCAPIResponse(const DHTgetCAPIResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    result_arraysize = 0;
    this->result_var = 0;
    operator=(other);
}

DHTgetCAPIResponse::~DHTgetCAPIResponse()
{
    delete [] result_var;
}

DHTgetCAPIResponse& DHTgetCAPIResponse::operator=(const DHTgetCAPIResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    delete [] this->result_var;
    this->result_var = (other.result_arraysize==0) ? NULL : new DhtDumpEntry[other.result_arraysize];
    result_arraysize = other.result_arraysize;
    for (unsigned int i=0; i<result_arraysize; i++)
        this->result_var[i] = other.result_var[i];
    this->isSuccess_var = other.isSuccess_var;
    return *this;
}

void DHTgetCAPIResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    b->pack(result_arraysize);
    doPacking(b,this->result_var,result_arraysize);
    doPacking(b,this->isSuccess_var);
}

void DHTgetCAPIResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    delete [] this->result_var;
    b->unpack(result_arraysize);
    if (result_arraysize==0) {
        this->result_var = 0;
    } else {
        this->result_var = new DhtDumpEntry[result_arraysize];
        doUnpacking(b,this->result_var,result_arraysize);
    }
    doUnpacking(b,this->isSuccess_var);
}

void DHTgetCAPIResponse::setResultArraySize(unsigned int size)
{
    DhtDumpEntry *result_var2 = (size==0) ? NULL : new DhtDumpEntry[size];
    unsigned int sz = result_arraysize < size ? result_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        result_var2[i] = this->result_var[i];
    result_arraysize = size;
    delete [] this->result_var;
    this->result_var = result_var2;
}

unsigned int DHTgetCAPIResponse::getResultArraySize() const
{
    return result_arraysize;
}

DhtDumpEntry& DHTgetCAPIResponse::getResult(unsigned int k)
{
    if (k>=result_arraysize) throw cRuntimeError("Array of size %d indexed by %d", result_arraysize, k);
    return result_var[k];
}

void DHTgetCAPIResponse::setResult(unsigned int k, const DhtDumpEntry& result_var)
{
    if (k>=result_arraysize) throw cRuntimeError("Array of size %d indexed by %d", result_arraysize, k);
    this->result_var[k]=result_var;
}

bool DHTgetCAPIResponse::getIsSuccess() const
{
    return isSuccess_var;
}

void DHTgetCAPIResponse::setIsSuccess(bool isSuccess_var)
{
    this->isSuccess_var = isSuccess_var;
}

class DHTgetCAPIResponseDescriptor : public cClassDescriptor
{
  public:
    DHTgetCAPIResponseDescriptor();
    virtual ~DHTgetCAPIResponseDescriptor();

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

Register_ClassDescriptor(DHTgetCAPIResponseDescriptor);

DHTgetCAPIResponseDescriptor::DHTgetCAPIResponseDescriptor() : cClassDescriptor("DHTgetCAPIResponse", "BaseResponseMessage")
{
}

DHTgetCAPIResponseDescriptor::~DHTgetCAPIResponseDescriptor()
{
}

bool DHTgetCAPIResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTgetCAPIResponse *>(obj)!=NULL;
}

const char *DHTgetCAPIResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTgetCAPIResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int DHTgetCAPIResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND | FD_ISCPOLYMORPHIC;
        case 1: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *DHTgetCAPIResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "result";
        case 1: return "isSuccess";
        default: return NULL;
    }
}

const char *DHTgetCAPIResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "DhtDumpEntry";
        case 1: return "bool";
        default: return NULL;
    }
}

const char *DHTgetCAPIResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTgetCAPIResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTgetCAPIResponse *pp = (DHTgetCAPIResponse *)object; (void)pp;
    switch (field) {
        case 0: return pp->getResultArraySize();
        default: return 0;
    }
}

bool DHTgetCAPIResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTgetCAPIResponse *pp = (DHTgetCAPIResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getResult(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: bool2string(pp->getIsSuccess(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool DHTgetCAPIResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTgetCAPIResponse *pp = (DHTgetCAPIResponse *)object; (void)pp;
    switch (field) {
        case 1: pp->setIsSuccess(string2bool(value)); return true;
        default: return false;
    }
}

const char *DHTgetCAPIResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "DhtDumpEntry"; break;
        default: return NULL;
    }
}

void *DHTgetCAPIResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTgetCAPIResponse *pp = (DHTgetCAPIResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getResult(i)); break;
        default: return NULL;
    }
}

Register_Class(DHTdumpCall);

DHTdumpCall::DHTdumpCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
}

DHTdumpCall::DHTdumpCall(const DHTdumpCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

DHTdumpCall::~DHTdumpCall()
{
}

DHTdumpCall& DHTdumpCall::operator=(const DHTdumpCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    return *this;
}

void DHTdumpCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
}

void DHTdumpCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
}

class DHTdumpCallDescriptor : public cClassDescriptor
{
  public:
    DHTdumpCallDescriptor();
    virtual ~DHTdumpCallDescriptor();

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

Register_ClassDescriptor(DHTdumpCallDescriptor);

DHTdumpCallDescriptor::DHTdumpCallDescriptor() : cClassDescriptor("DHTdumpCall", "BaseCallMessage")
{
}

DHTdumpCallDescriptor::~DHTdumpCallDescriptor()
{
}

bool DHTdumpCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTdumpCall *>(obj)!=NULL;
}

const char *DHTdumpCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTdumpCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int DHTdumpCallDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *DHTdumpCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *DHTdumpCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *DHTdumpCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTdumpCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTdumpCall *pp = (DHTdumpCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool DHTdumpCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTdumpCall *pp = (DHTdumpCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool DHTdumpCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTdumpCall *pp = (DHTdumpCall *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *DHTdumpCallDescriptor::getFieldStructName(void *object, int field) const
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

void *DHTdumpCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTdumpCall *pp = (DHTdumpCall *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(DHTdumpResponse);

DHTdumpResponse::DHTdumpResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    record_arraysize = 0;
    this->record_var = 0;
}

DHTdumpResponse::DHTdumpResponse(const DHTdumpResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    record_arraysize = 0;
    this->record_var = 0;
    operator=(other);
}

DHTdumpResponse::~DHTdumpResponse()
{
    delete [] record_var;
}

DHTdumpResponse& DHTdumpResponse::operator=(const DHTdumpResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    delete [] this->record_var;
    this->record_var = (other.record_arraysize==0) ? NULL : new DhtDumpEntry[other.record_arraysize];
    record_arraysize = other.record_arraysize;
    for (unsigned int i=0; i<record_arraysize; i++)
        this->record_var[i] = other.record_var[i];
    return *this;
}

void DHTdumpResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    b->pack(record_arraysize);
    doPacking(b,this->record_var,record_arraysize);
}

void DHTdumpResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    delete [] this->record_var;
    b->unpack(record_arraysize);
    if (record_arraysize==0) {
        this->record_var = 0;
    } else {
        this->record_var = new DhtDumpEntry[record_arraysize];
        doUnpacking(b,this->record_var,record_arraysize);
    }
}

void DHTdumpResponse::setRecordArraySize(unsigned int size)
{
    DhtDumpEntry *record_var2 = (size==0) ? NULL : new DhtDumpEntry[size];
    unsigned int sz = record_arraysize < size ? record_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        record_var2[i] = this->record_var[i];
    record_arraysize = size;
    delete [] this->record_var;
    this->record_var = record_var2;
}

unsigned int DHTdumpResponse::getRecordArraySize() const
{
    return record_arraysize;
}

DhtDumpEntry& DHTdumpResponse::getRecord(unsigned int k)
{
    if (k>=record_arraysize) throw cRuntimeError("Array of size %d indexed by %d", record_arraysize, k);
    return record_var[k];
}

void DHTdumpResponse::setRecord(unsigned int k, const DhtDumpEntry& record_var)
{
    if (k>=record_arraysize) throw cRuntimeError("Array of size %d indexed by %d", record_arraysize, k);
    this->record_var[k]=record_var;
}

class DHTdumpResponseDescriptor : public cClassDescriptor
{
  public:
    DHTdumpResponseDescriptor();
    virtual ~DHTdumpResponseDescriptor();

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

Register_ClassDescriptor(DHTdumpResponseDescriptor);

DHTdumpResponseDescriptor::DHTdumpResponseDescriptor() : cClassDescriptor("DHTdumpResponse", "BaseResponseMessage")
{
}

DHTdumpResponseDescriptor::~DHTdumpResponseDescriptor()
{
}

bool DHTdumpResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHTdumpResponse *>(obj)!=NULL;
}

const char *DHTdumpResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHTdumpResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int DHTdumpResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DHTdumpResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "record";
        default: return NULL;
    }
}

const char *DHTdumpResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "DhtDumpEntry";
        default: return NULL;
    }
}

const char *DHTdumpResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DHTdumpResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHTdumpResponse *pp = (DHTdumpResponse *)object; (void)pp;
    switch (field) {
        case 0: return pp->getRecordArraySize();
        default: return 0;
    }
}

bool DHTdumpResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    DHTdumpResponse *pp = (DHTdumpResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRecord(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool DHTdumpResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHTdumpResponse *pp = (DHTdumpResponse *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *DHTdumpResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "DhtDumpEntry"; break;
        default: return NULL;
    }
}

void *DHTdumpResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHTdumpResponse *pp = (DHTdumpResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getRecord(i)); break;
        default: return NULL;
    }
}

Register_Class(LookupCall);

LookupCall::LookupCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->numSiblings_var = 0;
    this->routingType_var = DEFAULT_ROUTING;
}

LookupCall::LookupCall(const LookupCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

LookupCall::~LookupCall()
{
}

LookupCall& LookupCall::operator=(const LookupCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->key_var = other.key_var;
    this->numSiblings_var = other.numSiblings_var;
    this->routingType_var = other.routingType_var;
    return *this;
}

void LookupCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->numSiblings_var);
    doPacking(b,this->routingType_var);
}

void LookupCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->numSiblings_var);
    doUnpacking(b,this->routingType_var);
}

OverlayKey& LookupCall::getKey()
{
    return key_var;
}

void LookupCall::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

int LookupCall::getNumSiblings() const
{
    return numSiblings_var;
}

void LookupCall::setNumSiblings(int numSiblings_var)
{
    this->numSiblings_var = numSiblings_var;
}

int LookupCall::getRoutingType() const
{
    return routingType_var;
}

void LookupCall::setRoutingType(int routingType_var)
{
    this->routingType_var = routingType_var;
}

class LookupCallDescriptor : public cClassDescriptor
{
  public:
    LookupCallDescriptor();
    virtual ~LookupCallDescriptor();

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

Register_ClassDescriptor(LookupCallDescriptor);

LookupCallDescriptor::LookupCallDescriptor() : cClassDescriptor("LookupCall", "BaseCallMessage")
{
}

LookupCallDescriptor::~LookupCallDescriptor()
{
}

bool LookupCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LookupCall *>(obj)!=NULL;
}

const char *LookupCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LookupCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int LookupCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *LookupCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "numSiblings";
        case 2: return "routingType";
        default: return NULL;
    }
}

const char *LookupCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "int";
        case 2: return "int";
        default: return NULL;
    }
}

const char *LookupCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "RoutingType";
            return NULL;
        default: return NULL;
    }
}

int LookupCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LookupCall *pp = (LookupCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool LookupCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    LookupCall *pp = (LookupCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getNumSiblings(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getRoutingType(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool LookupCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LookupCall *pp = (LookupCall *)object; (void)pp;
    switch (field) {
        case 1: pp->setNumSiblings(string2long(value)); return true;
        case 2: pp->setRoutingType(string2long(value)); return true;
        default: return false;
    }
}

const char *LookupCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        default: return NULL;
    }
}

void *LookupCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LookupCall *pp = (LookupCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        default: return NULL;
    }
}

Register_Class(LookupResponse);

LookupResponse::LookupResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->hopCount_var = 0;
    this->isValid_var = 0;
    siblings_arraysize = 0;
    this->siblings_var = 0;
}

LookupResponse::LookupResponse(const LookupResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    siblings_arraysize = 0;
    this->siblings_var = 0;
    operator=(other);
}

LookupResponse::~LookupResponse()
{
    delete [] siblings_var;
}

LookupResponse& LookupResponse::operator=(const LookupResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->key_var = other.key_var;
    this->hopCount_var = other.hopCount_var;
    this->isValid_var = other.isValid_var;
    delete [] this->siblings_var;
    this->siblings_var = (other.siblings_arraysize==0) ? NULL : new NodeHandle[other.siblings_arraysize];
    siblings_arraysize = other.siblings_arraysize;
    for (unsigned int i=0; i<siblings_arraysize; i++)
        this->siblings_var[i] = other.siblings_var[i];
    return *this;
}

void LookupResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->key_var);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->isValid_var);
    b->pack(siblings_arraysize);
    doPacking(b,this->siblings_var,siblings_arraysize);
}

void LookupResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->key_var);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->isValid_var);
    delete [] this->siblings_var;
    b->unpack(siblings_arraysize);
    if (siblings_arraysize==0) {
        this->siblings_var = 0;
    } else {
        this->siblings_var = new NodeHandle[siblings_arraysize];
        doUnpacking(b,this->siblings_var,siblings_arraysize);
    }
}

OverlayKey& LookupResponse::getKey()
{
    return key_var;
}

void LookupResponse::setKey(const OverlayKey& key_var)
{
    this->key_var = key_var;
}

int LookupResponse::getHopCount() const
{
    return hopCount_var;
}

void LookupResponse::setHopCount(int hopCount_var)
{
    this->hopCount_var = hopCount_var;
}

bool LookupResponse::getIsValid() const
{
    return isValid_var;
}

void LookupResponse::setIsValid(bool isValid_var)
{
    this->isValid_var = isValid_var;
}

void LookupResponse::setSiblingsArraySize(unsigned int size)
{
    NodeHandle *siblings_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = siblings_arraysize < size ? siblings_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        siblings_var2[i] = this->siblings_var[i];
    siblings_arraysize = size;
    delete [] this->siblings_var;
    this->siblings_var = siblings_var2;
}

unsigned int LookupResponse::getSiblingsArraySize() const
{
    return siblings_arraysize;
}

NodeHandle& LookupResponse::getSiblings(unsigned int k)
{
    if (k>=siblings_arraysize) throw cRuntimeError("Array of size %d indexed by %d", siblings_arraysize, k);
    return siblings_var[k];
}

void LookupResponse::setSiblings(unsigned int k, const NodeHandle& siblings_var)
{
    if (k>=siblings_arraysize) throw cRuntimeError("Array of size %d indexed by %d", siblings_arraysize, k);
    this->siblings_var[k]=siblings_var;
}

class LookupResponseDescriptor : public cClassDescriptor
{
  public:
    LookupResponseDescriptor();
    virtual ~LookupResponseDescriptor();

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

Register_ClassDescriptor(LookupResponseDescriptor);

LookupResponseDescriptor::LookupResponseDescriptor() : cClassDescriptor("LookupResponse", "BaseResponseMessage")
{
}

LookupResponseDescriptor::~LookupResponseDescriptor()
{
}

bool LookupResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LookupResponse *>(obj)!=NULL;
}

const char *LookupResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LookupResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int LookupResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 3: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *LookupResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "key";
        case 1: return "hopCount";
        case 2: return "isValid";
        case 3: return "siblings";
        default: return NULL;
    }
}

const char *LookupResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        case 1: return "int";
        case 2: return "bool";
        case 3: return "NodeHandle";
        default: return NULL;
    }
}

const char *LookupResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LookupResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LookupResponse *pp = (LookupResponse *)object; (void)pp;
    switch (field) {
        case 3: return pp->getSiblingsArraySize();
        default: return 0;
    }
}

bool LookupResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    LookupResponse *pp = (LookupResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getHopCount(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->getIsValid(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getSiblings(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool LookupResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LookupResponse *pp = (LookupResponse *)object; (void)pp;
    switch (field) {
        case 1: pp->setHopCount(string2long(value)); return true;
        case 2: pp->setIsValid(string2bool(value)); return true;
        default: return false;
    }
}

const char *LookupResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        case 3: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *LookupResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LookupResponse *pp = (LookupResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey()); break;
        case 3: return (void *)(&pp->getSiblings(i)); break;
        default: return NULL;
    }
}

Register_Class(P2pnsRegisterCall);

P2pnsRegisterCall::P2pnsRegisterCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->kind_var = 1;
    this->id_var = 1;
    this->ttl_var = 0;
}

P2pnsRegisterCall::P2pnsRegisterCall(const P2pnsRegisterCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

P2pnsRegisterCall::~P2pnsRegisterCall()
{
}

P2pnsRegisterCall& P2pnsRegisterCall::operator=(const P2pnsRegisterCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->p2pName_var = other.p2pName_var;
    this->kind_var = other.kind_var;
    this->id_var = other.id_var;
    this->address_var = other.address_var;
    this->ttl_var = other.ttl_var;
    return *this;
}

void P2pnsRegisterCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->p2pName_var);
    doPacking(b,this->kind_var);
    doPacking(b,this->id_var);
    doPacking(b,this->address_var);
    doPacking(b,this->ttl_var);
}

void P2pnsRegisterCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->p2pName_var);
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->ttl_var);
}

BinaryValue& P2pnsRegisterCall::getP2pName()
{
    return p2pName_var;
}

void P2pnsRegisterCall::setP2pName(const BinaryValue& p2pName_var)
{
    this->p2pName_var = p2pName_var;
}

uint32_t P2pnsRegisterCall::getKind() const
{
    return kind_var;
}

void P2pnsRegisterCall::setKind(uint32_t kind_var)
{
    this->kind_var = kind_var;
}

uint32_t P2pnsRegisterCall::getId() const
{
    return id_var;
}

void P2pnsRegisterCall::setId(uint32_t id_var)
{
    this->id_var = id_var;
}

BinaryValue& P2pnsRegisterCall::getAddress()
{
    return address_var;
}

void P2pnsRegisterCall::setAddress(const BinaryValue& address_var)
{
    this->address_var = address_var;
}

int P2pnsRegisterCall::getTtl() const
{
    return ttl_var;
}

void P2pnsRegisterCall::setTtl(int ttl_var)
{
    this->ttl_var = ttl_var;
}

class P2pnsRegisterCallDescriptor : public cClassDescriptor
{
  public:
    P2pnsRegisterCallDescriptor();
    virtual ~P2pnsRegisterCallDescriptor();

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

Register_ClassDescriptor(P2pnsRegisterCallDescriptor);

P2pnsRegisterCallDescriptor::P2pnsRegisterCallDescriptor() : cClassDescriptor("P2pnsRegisterCall", "BaseCallMessage")
{
}

P2pnsRegisterCallDescriptor::~P2pnsRegisterCallDescriptor()
{
}

bool P2pnsRegisterCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<P2pnsRegisterCall *>(obj)!=NULL;
}

const char *P2pnsRegisterCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int P2pnsRegisterCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int P2pnsRegisterCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *P2pnsRegisterCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "p2pName";
        case 1: return "kind";
        case 2: return "id";
        case 3: return "address";
        case 4: return "ttl";
        default: return NULL;
    }
}

const char *P2pnsRegisterCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue";
        case 1: return "uint32_t";
        case 2: return "uint32_t";
        case 3: return "BinaryValue";
        case 4: return "int";
        default: return NULL;
    }
}

const char *P2pnsRegisterCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int P2pnsRegisterCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsRegisterCall *pp = (P2pnsRegisterCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool P2pnsRegisterCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsRegisterCall *pp = (P2pnsRegisterCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getP2pName(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getKind(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getId(),resultbuf,bufsize); return true;
        case 3: {std::stringstream out; out << pp->getAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 4: long2string(pp->getTtl(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool P2pnsRegisterCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsRegisterCall *pp = (P2pnsRegisterCall *)object; (void)pp;
    switch (field) {
        case 1: pp->setKind(string2ulong(value)); return true;
        case 2: pp->setId(string2ulong(value)); return true;
        case 4: pp->setTtl(string2long(value)); return true;
        default: return false;
    }
}

const char *P2pnsRegisterCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue"; break;
        case 3: return "BinaryValue"; break;
        default: return NULL;
    }
}

void *P2pnsRegisterCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsRegisterCall *pp = (P2pnsRegisterCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getP2pName()); break;
        case 3: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}

Register_Class(P2pnsRegisterResponse);

P2pnsRegisterResponse::P2pnsRegisterResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    this->isSuccess_var = 0;
}

P2pnsRegisterResponse::P2pnsRegisterResponse(const P2pnsRegisterResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    operator=(other);
}

P2pnsRegisterResponse::~P2pnsRegisterResponse()
{
}

P2pnsRegisterResponse& P2pnsRegisterResponse::operator=(const P2pnsRegisterResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->p2pName_var = other.p2pName_var;
    this->address_var = other.address_var;
    this->isSuccess_var = other.isSuccess_var;
    return *this;
}

void P2pnsRegisterResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->p2pName_var);
    doPacking(b,this->address_var);
    doPacking(b,this->isSuccess_var);
}

void P2pnsRegisterResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->p2pName_var);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->isSuccess_var);
}

BinaryValue& P2pnsRegisterResponse::getP2pName()
{
    return p2pName_var;
}

void P2pnsRegisterResponse::setP2pName(const BinaryValue& p2pName_var)
{
    this->p2pName_var = p2pName_var;
}

BinaryValue& P2pnsRegisterResponse::getAddress()
{
    return address_var;
}

void P2pnsRegisterResponse::setAddress(const BinaryValue& address_var)
{
    this->address_var = address_var;
}

bool P2pnsRegisterResponse::getIsSuccess() const
{
    return isSuccess_var;
}

void P2pnsRegisterResponse::setIsSuccess(bool isSuccess_var)
{
    this->isSuccess_var = isSuccess_var;
}

class P2pnsRegisterResponseDescriptor : public cClassDescriptor
{
  public:
    P2pnsRegisterResponseDescriptor();
    virtual ~P2pnsRegisterResponseDescriptor();

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

Register_ClassDescriptor(P2pnsRegisterResponseDescriptor);

P2pnsRegisterResponseDescriptor::P2pnsRegisterResponseDescriptor() : cClassDescriptor("P2pnsRegisterResponse", "BaseResponseMessage")
{
}

P2pnsRegisterResponseDescriptor::~P2pnsRegisterResponseDescriptor()
{
}

bool P2pnsRegisterResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<P2pnsRegisterResponse *>(obj)!=NULL;
}

const char *P2pnsRegisterResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int P2pnsRegisterResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int P2pnsRegisterResponseDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *P2pnsRegisterResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "p2pName";
        case 1: return "address";
        case 2: return "isSuccess";
        default: return NULL;
    }
}

const char *P2pnsRegisterResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue";
        case 1: return "BinaryValue";
        case 2: return "bool";
        default: return NULL;
    }
}

const char *P2pnsRegisterResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int P2pnsRegisterResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsRegisterResponse *pp = (P2pnsRegisterResponse *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool P2pnsRegisterResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsRegisterResponse *pp = (P2pnsRegisterResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getP2pName(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getAddress(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: bool2string(pp->getIsSuccess(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool P2pnsRegisterResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsRegisterResponse *pp = (P2pnsRegisterResponse *)object; (void)pp;
    switch (field) {
        case 2: pp->setIsSuccess(string2bool(value)); return true;
        default: return false;
    }
}

const char *P2pnsRegisterResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue"; break;
        case 1: return "BinaryValue"; break;
        default: return NULL;
    }
}

void *P2pnsRegisterResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsRegisterResponse *pp = (P2pnsRegisterResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getP2pName()); break;
        case 1: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}

Register_Class(P2pnsResolveCall);

P2pnsResolveCall::P2pnsResolveCall(const char *name, int kind) : BaseCallMessage(name,kind)
{
    this->kind_var = 1;
    this->id_var = 1;
}

P2pnsResolveCall::P2pnsResolveCall(const P2pnsResolveCall& other) : BaseCallMessage()
{
    setName(other.getName());
    operator=(other);
}

P2pnsResolveCall::~P2pnsResolveCall()
{
}

P2pnsResolveCall& P2pnsResolveCall::operator=(const P2pnsResolveCall& other)
{
    if (this==&other) return *this;
    BaseCallMessage::operator=(other);
    this->p2pName_var = other.p2pName_var;
    this->kind_var = other.kind_var;
    this->id_var = other.id_var;
    return *this;
}

void P2pnsResolveCall::parsimPack(cCommBuffer *b)
{
    BaseCallMessage::parsimPack(b);
    doPacking(b,this->p2pName_var);
    doPacking(b,this->kind_var);
    doPacking(b,this->id_var);
}

void P2pnsResolveCall::parsimUnpack(cCommBuffer *b)
{
    BaseCallMessage::parsimUnpack(b);
    doUnpacking(b,this->p2pName_var);
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->id_var);
}

BinaryValue& P2pnsResolveCall::getP2pName()
{
    return p2pName_var;
}

void P2pnsResolveCall::setP2pName(const BinaryValue& p2pName_var)
{
    this->p2pName_var = p2pName_var;
}

uint32_t P2pnsResolveCall::getKind() const
{
    return kind_var;
}

void P2pnsResolveCall::setKind(uint32_t kind_var)
{
    this->kind_var = kind_var;
}

uint32_t P2pnsResolveCall::getId() const
{
    return id_var;
}

void P2pnsResolveCall::setId(uint32_t id_var)
{
    this->id_var = id_var;
}

class P2pnsResolveCallDescriptor : public cClassDescriptor
{
  public:
    P2pnsResolveCallDescriptor();
    virtual ~P2pnsResolveCallDescriptor();

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

Register_ClassDescriptor(P2pnsResolveCallDescriptor);

P2pnsResolveCallDescriptor::P2pnsResolveCallDescriptor() : cClassDescriptor("P2pnsResolveCall", "BaseCallMessage")
{
}

P2pnsResolveCallDescriptor::~P2pnsResolveCallDescriptor()
{
}

bool P2pnsResolveCallDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<P2pnsResolveCall *>(obj)!=NULL;
}

const char *P2pnsResolveCallDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int P2pnsResolveCallDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int P2pnsResolveCallDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *P2pnsResolveCallDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "p2pName";
        case 1: return "kind";
        case 2: return "id";
        default: return NULL;
    }
}

const char *P2pnsResolveCallDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue";
        case 1: return "uint32_t";
        case 2: return "uint32_t";
        default: return NULL;
    }
}

const char *P2pnsResolveCallDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int P2pnsResolveCallDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsResolveCall *pp = (P2pnsResolveCall *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool P2pnsResolveCallDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsResolveCall *pp = (P2pnsResolveCall *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getP2pName(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: ulong2string(pp->getKind(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getId(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool P2pnsResolveCallDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsResolveCall *pp = (P2pnsResolveCall *)object; (void)pp;
    switch (field) {
        case 1: pp->setKind(string2ulong(value)); return true;
        case 2: pp->setId(string2ulong(value)); return true;
        default: return false;
    }
}

const char *P2pnsResolveCallDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue"; break;
        default: return NULL;
    }
}

void *P2pnsResolveCallDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsResolveCall *pp = (P2pnsResolveCall *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getP2pName()); break;
        default: return NULL;
    }
}

Register_Class(P2pnsResolveResponse);

P2pnsResolveResponse::P2pnsResolveResponse(const char *name, int kind) : BaseResponseMessage(name,kind)
{
    address_arraysize = 0;
    this->address_var = 0;
    kind_arraysize = 0;
    this->kind_var = 0;
    id_arraysize = 0;
    this->id_var = 0;
    this->isSuccess_var = 0;
}

P2pnsResolveResponse::P2pnsResolveResponse(const P2pnsResolveResponse& other) : BaseResponseMessage()
{
    setName(other.getName());
    address_arraysize = 0;
    this->address_var = 0;
    kind_arraysize = 0;
    this->kind_var = 0;
    id_arraysize = 0;
    this->id_var = 0;
    operator=(other);
}

P2pnsResolveResponse::~P2pnsResolveResponse()
{
    delete [] address_var;
    delete [] kind_var;
    delete [] id_var;
}

P2pnsResolveResponse& P2pnsResolveResponse::operator=(const P2pnsResolveResponse& other)
{
    if (this==&other) return *this;
    BaseResponseMessage::operator=(other);
    this->p2pName_var = other.p2pName_var;
    delete [] this->address_var;
    this->address_var = (other.address_arraysize==0) ? NULL : new BinaryValue[other.address_arraysize];
    address_arraysize = other.address_arraysize;
    for (unsigned int i=0; i<address_arraysize; i++)
        this->address_var[i] = other.address_var[i];
    delete [] this->kind_var;
    this->kind_var = (other.kind_arraysize==0) ? NULL : new uint32_t[other.kind_arraysize];
    kind_arraysize = other.kind_arraysize;
    for (unsigned int i=0; i<kind_arraysize; i++)
        this->kind_var[i] = other.kind_var[i];
    delete [] this->id_var;
    this->id_var = (other.id_arraysize==0) ? NULL : new uint32_t[other.id_arraysize];
    id_arraysize = other.id_arraysize;
    for (unsigned int i=0; i<id_arraysize; i++)
        this->id_var[i] = other.id_var[i];
    this->isSuccess_var = other.isSuccess_var;
    return *this;
}

void P2pnsResolveResponse::parsimPack(cCommBuffer *b)
{
    BaseResponseMessage::parsimPack(b);
    doPacking(b,this->p2pName_var);
    b->pack(address_arraysize);
    doPacking(b,this->address_var,address_arraysize);
    b->pack(kind_arraysize);
    doPacking(b,this->kind_var,kind_arraysize);
    b->pack(id_arraysize);
    doPacking(b,this->id_var,id_arraysize);
    doPacking(b,this->isSuccess_var);
}

void P2pnsResolveResponse::parsimUnpack(cCommBuffer *b)
{
    BaseResponseMessage::parsimUnpack(b);
    doUnpacking(b,this->p2pName_var);
    delete [] this->address_var;
    b->unpack(address_arraysize);
    if (address_arraysize==0) {
        this->address_var = 0;
    } else {
        this->address_var = new BinaryValue[address_arraysize];
        doUnpacking(b,this->address_var,address_arraysize);
    }
    delete [] this->kind_var;
    b->unpack(kind_arraysize);
    if (kind_arraysize==0) {
        this->kind_var = 0;
    } else {
        this->kind_var = new uint32_t[kind_arraysize];
        doUnpacking(b,this->kind_var,kind_arraysize);
    }
    delete [] this->id_var;
    b->unpack(id_arraysize);
    if (id_arraysize==0) {
        this->id_var = 0;
    } else {
        this->id_var = new uint32_t[id_arraysize];
        doUnpacking(b,this->id_var,id_arraysize);
    }
    doUnpacking(b,this->isSuccess_var);
}

BinaryValue& P2pnsResolveResponse::getP2pName()
{
    return p2pName_var;
}

void P2pnsResolveResponse::setP2pName(const BinaryValue& p2pName_var)
{
    this->p2pName_var = p2pName_var;
}

void P2pnsResolveResponse::setAddressArraySize(unsigned int size)
{
    BinaryValue *address_var2 = (size==0) ? NULL : new BinaryValue[size];
    unsigned int sz = address_arraysize < size ? address_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        address_var2[i] = this->address_var[i];
    address_arraysize = size;
    delete [] this->address_var;
    this->address_var = address_var2;
}

unsigned int P2pnsResolveResponse::getAddressArraySize() const
{
    return address_arraysize;
}

BinaryValue& P2pnsResolveResponse::getAddress(unsigned int k)
{
    if (k>=address_arraysize) throw cRuntimeError("Array of size %d indexed by %d", address_arraysize, k);
    return address_var[k];
}

void P2pnsResolveResponse::setAddress(unsigned int k, const BinaryValue& address_var)
{
    if (k>=address_arraysize) throw cRuntimeError("Array of size %d indexed by %d", address_arraysize, k);
    this->address_var[k]=address_var;
}

void P2pnsResolveResponse::setKindArraySize(unsigned int size)
{
    uint32_t *kind_var2 = (size==0) ? NULL : new uint32_t[size];
    unsigned int sz = kind_arraysize < size ? kind_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        kind_var2[i] = this->kind_var[i];
    for (unsigned int i=sz; i<size; i++)
        kind_var2[i] = 0;
    kind_arraysize = size;
    delete [] this->kind_var;
    this->kind_var = kind_var2;
}

unsigned int P2pnsResolveResponse::getKindArraySize() const
{
    return kind_arraysize;
}

uint32_t P2pnsResolveResponse::getKind(unsigned int k) const
{
    if (k>=kind_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kind_arraysize, k);
    return kind_var[k];
}

void P2pnsResolveResponse::setKind(unsigned int k, uint32_t kind_var)
{
    if (k>=kind_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kind_arraysize, k);
    this->kind_var[k]=kind_var;
}

void P2pnsResolveResponse::setIdArraySize(unsigned int size)
{
    uint32_t *id_var2 = (size==0) ? NULL : new uint32_t[size];
    unsigned int sz = id_arraysize < size ? id_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        id_var2[i] = this->id_var[i];
    for (unsigned int i=sz; i<size; i++)
        id_var2[i] = 0;
    id_arraysize = size;
    delete [] this->id_var;
    this->id_var = id_var2;
}

unsigned int P2pnsResolveResponse::getIdArraySize() const
{
    return id_arraysize;
}

uint32_t P2pnsResolveResponse::getId(unsigned int k) const
{
    if (k>=id_arraysize) throw cRuntimeError("Array of size %d indexed by %d", id_arraysize, k);
    return id_var[k];
}

void P2pnsResolveResponse::setId(unsigned int k, uint32_t id_var)
{
    if (k>=id_arraysize) throw cRuntimeError("Array of size %d indexed by %d", id_arraysize, k);
    this->id_var[k]=id_var;
}

bool P2pnsResolveResponse::getIsSuccess() const
{
    return isSuccess_var;
}

void P2pnsResolveResponse::setIsSuccess(bool isSuccess_var)
{
    this->isSuccess_var = isSuccess_var;
}

class P2pnsResolveResponseDescriptor : public cClassDescriptor
{
  public:
    P2pnsResolveResponseDescriptor();
    virtual ~P2pnsResolveResponseDescriptor();

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

Register_ClassDescriptor(P2pnsResolveResponseDescriptor);

P2pnsResolveResponseDescriptor::P2pnsResolveResponseDescriptor() : cClassDescriptor("P2pnsResolveResponse", "BaseResponseMessage")
{
}

P2pnsResolveResponseDescriptor::~P2pnsResolveResponseDescriptor()
{
}

bool P2pnsResolveResponseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<P2pnsResolveResponse *>(obj)!=NULL;
}

const char *P2pnsResolveResponseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int P2pnsResolveResponseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int P2pnsResolveResponseDescriptor::getFieldTypeFlags(void *object, int field) const
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
        case 2: return FD_ISARRAY | FD_ISEDITABLE;
        case 3: return FD_ISARRAY | FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *P2pnsResolveResponseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "p2pName";
        case 1: return "address";
        case 2: return "kind";
        case 3: return "id";
        case 4: return "isSuccess";
        default: return NULL;
    }
}

const char *P2pnsResolveResponseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue";
        case 1: return "BinaryValue";
        case 2: return "uint32_t";
        case 3: return "uint32_t";
        case 4: return "bool";
        default: return NULL;
    }
}

const char *P2pnsResolveResponseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int P2pnsResolveResponseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsResolveResponse *pp = (P2pnsResolveResponse *)object; (void)pp;
    switch (field) {
        case 1: return pp->getAddressArraySize();
        case 2: return pp->getKindArraySize();
        case 3: return pp->getIdArraySize();
        default: return 0;
    }
}

bool P2pnsResolveResponseDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsResolveResponse *pp = (P2pnsResolveResponse *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getP2pName(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getAddress(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: ulong2string(pp->getKind(i),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getId(i),resultbuf,bufsize); return true;
        case 4: bool2string(pp->getIsSuccess(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool P2pnsResolveResponseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsResolveResponse *pp = (P2pnsResolveResponse *)object; (void)pp;
    switch (field) {
        case 2: pp->setKind(i,string2ulong(value)); return true;
        case 3: pp->setId(i,string2ulong(value)); return true;
        case 4: pp->setIsSuccess(string2bool(value)); return true;
        default: return false;
    }
}

const char *P2pnsResolveResponseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "BinaryValue"; break;
        case 1: return "BinaryValue"; break;
        default: return NULL;
    }
}

void *P2pnsResolveResponseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    P2pnsResolveResponse *pp = (P2pnsResolveResponse *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getP2pName()); break;
        case 1: return (void *)(&pp->getAddress(i)); break;
        default: return NULL;
    }
}

Register_Class(OverlayCtrlInfo);

OverlayCtrlInfo::OverlayCtrlInfo() : cObject()
{
    this->hopCount_var = 0;
    visitedHops_arraysize = 0;
    this->visitedHops_var = 0;
    this->srcComp_var = 0;
    this->destComp_var = 0;
    this->transportType_var = INVALID_TRANSPORT;
    this->routingType_var = 0;
}

OverlayCtrlInfo::OverlayCtrlInfo(const OverlayCtrlInfo& other) : cObject()
{
    visitedHops_arraysize = 0;
    this->visitedHops_var = 0;
    operator=(other);
}

OverlayCtrlInfo::~OverlayCtrlInfo()
{
    delete [] visitedHops_var;
}

OverlayCtrlInfo& OverlayCtrlInfo::operator=(const OverlayCtrlInfo& other)
{
    if (this==&other) return *this;
    cObject::operator=(other);
    this->lastHop_var = other.lastHop_var;
    this->srcNode_var = other.srcNode_var;
    this->srcRoute_var = other.srcRoute_var;
    this->hopCount_var = other.hopCount_var;
    delete [] this->visitedHops_var;
    this->visitedHops_var = (other.visitedHops_arraysize==0) ? NULL : new TransportAddress[other.visitedHops_arraysize];
    visitedHops_arraysize = other.visitedHops_arraysize;
    for (unsigned int i=0; i<visitedHops_arraysize; i++)
        this->visitedHops_var[i] = other.visitedHops_var[i];
    this->srcComp_var = other.srcComp_var;
    this->destComp_var = other.destComp_var;
    this->transportType_var = other.transportType_var;
    this->routingType_var = other.routingType_var;
    return *this;
}

void OverlayCtrlInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->lastHop_var);
    doPacking(b,this->srcNode_var);
    doPacking(b,this->srcRoute_var);
    doPacking(b,this->hopCount_var);
    b->pack(visitedHops_arraysize);
    doPacking(b,this->visitedHops_var,visitedHops_arraysize);
    doPacking(b,this->srcComp_var);
    doPacking(b,this->destComp_var);
    doPacking(b,this->transportType_var);
    doPacking(b,this->routingType_var);
}

void OverlayCtrlInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->lastHop_var);
    doUnpacking(b,this->srcNode_var);
    doUnpacking(b,this->srcRoute_var);
    doUnpacking(b,this->hopCount_var);
    delete [] this->visitedHops_var;
    b->unpack(visitedHops_arraysize);
    if (visitedHops_arraysize==0) {
        this->visitedHops_var = 0;
    } else {
        this->visitedHops_var = new TransportAddress[visitedHops_arraysize];
        doUnpacking(b,this->visitedHops_var,visitedHops_arraysize);
    }
    doUnpacking(b,this->srcComp_var);
    doUnpacking(b,this->destComp_var);
    doUnpacking(b,this->transportType_var);
    doUnpacking(b,this->routingType_var);
}

TransportAddress& OverlayCtrlInfo::getLastHop()
{
    return lastHop_var;
}

void OverlayCtrlInfo::setLastHop(const TransportAddress& lastHop_var)
{
    this->lastHop_var = lastHop_var;
}

NodeHandle& OverlayCtrlInfo::getSrcNode()
{
    return srcNode_var;
}

void OverlayCtrlInfo::setSrcNode(const NodeHandle& srcNode_var)
{
    this->srcNode_var = srcNode_var;
}

NodeHandle& OverlayCtrlInfo::getSrcRoute()
{
    return srcRoute_var;
}

void OverlayCtrlInfo::setSrcRoute(const NodeHandle& srcRoute_var)
{
    this->srcRoute_var = srcRoute_var;
}

int OverlayCtrlInfo::getHopCount() const
{
    return hopCount_var;
}

void OverlayCtrlInfo::setHopCount(int hopCount_var)
{
    this->hopCount_var = hopCount_var;
}

void OverlayCtrlInfo::setVisitedHopsArraySize(unsigned int size)
{
    TransportAddress *visitedHops_var2 = (size==0) ? NULL : new TransportAddress[size];
    unsigned int sz = visitedHops_arraysize < size ? visitedHops_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        visitedHops_var2[i] = this->visitedHops_var[i];
    visitedHops_arraysize = size;
    delete [] this->visitedHops_var;
    this->visitedHops_var = visitedHops_var2;
}

unsigned int OverlayCtrlInfo::getVisitedHopsArraySize() const
{
    return visitedHops_arraysize;
}

TransportAddress& OverlayCtrlInfo::getVisitedHops(unsigned int k)
{
    if (k>=visitedHops_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visitedHops_arraysize, k);
    return visitedHops_var[k];
}

void OverlayCtrlInfo::setVisitedHops(unsigned int k, const TransportAddress& visitedHops_var)
{
    if (k>=visitedHops_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visitedHops_arraysize, k);
    this->visitedHops_var[k]=visitedHops_var;
}

int OverlayCtrlInfo::getSrcComp() const
{
    return srcComp_var;
}

void OverlayCtrlInfo::setSrcComp(int srcComp_var)
{
    this->srcComp_var = srcComp_var;
}

int OverlayCtrlInfo::getDestComp() const
{
    return destComp_var;
}

void OverlayCtrlInfo::setDestComp(int destComp_var)
{
    this->destComp_var = destComp_var;
}

int OverlayCtrlInfo::getTransportType() const
{
    return transportType_var;
}

void OverlayCtrlInfo::setTransportType(int transportType_var)
{
    this->transportType_var = transportType_var;
}

int OverlayCtrlInfo::getRoutingType() const
{
    return routingType_var;
}

void OverlayCtrlInfo::setRoutingType(int routingType_var)
{
    this->routingType_var = routingType_var;
}

class OverlayCtrlInfoDescriptor : public cClassDescriptor
{
  public:
    OverlayCtrlInfoDescriptor();
    virtual ~OverlayCtrlInfoDescriptor();

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

Register_ClassDescriptor(OverlayCtrlInfoDescriptor);

OverlayCtrlInfoDescriptor::OverlayCtrlInfoDescriptor() : cClassDescriptor("OverlayCtrlInfo", "cObject")
{
}

OverlayCtrlInfoDescriptor::~OverlayCtrlInfoDescriptor()
{
}

bool OverlayCtrlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OverlayCtrlInfo *>(obj)!=NULL;
}

const char *OverlayCtrlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OverlayCtrlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int OverlayCtrlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISCOMPOUND;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISARRAY | FD_ISCOMPOUND;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        case 8: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *OverlayCtrlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "lastHop";
        case 1: return "srcNode";
        case 2: return "srcRoute";
        case 3: return "hopCount";
        case 4: return "visitedHops";
        case 5: return "srcComp";
        case 6: return "destComp";
        case 7: return "transportType";
        case 8: return "routingType";
        default: return NULL;
    }
}

const char *OverlayCtrlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress";
        case 1: return "NodeHandle";
        case 2: return "NodeHandle";
        case 3: return "int";
        case 4: return "TransportAddress";
        case 5: return "int";
        case 6: return "int";
        case 7: return "int";
        case 8: return "int";
        default: return NULL;
    }
}

const char *OverlayCtrlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5:
            if (!strcmp(propertyname,"enum")) return "CompType";
            return NULL;
        case 6:
            if (!strcmp(propertyname,"enum")) return "CompType";
            return NULL;
        case 7:
            if (!strcmp(propertyname,"enum")) return "TransportType";
            return NULL;
        case 8:
            if (!strcmp(propertyname,"enum")) return "RoutingType";
            return NULL;
        default: return NULL;
    }
}

int OverlayCtrlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OverlayCtrlInfo *pp = (OverlayCtrlInfo *)object; (void)pp;
    switch (field) {
        case 4: return pp->getVisitedHopsArraySize();
        default: return 0;
    }
}

bool OverlayCtrlInfoDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    OverlayCtrlInfo *pp = (OverlayCtrlInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLastHop(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getSrcNode(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getSrcRoute(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: long2string(pp->getHopCount(),resultbuf,bufsize); return true;
        case 4: {std::stringstream out; out << pp->getVisitedHops(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 5: long2string(pp->getSrcComp(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getDestComp(),resultbuf,bufsize); return true;
        case 7: long2string(pp->getTransportType(),resultbuf,bufsize); return true;
        case 8: long2string(pp->getRoutingType(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool OverlayCtrlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OverlayCtrlInfo *pp = (OverlayCtrlInfo *)object; (void)pp;
    switch (field) {
        case 3: pp->setHopCount(string2long(value)); return true;
        case 5: pp->setSrcComp(string2long(value)); return true;
        case 6: pp->setDestComp(string2long(value)); return true;
        case 7: pp->setTransportType(string2long(value)); return true;
        case 8: pp->setRoutingType(string2long(value)); return true;
        default: return false;
    }
}

const char *OverlayCtrlInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "TransportAddress"; break;
        case 1: return "NodeHandle"; break;
        case 2: return "NodeHandle"; break;
        case 4: return "TransportAddress"; break;
        default: return NULL;
    }
}

void *OverlayCtrlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OverlayCtrlInfo *pp = (OverlayCtrlInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLastHop()); break;
        case 1: return (void *)(&pp->getSrcNode()); break;
        case 2: return (void *)(&pp->getSrcRoute()); break;
        case 4: return (void *)(&pp->getVisitedHops(i)); break;
        default: return NULL;
    }
}

Register_Class(ALMMessage);

ALMMessage::ALMMessage(const char *name, int kind) : cPacket(name,kind)
{
}

ALMMessage::ALMMessage(const ALMMessage& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

ALMMessage::~ALMMessage()
{
}

ALMMessage& ALMMessage::operator=(const ALMMessage& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->groupId_var = other.groupId_var;
    return *this;
}

void ALMMessage::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->groupId_var);
}

void ALMMessage::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->groupId_var);
}

OverlayKey& ALMMessage::getGroupId()
{
    return groupId_var;
}

void ALMMessage::setGroupId(const OverlayKey& groupId_var)
{
    this->groupId_var = groupId_var;
}

class ALMMessageDescriptor : public cClassDescriptor
{
  public:
    ALMMessageDescriptor();
    virtual ~ALMMessageDescriptor();

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

Register_ClassDescriptor(ALMMessageDescriptor);

ALMMessageDescriptor::ALMMessageDescriptor() : cClassDescriptor("ALMMessage", "cPacket")
{
}

ALMMessageDescriptor::~ALMMessageDescriptor()
{
}

bool ALMMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ALMMessage *>(obj)!=NULL;
}

const char *ALMMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ALMMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ALMMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *ALMMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "groupId";
        default: return NULL;
    }
}

const char *ALMMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey";
        default: return NULL;
    }
}

const char *ALMMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ALMMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ALMMessage *pp = (ALMMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ALMMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ALMMessage *pp = (ALMMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupId(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool ALMMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ALMMessage *pp = (ALMMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ALMMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "OverlayKey"; break;
        default: return NULL;
    }
}

void *ALMMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ALMMessage *pp = (ALMMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupId()); break;
        default: return NULL;
    }
}

Register_Class(ALMCreateMessage);

ALMCreateMessage::ALMCreateMessage(const char *name, int kind) : ALMMessage(name,kind)
{
}

ALMCreateMessage::ALMCreateMessage(const ALMCreateMessage& other) : ALMMessage()
{
    setName(other.getName());
    operator=(other);
}

ALMCreateMessage::~ALMCreateMessage()
{
}

ALMCreateMessage& ALMCreateMessage::operator=(const ALMCreateMessage& other)
{
    if (this==&other) return *this;
    ALMMessage::operator=(other);
    return *this;
}

void ALMCreateMessage::parsimPack(cCommBuffer *b)
{
    ALMMessage::parsimPack(b);
}

void ALMCreateMessage::parsimUnpack(cCommBuffer *b)
{
    ALMMessage::parsimUnpack(b);
}

class ALMCreateMessageDescriptor : public cClassDescriptor
{
  public:
    ALMCreateMessageDescriptor();
    virtual ~ALMCreateMessageDescriptor();

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

Register_ClassDescriptor(ALMCreateMessageDescriptor);

ALMCreateMessageDescriptor::ALMCreateMessageDescriptor() : cClassDescriptor("ALMCreateMessage", "ALMMessage")
{
}

ALMCreateMessageDescriptor::~ALMCreateMessageDescriptor()
{
}

bool ALMCreateMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ALMCreateMessage *>(obj)!=NULL;
}

const char *ALMCreateMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ALMCreateMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ALMCreateMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *ALMCreateMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMCreateMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMCreateMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ALMCreateMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ALMCreateMessage *pp = (ALMCreateMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ALMCreateMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ALMCreateMessage *pp = (ALMCreateMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool ALMCreateMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ALMCreateMessage *pp = (ALMCreateMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ALMCreateMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ALMCreateMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ALMCreateMessage *pp = (ALMCreateMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ALMDeleteMessage);

ALMDeleteMessage::ALMDeleteMessage(const char *name, int kind) : ALMMessage(name,kind)
{
}

ALMDeleteMessage::ALMDeleteMessage(const ALMDeleteMessage& other) : ALMMessage()
{
    setName(other.getName());
    operator=(other);
}

ALMDeleteMessage::~ALMDeleteMessage()
{
}

ALMDeleteMessage& ALMDeleteMessage::operator=(const ALMDeleteMessage& other)
{
    if (this==&other) return *this;
    ALMMessage::operator=(other);
    return *this;
}

void ALMDeleteMessage::parsimPack(cCommBuffer *b)
{
    ALMMessage::parsimPack(b);
}

void ALMDeleteMessage::parsimUnpack(cCommBuffer *b)
{
    ALMMessage::parsimUnpack(b);
}

class ALMDeleteMessageDescriptor : public cClassDescriptor
{
  public:
    ALMDeleteMessageDescriptor();
    virtual ~ALMDeleteMessageDescriptor();

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

Register_ClassDescriptor(ALMDeleteMessageDescriptor);

ALMDeleteMessageDescriptor::ALMDeleteMessageDescriptor() : cClassDescriptor("ALMDeleteMessage", "ALMMessage")
{
}

ALMDeleteMessageDescriptor::~ALMDeleteMessageDescriptor()
{
}

bool ALMDeleteMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ALMDeleteMessage *>(obj)!=NULL;
}

const char *ALMDeleteMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ALMDeleteMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ALMDeleteMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *ALMDeleteMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMDeleteMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMDeleteMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ALMDeleteMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ALMDeleteMessage *pp = (ALMDeleteMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ALMDeleteMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ALMDeleteMessage *pp = (ALMDeleteMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool ALMDeleteMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ALMDeleteMessage *pp = (ALMDeleteMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ALMDeleteMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ALMDeleteMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ALMDeleteMessage *pp = (ALMDeleteMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ALMSubscribeMessage);

ALMSubscribeMessage::ALMSubscribeMessage(const char *name, int kind) : ALMMessage(name,kind)
{
}

ALMSubscribeMessage::ALMSubscribeMessage(const ALMSubscribeMessage& other) : ALMMessage()
{
    setName(other.getName());
    operator=(other);
}

ALMSubscribeMessage::~ALMSubscribeMessage()
{
}

ALMSubscribeMessage& ALMSubscribeMessage::operator=(const ALMSubscribeMessage& other)
{
    if (this==&other) return *this;
    ALMMessage::operator=(other);
    return *this;
}

void ALMSubscribeMessage::parsimPack(cCommBuffer *b)
{
    ALMMessage::parsimPack(b);
}

void ALMSubscribeMessage::parsimUnpack(cCommBuffer *b)
{
    ALMMessage::parsimUnpack(b);
}

class ALMSubscribeMessageDescriptor : public cClassDescriptor
{
  public:
    ALMSubscribeMessageDescriptor();
    virtual ~ALMSubscribeMessageDescriptor();

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

Register_ClassDescriptor(ALMSubscribeMessageDescriptor);

ALMSubscribeMessageDescriptor::ALMSubscribeMessageDescriptor() : cClassDescriptor("ALMSubscribeMessage", "ALMMessage")
{
}

ALMSubscribeMessageDescriptor::~ALMSubscribeMessageDescriptor()
{
}

bool ALMSubscribeMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ALMSubscribeMessage *>(obj)!=NULL;
}

const char *ALMSubscribeMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ALMSubscribeMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ALMSubscribeMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *ALMSubscribeMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMSubscribeMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMSubscribeMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ALMSubscribeMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ALMSubscribeMessage *pp = (ALMSubscribeMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ALMSubscribeMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ALMSubscribeMessage *pp = (ALMSubscribeMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool ALMSubscribeMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ALMSubscribeMessage *pp = (ALMSubscribeMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ALMSubscribeMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ALMSubscribeMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ALMSubscribeMessage *pp = (ALMSubscribeMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ALMLeaveMessage);

ALMLeaveMessage::ALMLeaveMessage(const char *name, int kind) : ALMMessage(name,kind)
{
}

ALMLeaveMessage::ALMLeaveMessage(const ALMLeaveMessage& other) : ALMMessage()
{
    setName(other.getName());
    operator=(other);
}

ALMLeaveMessage::~ALMLeaveMessage()
{
}

ALMLeaveMessage& ALMLeaveMessage::operator=(const ALMLeaveMessage& other)
{
    if (this==&other) return *this;
    ALMMessage::operator=(other);
    return *this;
}

void ALMLeaveMessage::parsimPack(cCommBuffer *b)
{
    ALMMessage::parsimPack(b);
}

void ALMLeaveMessage::parsimUnpack(cCommBuffer *b)
{
    ALMMessage::parsimUnpack(b);
}

class ALMLeaveMessageDescriptor : public cClassDescriptor
{
  public:
    ALMLeaveMessageDescriptor();
    virtual ~ALMLeaveMessageDescriptor();

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

Register_ClassDescriptor(ALMLeaveMessageDescriptor);

ALMLeaveMessageDescriptor::ALMLeaveMessageDescriptor() : cClassDescriptor("ALMLeaveMessage", "ALMMessage")
{
}

ALMLeaveMessageDescriptor::~ALMLeaveMessageDescriptor()
{
}

bool ALMLeaveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ALMLeaveMessage *>(obj)!=NULL;
}

const char *ALMLeaveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ALMLeaveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ALMLeaveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *ALMLeaveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMLeaveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMLeaveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ALMLeaveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ALMLeaveMessage *pp = (ALMLeaveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ALMLeaveMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ALMLeaveMessage *pp = (ALMLeaveMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool ALMLeaveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ALMLeaveMessage *pp = (ALMLeaveMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ALMLeaveMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ALMLeaveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ALMLeaveMessage *pp = (ALMLeaveMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ALMMulticastMessage);

ALMMulticastMessage::ALMMulticastMessage(const char *name, int kind) : ALMMessage(name,kind)
{
}

ALMMulticastMessage::ALMMulticastMessage(const ALMMulticastMessage& other) : ALMMessage()
{
    setName(other.getName());
    operator=(other);
}

ALMMulticastMessage::~ALMMulticastMessage()
{
}

ALMMulticastMessage& ALMMulticastMessage::operator=(const ALMMulticastMessage& other)
{
    if (this==&other) return *this;
    ALMMessage::operator=(other);
    return *this;
}

void ALMMulticastMessage::parsimPack(cCommBuffer *b)
{
    ALMMessage::parsimPack(b);
}

void ALMMulticastMessage::parsimUnpack(cCommBuffer *b)
{
    ALMMessage::parsimUnpack(b);
}

class ALMMulticastMessageDescriptor : public cClassDescriptor
{
  public:
    ALMMulticastMessageDescriptor();
    virtual ~ALMMulticastMessageDescriptor();

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

Register_ClassDescriptor(ALMMulticastMessageDescriptor);

ALMMulticastMessageDescriptor::ALMMulticastMessageDescriptor() : cClassDescriptor("ALMMulticastMessage", "ALMMessage")
{
}

ALMMulticastMessageDescriptor::~ALMMulticastMessageDescriptor()
{
}

bool ALMMulticastMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ALMMulticastMessage *>(obj)!=NULL;
}

const char *ALMMulticastMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ALMMulticastMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ALMMulticastMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *ALMMulticastMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMMulticastMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMMulticastMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ALMMulticastMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ALMMulticastMessage *pp = (ALMMulticastMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ALMMulticastMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ALMMulticastMessage *pp = (ALMMulticastMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool ALMMulticastMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ALMMulticastMessage *pp = (ALMMulticastMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ALMMulticastMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ALMMulticastMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ALMMulticastMessage *pp = (ALMMulticastMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ALMAnycastMessage);

ALMAnycastMessage::ALMAnycastMessage(const char *name, int kind) : ALMMessage(name,kind)
{
}

ALMAnycastMessage::ALMAnycastMessage(const ALMAnycastMessage& other) : ALMMessage()
{
    setName(other.getName());
    operator=(other);
}

ALMAnycastMessage::~ALMAnycastMessage()
{
}

ALMAnycastMessage& ALMAnycastMessage::operator=(const ALMAnycastMessage& other)
{
    if (this==&other) return *this;
    ALMMessage::operator=(other);
    return *this;
}

void ALMAnycastMessage::parsimPack(cCommBuffer *b)
{
    ALMMessage::parsimPack(b);
}

void ALMAnycastMessage::parsimUnpack(cCommBuffer *b)
{
    ALMMessage::parsimUnpack(b);
}

class ALMAnycastMessageDescriptor : public cClassDescriptor
{
  public:
    ALMAnycastMessageDescriptor();
    virtual ~ALMAnycastMessageDescriptor();

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

Register_ClassDescriptor(ALMAnycastMessageDescriptor);

ALMAnycastMessageDescriptor::ALMAnycastMessageDescriptor() : cClassDescriptor("ALMAnycastMessage", "ALMMessage")
{
}

ALMAnycastMessageDescriptor::~ALMAnycastMessageDescriptor()
{
}

bool ALMAnycastMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ALMAnycastMessage *>(obj)!=NULL;
}

const char *ALMAnycastMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ALMAnycastMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int ALMAnycastMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *ALMAnycastMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMAnycastMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *ALMAnycastMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ALMAnycastMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ALMAnycastMessage *pp = (ALMAnycastMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool ALMAnycastMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    ALMAnycastMessage *pp = (ALMAnycastMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool ALMAnycastMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ALMAnycastMessage *pp = (ALMAnycastMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ALMAnycastMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ALMAnycastMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ALMAnycastMessage *pp = (ALMAnycastMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(GameAPIMessage);

GameAPIMessage::GameAPIMessage(const char *name, int kind) : BaseOverlayMessage(name,kind)
{
    this->command_var = 0;
}

GameAPIMessage::GameAPIMessage(const GameAPIMessage& other) : BaseOverlayMessage()
{
    setName(other.getName());
    operator=(other);
}

GameAPIMessage::~GameAPIMessage()
{
}

GameAPIMessage& GameAPIMessage::operator=(const GameAPIMessage& other)
{
    if (this==&other) return *this;
    BaseOverlayMessage::operator=(other);
    this->command_var = other.command_var;
    return *this;
}

void GameAPIMessage::parsimPack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimPack(b);
    doPacking(b,this->command_var);
}

void GameAPIMessage::parsimUnpack(cCommBuffer *b)
{
    BaseOverlayMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
}

int GameAPIMessage::getCommand() const
{
    return command_var;
}

void GameAPIMessage::setCommand(int command_var)
{
    this->command_var = command_var;
}

class GameAPIMessageDescriptor : public cClassDescriptor
{
  public:
    GameAPIMessageDescriptor();
    virtual ~GameAPIMessageDescriptor();

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

Register_ClassDescriptor(GameAPIMessageDescriptor);

GameAPIMessageDescriptor::GameAPIMessageDescriptor() : cClassDescriptor("GameAPIMessage", "BaseOverlayMessage")
{
}

GameAPIMessageDescriptor::~GameAPIMessageDescriptor()
{
}

bool GameAPIMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GameAPIMessage *>(obj)!=NULL;
}

const char *GameAPIMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GameAPIMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int GameAPIMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *GameAPIMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "command";
        default: return NULL;
    }
}

const char *GameAPIMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "int";
        default: return NULL;
    }
}

const char *GameAPIMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "GameAPIMessageCommand";
            return NULL;
        default: return NULL;
    }
}

int GameAPIMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIMessage *pp = (GameAPIMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool GameAPIMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIMessage *pp = (GameAPIMessage *)object; (void)pp;
    switch (field) {
        case 0: long2string(pp->getCommand(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool GameAPIMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIMessage *pp = (GameAPIMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *GameAPIMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *GameAPIMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIMessage *pp = (GameAPIMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(GameAPIListMessage);

GameAPIListMessage::GameAPIListMessage(const char *name, int kind) : GameAPIMessage(name,kind)
{
    removeNeighbor_arraysize = 0;
    this->removeNeighbor_var = 0;
    addNeighbor_arraysize = 0;
    this->addNeighbor_var = 0;
    neighborPosition_arraysize = 0;
    this->neighborPosition_var = 0;
}

GameAPIListMessage::GameAPIListMessage(const GameAPIListMessage& other) : GameAPIMessage()
{
    setName(other.getName());
    removeNeighbor_arraysize = 0;
    this->removeNeighbor_var = 0;
    addNeighbor_arraysize = 0;
    this->addNeighbor_var = 0;
    neighborPosition_arraysize = 0;
    this->neighborPosition_var = 0;
    operator=(other);
}

GameAPIListMessage::~GameAPIListMessage()
{
    delete [] removeNeighbor_var;
    delete [] addNeighbor_var;
    delete [] neighborPosition_var;
}

GameAPIListMessage& GameAPIListMessage::operator=(const GameAPIListMessage& other)
{
    if (this==&other) return *this;
    GameAPIMessage::operator=(other);
    delete [] this->removeNeighbor_var;
    this->removeNeighbor_var = (other.removeNeighbor_arraysize==0) ? NULL : new NodeHandle[other.removeNeighbor_arraysize];
    removeNeighbor_arraysize = other.removeNeighbor_arraysize;
    for (unsigned int i=0; i<removeNeighbor_arraysize; i++)
        this->removeNeighbor_var[i] = other.removeNeighbor_var[i];
    delete [] this->addNeighbor_var;
    this->addNeighbor_var = (other.addNeighbor_arraysize==0) ? NULL : new NodeHandle[other.addNeighbor_arraysize];
    addNeighbor_arraysize = other.addNeighbor_arraysize;
    for (unsigned int i=0; i<addNeighbor_arraysize; i++)
        this->addNeighbor_var[i] = other.addNeighbor_var[i];
    delete [] this->neighborPosition_var;
    this->neighborPosition_var = (other.neighborPosition_arraysize==0) ? NULL : new Vector2D[other.neighborPosition_arraysize];
    neighborPosition_arraysize = other.neighborPosition_arraysize;
    for (unsigned int i=0; i<neighborPosition_arraysize; i++)
        this->neighborPosition_var[i] = other.neighborPosition_var[i];
    return *this;
}

void GameAPIListMessage::parsimPack(cCommBuffer *b)
{
    GameAPIMessage::parsimPack(b);
    b->pack(removeNeighbor_arraysize);
    doPacking(b,this->removeNeighbor_var,removeNeighbor_arraysize);
    b->pack(addNeighbor_arraysize);
    doPacking(b,this->addNeighbor_var,addNeighbor_arraysize);
    b->pack(neighborPosition_arraysize);
    doPacking(b,this->neighborPosition_var,neighborPosition_arraysize);
}

void GameAPIListMessage::parsimUnpack(cCommBuffer *b)
{
    GameAPIMessage::parsimUnpack(b);
    delete [] this->removeNeighbor_var;
    b->unpack(removeNeighbor_arraysize);
    if (removeNeighbor_arraysize==0) {
        this->removeNeighbor_var = 0;
    } else {
        this->removeNeighbor_var = new NodeHandle[removeNeighbor_arraysize];
        doUnpacking(b,this->removeNeighbor_var,removeNeighbor_arraysize);
    }
    delete [] this->addNeighbor_var;
    b->unpack(addNeighbor_arraysize);
    if (addNeighbor_arraysize==0) {
        this->addNeighbor_var = 0;
    } else {
        this->addNeighbor_var = new NodeHandle[addNeighbor_arraysize];
        doUnpacking(b,this->addNeighbor_var,addNeighbor_arraysize);
    }
    delete [] this->neighborPosition_var;
    b->unpack(neighborPosition_arraysize);
    if (neighborPosition_arraysize==0) {
        this->neighborPosition_var = 0;
    } else {
        this->neighborPosition_var = new Vector2D[neighborPosition_arraysize];
        doUnpacking(b,this->neighborPosition_var,neighborPosition_arraysize);
    }
}

void GameAPIListMessage::setRemoveNeighborArraySize(unsigned int size)
{
    NodeHandle *removeNeighbor_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = removeNeighbor_arraysize < size ? removeNeighbor_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        removeNeighbor_var2[i] = this->removeNeighbor_var[i];
    removeNeighbor_arraysize = size;
    delete [] this->removeNeighbor_var;
    this->removeNeighbor_var = removeNeighbor_var2;
}

unsigned int GameAPIListMessage::getRemoveNeighborArraySize() const
{
    return removeNeighbor_arraysize;
}

NodeHandle& GameAPIListMessage::getRemoveNeighbor(unsigned int k)
{
    if (k>=removeNeighbor_arraysize) throw cRuntimeError("Array of size %d indexed by %d", removeNeighbor_arraysize, k);
    return removeNeighbor_var[k];
}

void GameAPIListMessage::setRemoveNeighbor(unsigned int k, const NodeHandle& removeNeighbor_var)
{
    if (k>=removeNeighbor_arraysize) throw cRuntimeError("Array of size %d indexed by %d", removeNeighbor_arraysize, k);
    this->removeNeighbor_var[k]=removeNeighbor_var;
}

void GameAPIListMessage::setAddNeighborArraySize(unsigned int size)
{
    NodeHandle *addNeighbor_var2 = (size==0) ? NULL : new NodeHandle[size];
    unsigned int sz = addNeighbor_arraysize < size ? addNeighbor_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        addNeighbor_var2[i] = this->addNeighbor_var[i];
    addNeighbor_arraysize = size;
    delete [] this->addNeighbor_var;
    this->addNeighbor_var = addNeighbor_var2;
}

unsigned int GameAPIListMessage::getAddNeighborArraySize() const
{
    return addNeighbor_arraysize;
}

NodeHandle& GameAPIListMessage::getAddNeighbor(unsigned int k)
{
    if (k>=addNeighbor_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addNeighbor_arraysize, k);
    return addNeighbor_var[k];
}

void GameAPIListMessage::setAddNeighbor(unsigned int k, const NodeHandle& addNeighbor_var)
{
    if (k>=addNeighbor_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addNeighbor_arraysize, k);
    this->addNeighbor_var[k]=addNeighbor_var;
}

void GameAPIListMessage::setNeighborPositionArraySize(unsigned int size)
{
    Vector2D *neighborPosition_var2 = (size==0) ? NULL : new Vector2D[size];
    unsigned int sz = neighborPosition_arraysize < size ? neighborPosition_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighborPosition_var2[i] = this->neighborPosition_var[i];
    neighborPosition_arraysize = size;
    delete [] this->neighborPosition_var;
    this->neighborPosition_var = neighborPosition_var2;
}

unsigned int GameAPIListMessage::getNeighborPositionArraySize() const
{
    return neighborPosition_arraysize;
}

Vector2D& GameAPIListMessage::getNeighborPosition(unsigned int k)
{
    if (k>=neighborPosition_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborPosition_arraysize, k);
    return neighborPosition_var[k];
}

void GameAPIListMessage::setNeighborPosition(unsigned int k, const Vector2D& neighborPosition_var)
{
    if (k>=neighborPosition_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighborPosition_arraysize, k);
    this->neighborPosition_var[k]=neighborPosition_var;
}

class GameAPIListMessageDescriptor : public cClassDescriptor
{
  public:
    GameAPIListMessageDescriptor();
    virtual ~GameAPIListMessageDescriptor();

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

Register_ClassDescriptor(GameAPIListMessageDescriptor);

GameAPIListMessageDescriptor::GameAPIListMessageDescriptor() : cClassDescriptor("GameAPIListMessage", "GameAPIMessage")
{
}

GameAPIListMessageDescriptor::~GameAPIListMessageDescriptor()
{
}

bool GameAPIListMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GameAPIListMessage *>(obj)!=NULL;
}

const char *GameAPIListMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GameAPIListMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int GameAPIListMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISARRAY | FD_ISCOMPOUND;
        case 1: return FD_ISARRAY | FD_ISCOMPOUND;
        case 2: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *GameAPIListMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "removeNeighbor";
        case 1: return "addNeighbor";
        case 2: return "neighborPosition";
        default: return NULL;
    }
}

const char *GameAPIListMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle";
        case 1: return "NodeHandle";
        case 2: return "Vector2D";
        default: return NULL;
    }
}

const char *GameAPIListMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GameAPIListMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIListMessage *pp = (GameAPIListMessage *)object; (void)pp;
    switch (field) {
        case 0: return pp->getRemoveNeighborArraySize();
        case 1: return pp->getAddNeighborArraySize();
        case 2: return pp->getNeighborPositionArraySize();
        default: return 0;
    }
}

bool GameAPIListMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIListMessage *pp = (GameAPIListMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoveNeighbor(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getAddNeighbor(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getNeighborPosition(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool GameAPIListMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIListMessage *pp = (GameAPIListMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GameAPIListMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle"; break;
        case 1: return "NodeHandle"; break;
        case 2: return "Vector2D"; break;
        default: return NULL;
    }
}

void *GameAPIListMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIListMessage *pp = (GameAPIListMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoveNeighbor(i)); break;
        case 1: return (void *)(&pp->getAddNeighbor(i)); break;
        case 2: return (void *)(&pp->getNeighborPosition(i)); break;
        default: return NULL;
    }
}

Register_Class(GameAPIPositionMessage);

GameAPIPositionMessage::GameAPIPositionMessage(const char *name, int kind) : GameAPIMessage(name,kind)
{
}

GameAPIPositionMessage::GameAPIPositionMessage(const GameAPIPositionMessage& other) : GameAPIMessage()
{
    setName(other.getName());
    operator=(other);
}

GameAPIPositionMessage::~GameAPIPositionMessage()
{
}

GameAPIPositionMessage& GameAPIPositionMessage::operator=(const GameAPIPositionMessage& other)
{
    if (this==&other) return *this;
    GameAPIMessage::operator=(other);
    this->position_var = other.position_var;
    return *this;
}

void GameAPIPositionMessage::parsimPack(cCommBuffer *b)
{
    GameAPIMessage::parsimPack(b);
    doPacking(b,this->position_var);
}

void GameAPIPositionMessage::parsimUnpack(cCommBuffer *b)
{
    GameAPIMessage::parsimUnpack(b);
    doUnpacking(b,this->position_var);
}

Vector2D& GameAPIPositionMessage::getPosition()
{
    return position_var;
}

void GameAPIPositionMessage::setPosition(const Vector2D& position_var)
{
    this->position_var = position_var;
}

class GameAPIPositionMessageDescriptor : public cClassDescriptor
{
  public:
    GameAPIPositionMessageDescriptor();
    virtual ~GameAPIPositionMessageDescriptor();

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

Register_ClassDescriptor(GameAPIPositionMessageDescriptor);

GameAPIPositionMessageDescriptor::GameAPIPositionMessageDescriptor() : cClassDescriptor("GameAPIPositionMessage", "GameAPIMessage")
{
}

GameAPIPositionMessageDescriptor::~GameAPIPositionMessageDescriptor()
{
}

bool GameAPIPositionMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GameAPIPositionMessage *>(obj)!=NULL;
}

const char *GameAPIPositionMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GameAPIPositionMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int GameAPIPositionMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *GameAPIPositionMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "position";
        default: return NULL;
    }
}

const char *GameAPIPositionMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Vector2D";
        default: return NULL;
    }
}

const char *GameAPIPositionMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GameAPIPositionMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIPositionMessage *pp = (GameAPIPositionMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool GameAPIPositionMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIPositionMessage *pp = (GameAPIPositionMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPosition(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool GameAPIPositionMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIPositionMessage *pp = (GameAPIPositionMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GameAPIPositionMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "Vector2D"; break;
        default: return NULL;
    }
}

void *GameAPIPositionMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIPositionMessage *pp = (GameAPIPositionMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(GameAPIResizeAOIMessage);

GameAPIResizeAOIMessage::GameAPIResizeAOIMessage(const char *name, int kind) : GameAPIMessage(name,kind)
{
    this->AOIsize_var = 0;
}

GameAPIResizeAOIMessage::GameAPIResizeAOIMessage(const GameAPIResizeAOIMessage& other) : GameAPIMessage()
{
    setName(other.getName());
    operator=(other);
}

GameAPIResizeAOIMessage::~GameAPIResizeAOIMessage()
{
}

GameAPIResizeAOIMessage& GameAPIResizeAOIMessage::operator=(const GameAPIResizeAOIMessage& other)
{
    if (this==&other) return *this;
    GameAPIMessage::operator=(other);
    this->AOIsize_var = other.AOIsize_var;
    return *this;
}

void GameAPIResizeAOIMessage::parsimPack(cCommBuffer *b)
{
    GameAPIMessage::parsimPack(b);
    doPacking(b,this->AOIsize_var);
}

void GameAPIResizeAOIMessage::parsimUnpack(cCommBuffer *b)
{
    GameAPIMessage::parsimUnpack(b);
    doUnpacking(b,this->AOIsize_var);
}

double GameAPIResizeAOIMessage::getAOIsize() const
{
    return AOIsize_var;
}

void GameAPIResizeAOIMessage::setAOIsize(double AOIsize_var)
{
    this->AOIsize_var = AOIsize_var;
}

class GameAPIResizeAOIMessageDescriptor : public cClassDescriptor
{
  public:
    GameAPIResizeAOIMessageDescriptor();
    virtual ~GameAPIResizeAOIMessageDescriptor();

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

Register_ClassDescriptor(GameAPIResizeAOIMessageDescriptor);

GameAPIResizeAOIMessageDescriptor::GameAPIResizeAOIMessageDescriptor() : cClassDescriptor("GameAPIResizeAOIMessage", "GameAPIMessage")
{
}

GameAPIResizeAOIMessageDescriptor::~GameAPIResizeAOIMessageDescriptor()
{
}

bool GameAPIResizeAOIMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GameAPIResizeAOIMessage *>(obj)!=NULL;
}

const char *GameAPIResizeAOIMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GameAPIResizeAOIMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int GameAPIResizeAOIMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *GameAPIResizeAOIMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "AOIsize";
        default: return NULL;
    }
}

const char *GameAPIResizeAOIMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "double";
        default: return NULL;
    }
}

const char *GameAPIResizeAOIMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GameAPIResizeAOIMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIResizeAOIMessage *pp = (GameAPIResizeAOIMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool GameAPIResizeAOIMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIResizeAOIMessage *pp = (GameAPIResizeAOIMessage *)object; (void)pp;
    switch (field) {
        case 0: double2string(pp->getAOIsize(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool GameAPIResizeAOIMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIResizeAOIMessage *pp = (GameAPIResizeAOIMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setAOIsize(string2double(value)); return true;
        default: return false;
    }
}

const char *GameAPIResizeAOIMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *GameAPIResizeAOIMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIResizeAOIMessage *pp = (GameAPIResizeAOIMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(GameAPIChatMessage);

GameAPIChatMessage::GameAPIChatMessage(const char *name, int kind) : GameAPIMessage(name,kind)
{
    this->msg_var = 0;
}

GameAPIChatMessage::GameAPIChatMessage(const GameAPIChatMessage& other) : GameAPIMessage()
{
    setName(other.getName());
    operator=(other);
}

GameAPIChatMessage::~GameAPIChatMessage()
{
}

GameAPIChatMessage& GameAPIChatMessage::operator=(const GameAPIChatMessage& other)
{
    if (this==&other) return *this;
    GameAPIMessage::operator=(other);
    this->src_var = other.src_var;
    this->msg_var = other.msg_var;
    return *this;
}

void GameAPIChatMessage::parsimPack(cCommBuffer *b)
{
    GameAPIMessage::parsimPack(b);
    doPacking(b,this->src_var);
    doPacking(b,this->msg_var);
}

void GameAPIChatMessage::parsimUnpack(cCommBuffer *b)
{
    GameAPIMessage::parsimUnpack(b);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->msg_var);
}

NodeHandle& GameAPIChatMessage::getSrc()
{
    return src_var;
}

void GameAPIChatMessage::setSrc(const NodeHandle& src_var)
{
    this->src_var = src_var;
}

const char * GameAPIChatMessage::getMsg() const
{
    return msg_var.c_str();
}

void GameAPIChatMessage::setMsg(const char * msg_var)
{
    this->msg_var = msg_var;
}

class GameAPIChatMessageDescriptor : public cClassDescriptor
{
  public:
    GameAPIChatMessageDescriptor();
    virtual ~GameAPIChatMessageDescriptor();

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

Register_ClassDescriptor(GameAPIChatMessageDescriptor);

GameAPIChatMessageDescriptor::GameAPIChatMessageDescriptor() : cClassDescriptor("GameAPIChatMessage", "GameAPIMessage")
{
}

GameAPIChatMessageDescriptor::~GameAPIChatMessageDescriptor()
{
}

bool GameAPIChatMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GameAPIChatMessage *>(obj)!=NULL;
}

const char *GameAPIChatMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GameAPIChatMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int GameAPIChatMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *GameAPIChatMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "src";
        case 1: return "msg";
        default: return NULL;
    }
}

const char *GameAPIChatMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle";
        case 1: return "string";
        default: return NULL;
    }
}

const char *GameAPIChatMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GameAPIChatMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIChatMessage *pp = (GameAPIChatMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool GameAPIChatMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIChatMessage *pp = (GameAPIChatMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: oppstring2string(pp->getMsg(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool GameAPIChatMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIChatMessage *pp = (GameAPIChatMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setMsg((value)); return true;
        default: return false;
    }
}

const char *GameAPIChatMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *GameAPIChatMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIChatMessage *pp = (GameAPIChatMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        default: return NULL;
    }
}

Register_Class(GameAPISnowMessage);

GameAPISnowMessage::GameAPISnowMessage(const char *name, int kind) : GameAPIMessage(name,kind)
{
    this->timeSec_var = 0;
    this->timeUsec_var = 0;
}

GameAPISnowMessage::GameAPISnowMessage(const GameAPISnowMessage& other) : GameAPIMessage()
{
    setName(other.getName());
    operator=(other);
}

GameAPISnowMessage::~GameAPISnowMessage()
{
}

GameAPISnowMessage& GameAPISnowMessage::operator=(const GameAPISnowMessage& other)
{
    if (this==&other) return *this;
    GameAPIMessage::operator=(other);
    this->src_var = other.src_var;
    this->start_var = other.start_var;
    this->end_var = other.end_var;
    this->timeSec_var = other.timeSec_var;
    this->timeUsec_var = other.timeUsec_var;
    return *this;
}

void GameAPISnowMessage::parsimPack(cCommBuffer *b)
{
    GameAPIMessage::parsimPack(b);
    doPacking(b,this->src_var);
    doPacking(b,this->start_var);
    doPacking(b,this->end_var);
    doPacking(b,this->timeSec_var);
    doPacking(b,this->timeUsec_var);
}

void GameAPISnowMessage::parsimUnpack(cCommBuffer *b)
{
    GameAPIMessage::parsimUnpack(b);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->start_var);
    doUnpacking(b,this->end_var);
    doUnpacking(b,this->timeSec_var);
    doUnpacking(b,this->timeUsec_var);
}

NodeHandle& GameAPISnowMessage::getSrc()
{
    return src_var;
}

void GameAPISnowMessage::setSrc(const NodeHandle& src_var)
{
    this->src_var = src_var;
}

Vector2D& GameAPISnowMessage::getStart()
{
    return start_var;
}

void GameAPISnowMessage::setStart(const Vector2D& start_var)
{
    this->start_var = start_var;
}

Vector2D& GameAPISnowMessage::getEnd()
{
    return end_var;
}

void GameAPISnowMessage::setEnd(const Vector2D& end_var)
{
    this->end_var = end_var;
}

int GameAPISnowMessage::getTimeSec() const
{
    return timeSec_var;
}

void GameAPISnowMessage::setTimeSec(int timeSec_var)
{
    this->timeSec_var = timeSec_var;
}

int GameAPISnowMessage::getTimeUsec() const
{
    return timeUsec_var;
}

void GameAPISnowMessage::setTimeUsec(int timeUsec_var)
{
    this->timeUsec_var = timeUsec_var;
}

class GameAPISnowMessageDescriptor : public cClassDescriptor
{
  public:
    GameAPISnowMessageDescriptor();
    virtual ~GameAPISnowMessageDescriptor();

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

Register_ClassDescriptor(GameAPISnowMessageDescriptor);

GameAPISnowMessageDescriptor::GameAPISnowMessageDescriptor() : cClassDescriptor("GameAPISnowMessage", "GameAPIMessage")
{
}

GameAPISnowMessageDescriptor::~GameAPISnowMessageDescriptor()
{
}

bool GameAPISnowMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GameAPISnowMessage *>(obj)!=NULL;
}

const char *GameAPISnowMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GameAPISnowMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int GameAPISnowMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISCOMPOUND;
        case 1: return FD_ISCOMPOUND;
        case 2: return FD_ISCOMPOUND;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *GameAPISnowMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "src";
        case 1: return "start";
        case 2: return "end";
        case 3: return "timeSec";
        case 4: return "timeUsec";
        default: return NULL;
    }
}

const char *GameAPISnowMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle";
        case 1: return "Vector2D";
        case 2: return "Vector2D";
        case 3: return "int";
        case 4: return "int";
        default: return NULL;
    }
}

const char *GameAPISnowMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GameAPISnowMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GameAPISnowMessage *pp = (GameAPISnowMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool GameAPISnowMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    GameAPISnowMessage *pp = (GameAPISnowMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: {std::stringstream out; out << pp->getStart(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 2: {std::stringstream out; out << pp->getEnd(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 3: long2string(pp->getTimeSec(),resultbuf,bufsize); return true;
        case 4: long2string(pp->getTimeUsec(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool GameAPISnowMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GameAPISnowMessage *pp = (GameAPISnowMessage *)object; (void)pp;
    switch (field) {
        case 3: pp->setTimeSec(string2long(value)); return true;
        case 4: pp->setTimeUsec(string2long(value)); return true;
        default: return false;
    }
}

const char *GameAPISnowMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle"; break;
        case 1: return "Vector2D"; break;
        case 2: return "Vector2D"; break;
        default: return NULL;
    }
}

void *GameAPISnowMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GameAPISnowMessage *pp = (GameAPISnowMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        case 1: return (void *)(&pp->getStart()); break;
        case 2: return (void *)(&pp->getEnd()); break;
        default: return NULL;
    }
}

Register_Class(GameAPIFrozenMessage);

GameAPIFrozenMessage::GameAPIFrozenMessage(const char *name, int kind) : GameAPIMessage(name,kind)
{
    this->thrower_var = 0;
    this->timeSec_var = 0;
    this->timeUsec_var = 0;
}

GameAPIFrozenMessage::GameAPIFrozenMessage(const GameAPIFrozenMessage& other) : GameAPIMessage()
{
    setName(other.getName());
    operator=(other);
}

GameAPIFrozenMessage::~GameAPIFrozenMessage()
{
}

GameAPIFrozenMessage& GameAPIFrozenMessage::operator=(const GameAPIFrozenMessage& other)
{
    if (this==&other) return *this;
    GameAPIMessage::operator=(other);
    this->src_var = other.src_var;
    this->thrower_var = other.thrower_var;
    this->timeSec_var = other.timeSec_var;
    this->timeUsec_var = other.timeUsec_var;
    return *this;
}

void GameAPIFrozenMessage::parsimPack(cCommBuffer *b)
{
    GameAPIMessage::parsimPack(b);
    doPacking(b,this->src_var);
    doPacking(b,this->thrower_var);
    doPacking(b,this->timeSec_var);
    doPacking(b,this->timeUsec_var);
}

void GameAPIFrozenMessage::parsimUnpack(cCommBuffer *b)
{
    GameAPIMessage::parsimUnpack(b);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->thrower_var);
    doUnpacking(b,this->timeSec_var);
    doUnpacking(b,this->timeUsec_var);
}

NodeHandle& GameAPIFrozenMessage::getSrc()
{
    return src_var;
}

void GameAPIFrozenMessage::setSrc(const NodeHandle& src_var)
{
    this->src_var = src_var;
}

int GameAPIFrozenMessage::getThrower() const
{
    return thrower_var;
}

void GameAPIFrozenMessage::setThrower(int thrower_var)
{
    this->thrower_var = thrower_var;
}

int GameAPIFrozenMessage::getTimeSec() const
{
    return timeSec_var;
}

void GameAPIFrozenMessage::setTimeSec(int timeSec_var)
{
    this->timeSec_var = timeSec_var;
}

int GameAPIFrozenMessage::getTimeUsec() const
{
    return timeUsec_var;
}

void GameAPIFrozenMessage::setTimeUsec(int timeUsec_var)
{
    this->timeUsec_var = timeUsec_var;
}

class GameAPIFrozenMessageDescriptor : public cClassDescriptor
{
  public:
    GameAPIFrozenMessageDescriptor();
    virtual ~GameAPIFrozenMessageDescriptor();

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

Register_ClassDescriptor(GameAPIFrozenMessageDescriptor);

GameAPIFrozenMessageDescriptor::GameAPIFrozenMessageDescriptor() : cClassDescriptor("GameAPIFrozenMessage", "GameAPIMessage")
{
}

GameAPIFrozenMessageDescriptor::~GameAPIFrozenMessageDescriptor()
{
}

bool GameAPIFrozenMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GameAPIFrozenMessage *>(obj)!=NULL;
}

const char *GameAPIFrozenMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GameAPIFrozenMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int GameAPIFrozenMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        default: return 0;
    }
}

const char *GameAPIFrozenMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "src";
        case 1: return "thrower";
        case 2: return "timeSec";
        case 3: return "timeUsec";
        default: return NULL;
    }
}

const char *GameAPIFrozenMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle";
        case 1: return "int";
        case 2: return "int";
        case 3: return "int";
        default: return NULL;
    }
}

const char *GameAPIFrozenMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GameAPIFrozenMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIFrozenMessage *pp = (GameAPIFrozenMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool GameAPIFrozenMessageDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIFrozenMessage *pp = (GameAPIFrozenMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        case 1: long2string(pp->getThrower(),resultbuf,bufsize); return true;
        case 2: long2string(pp->getTimeSec(),resultbuf,bufsize); return true;
        case 3: long2string(pp->getTimeUsec(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool GameAPIFrozenMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIFrozenMessage *pp = (GameAPIFrozenMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setThrower(string2long(value)); return true;
        case 2: pp->setTimeSec(string2long(value)); return true;
        case 3: pp->setTimeUsec(string2long(value)); return true;
        default: return false;
    }
}

const char *GameAPIFrozenMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "NodeHandle"; break;
        default: return NULL;
    }
}

void *GameAPIFrozenMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GameAPIFrozenMessage *pp = (GameAPIFrozenMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        default: return NULL;
    }
}


