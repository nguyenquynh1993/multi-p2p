//
// Generated file, do not edit! Created by opp_msgc 4.1 from applications/nicetestapp/NiceTestAppMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "NiceTestAppMsg_m.h"

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
    cEnum *e = cEnum::find("MessageType");
    if (!e) enums.getInstance()->add(e = new cEnum("MessageType"));
    e->insert(MYMSG_PING, "MYMSG_PING");
    e->insert(MYMSG_PONG, "MYMSG_PONG");
);

Register_Class(NiceTestAppMsg);

NiceTestAppMsg::NiceTestAppMsg(const char *name, int kind) : cPacket(name,kind)
{
    this->type_var = 0;
    this->data_var = 0;
    this->packetID_var = 0;
}

NiceTestAppMsg::NiceTestAppMsg(const NiceTestAppMsg& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

NiceTestAppMsg::~NiceTestAppMsg()
{
}

NiceTestAppMsg& NiceTestAppMsg::operator=(const NiceTestAppMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->type_var = other.type_var;
    this->senderAddress_var = other.senderAddress_var;
    this->data_var = other.data_var;
    this->packetID_var = other.packetID_var;
    return *this;
}

void NiceTestAppMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->senderAddress_var);
    doPacking(b,this->data_var);
    doPacking(b,this->packetID_var);
}

void NiceTestAppMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->senderAddress_var);
    doUnpacking(b,this->data_var);
    doUnpacking(b,this->packetID_var);
}

int NiceTestAppMsg::getType() const
{
    return type_var;
}

void NiceTestAppMsg::setType(int type_var)
{
    this->type_var = type_var;
}

TransportAddress& NiceTestAppMsg::getSenderAddress()
{
    return senderAddress_var;
}

void NiceTestAppMsg::setSenderAddress(const TransportAddress& senderAddress_var)
{
    this->senderAddress_var = senderAddress_var;
}

const char * NiceTestAppMsg::getData() const
{
    return data_var.c_str();
}

void NiceTestAppMsg::setData(const char * data_var)
{
    this->data_var = data_var;
}

int NiceTestAppMsg::getPacketID() const
{
    return packetID_var;
}

void NiceTestAppMsg::setPacketID(int packetID_var)
{
    this->packetID_var = packetID_var;
}

class NiceTestAppMsgDescriptor : public cClassDescriptor
{
  public:
    NiceTestAppMsgDescriptor();
    virtual ~NiceTestAppMsgDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(NiceTestAppMsgDescriptor);

NiceTestAppMsgDescriptor::NiceTestAppMsgDescriptor() : cClassDescriptor("NiceTestAppMsg", "cPacket")
{
}

NiceTestAppMsgDescriptor::~NiceTestAppMsgDescriptor()
{
}

bool NiceTestAppMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NiceTestAppMsg *>(obj)!=NULL;
}

const char *NiceTestAppMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NiceTestAppMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int NiceTestAppMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *NiceTestAppMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "senderAddress",
        "data",
        "packetID",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int NiceTestAppMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderAddress")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "data")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetID")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NiceTestAppMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "TransportAddress",
        "string",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *NiceTestAppMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NiceTestAppMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NiceTestAppMsg *pp = (NiceTestAppMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NiceTestAppMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NiceTestAppMsg *pp = (NiceTestAppMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: {std::stringstream out; out << pp->getSenderAddress(); return out.str();}
        case 2: return oppstring2string(pp->getData());
        case 3: return long2string(pp->getPacketID());
        default: return "";
    }
}

bool NiceTestAppMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NiceTestAppMsg *pp = (NiceTestAppMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 2: pp->setData((value)); return true;
        case 3: pp->setPacketID(string2long(value)); return true;
        default: return false;
    }
}

const char *NiceTestAppMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        "TransportAddress",
        NULL,
        NULL,
    };
    return (field>=0 && field<4) ? fieldStructNames[field] : NULL;
}

void *NiceTestAppMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NiceTestAppMsg *pp = (NiceTestAppMsg *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSenderAddress()); break;
        default: return NULL;
    }
}


