/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "ChatRedPacket_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace crp {


OperateException::~OperateException() throw() {
}


void OperateException::__set_errCode(const std::string& val) {
  this->errCode = val;
}

void OperateException::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t OperateException::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->errCode);
          this->__isset.errCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t OperateException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("OperateException");

  xfer += oprot->writeFieldBegin("errCode", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->errCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(OperateException &a, OperateException &b) {
  using ::std::swap;
  swap(a.errCode, b.errCode);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

OperateException::OperateException(const OperateException& other0) : TException() {
  errCode = other0.errCode;
  message = other0.message;
  __isset = other0.__isset;
}
OperateException& OperateException::operator=(const OperateException& other1) {
  errCode = other1.errCode;
  message = other1.message;
  __isset = other1.__isset;
  return *this;
}
void OperateException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "OperateException(";
  out << "errCode=" << to_string(errCode);
  out << ", " << "message=" << to_string(message);
  out << ")";
}

const char* OperateException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: OperateException";
  }
}


QueryException::~QueryException() throw() {
}


void QueryException::__set_errCode(const std::string& val) {
  this->errCode = val;
}

void QueryException::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t QueryException::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->errCode);
          this->__isset.errCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t QueryException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("QueryException");

  xfer += oprot->writeFieldBegin("errCode", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->errCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(QueryException &a, QueryException &b) {
  using ::std::swap;
  swap(a.errCode, b.errCode);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

QueryException::QueryException(const QueryException& other2) : TException() {
  errCode = other2.errCode;
  message = other2.message;
  __isset = other2.__isset;
}
QueryException& QueryException::operator=(const QueryException& other3) {
  errCode = other3.errCode;
  message = other3.message;
  __isset = other3.__isset;
  return *this;
}
void QueryException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "QueryException(";
  out << "errCode=" << to_string(errCode);
  out << ", " << "message=" << to_string(message);
  out << ")";
}

const char* QueryException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: QueryException";
  }
}


OperateResultDto::~OperateResultDto() throw() {
}


void OperateResultDto::__set_status(const int32_t val) {
  this->status = val;
}

void OperateResultDto::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t OperateResultDto::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->status);
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t OperateResultDto::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("OperateResultDto");

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(OperateResultDto &a, OperateResultDto &b) {
  using ::std::swap;
  swap(a.status, b.status);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

OperateResultDto::OperateResultDto(const OperateResultDto& other4) {
  status = other4.status;
  message = other4.message;
  __isset = other4.__isset;
}
OperateResultDto& OperateResultDto::operator=(const OperateResultDto& other5) {
  status = other5.status;
  message = other5.message;
  __isset = other5.__isset;
  return *this;
}
void OperateResultDto::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "OperateResultDto(";
  out << "status=" << to_string(status);
  out << ", " << "message=" << to_string(message);
  out << ")";
}


RedPacketCreateDto::~RedPacketCreateDto() throw() {
}


void RedPacketCreateDto::__set_uniqueId(const std::string& val) {
  this->uniqueId = val;
}

void RedPacketCreateDto::__set_userId(const int32_t val) {
  this->userId = val;
}

void RedPacketCreateDto::__set_amount(const int32_t val) {
  this->amount = val;
}

void RedPacketCreateDto::__set_count(const int32_t val) {
  this->count = val;
}

uint32_t RedPacketCreateDto::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->uniqueId);
          this->__isset.uniqueId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->userId);
          this->__isset.userId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->amount);
          this->__isset.amount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->count);
          this->__isset.count = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t RedPacketCreateDto::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("RedPacketCreateDto");

  xfer += oprot->writeFieldBegin("uniqueId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->uniqueId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->userId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("amount", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->amount);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("count", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->count);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RedPacketCreateDto &a, RedPacketCreateDto &b) {
  using ::std::swap;
  swap(a.uniqueId, b.uniqueId);
  swap(a.userId, b.userId);
  swap(a.amount, b.amount);
  swap(a.count, b.count);
  swap(a.__isset, b.__isset);
}

RedPacketCreateDto::RedPacketCreateDto(const RedPacketCreateDto& other6) {
  uniqueId = other6.uniqueId;
  userId = other6.userId;
  amount = other6.amount;
  count = other6.count;
  __isset = other6.__isset;
}
RedPacketCreateDto& RedPacketCreateDto::operator=(const RedPacketCreateDto& other7) {
  uniqueId = other7.uniqueId;
  userId = other7.userId;
  amount = other7.amount;
  count = other7.count;
  __isset = other7.__isset;
  return *this;
}
void RedPacketCreateDto::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "RedPacketCreateDto(";
  out << "uniqueId=" << to_string(uniqueId);
  out << ", " << "userId=" << to_string(userId);
  out << ", " << "amount=" << to_string(amount);
  out << ", " << "count=" << to_string(count);
  out << ")";
}


RedPacketReceiveDto::~RedPacketReceiveDto() throw() {
}


void RedPacketReceiveDto::__set_userId(const int32_t val) {
  this->userId = val;
}

void RedPacketReceiveDto::__set_redPacketId(const int32_t val) {
  this->redPacketId = val;
}

uint32_t RedPacketReceiveDto::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->userId);
          this->__isset.userId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->redPacketId);
          this->__isset.redPacketId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t RedPacketReceiveDto::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("RedPacketReceiveDto");

  xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->userId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("redPacketId", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->redPacketId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RedPacketReceiveDto &a, RedPacketReceiveDto &b) {
  using ::std::swap;
  swap(a.userId, b.userId);
  swap(a.redPacketId, b.redPacketId);
  swap(a.__isset, b.__isset);
}

RedPacketReceiveDto::RedPacketReceiveDto(const RedPacketReceiveDto& other8) {
  userId = other8.userId;
  redPacketId = other8.redPacketId;
  __isset = other8.__isset;
}
RedPacketReceiveDto& RedPacketReceiveDto::operator=(const RedPacketReceiveDto& other9) {
  userId = other9.userId;
  redPacketId = other9.redPacketId;
  __isset = other9.__isset;
  return *this;
}
void RedPacketReceiveDto::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "RedPacketReceiveDto(";
  out << "userId=" << to_string(userId);
  out << ", " << "redPacketId=" << to_string(redPacketId);
  out << ")";
}


RedPacketReceiveResponseDto::~RedPacketReceiveResponseDto() throw() {
}


void RedPacketReceiveResponseDto::__set_status(const int32_t val) {
  this->status = val;
}

void RedPacketReceiveResponseDto::__set_receiveAmount(const int32_t val) {
  this->receiveAmount = val;
}

void RedPacketReceiveResponseDto::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t RedPacketReceiveResponseDto::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->status);
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->receiveAmount);
          this->__isset.receiveAmount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t RedPacketReceiveResponseDto::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("RedPacketReceiveResponseDto");

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("receiveAmount", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->receiveAmount);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RedPacketReceiveResponseDto &a, RedPacketReceiveResponseDto &b) {
  using ::std::swap;
  swap(a.status, b.status);
  swap(a.receiveAmount, b.receiveAmount);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

RedPacketReceiveResponseDto::RedPacketReceiveResponseDto(const RedPacketReceiveResponseDto& other10) {
  status = other10.status;
  receiveAmount = other10.receiveAmount;
  message = other10.message;
  __isset = other10.__isset;
}
RedPacketReceiveResponseDto& RedPacketReceiveResponseDto::operator=(const RedPacketReceiveResponseDto& other11) {
  status = other11.status;
  receiveAmount = other11.receiveAmount;
  message = other11.message;
  __isset = other11.__isset;
  return *this;
}
void RedPacketReceiveResponseDto::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "RedPacketReceiveResponseDto(";
  out << "status=" << to_string(status);
  out << ", " << "receiveAmount=" << to_string(receiveAmount);
  out << ", " << "message=" << to_string(message);
  out << ")";
}


QueryByRedPacketIdDto::~QueryByRedPacketIdDto() throw() {
}


void QueryByRedPacketIdDto::__set_redPacketId(const int32_t val) {
  this->redPacketId = val;
}

uint32_t QueryByRedPacketIdDto::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->redPacketId);
          this->__isset.redPacketId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t QueryByRedPacketIdDto::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("QueryByRedPacketIdDto");

  xfer += oprot->writeFieldBegin("redPacketId", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->redPacketId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(QueryByRedPacketIdDto &a, QueryByRedPacketIdDto &b) {
  using ::std::swap;
  swap(a.redPacketId, b.redPacketId);
  swap(a.__isset, b.__isset);
}

QueryByRedPacketIdDto::QueryByRedPacketIdDto(const QueryByRedPacketIdDto& other12) {
  redPacketId = other12.redPacketId;
  __isset = other12.__isset;
}
QueryByRedPacketIdDto& QueryByRedPacketIdDto::operator=(const QueryByRedPacketIdDto& other13) {
  redPacketId = other13.redPacketId;
  __isset = other13.__isset;
  return *this;
}
void QueryByRedPacketIdDto::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "QueryByRedPacketIdDto(";
  out << "redPacketId=" << to_string(redPacketId);
  out << ")";
}


QueryResultRedPacketDto::~QueryResultRedPacketDto() throw() {
}


void QueryResultRedPacketDto::__set_receiveUserId(const int32_t val) {
  this->receiveUserId = val;
}

void QueryResultRedPacketDto::__set_receiveUserName(const std::string& val) {
  this->receiveUserName = val;
}

void QueryResultRedPacketDto::__set_amount(const int32_t val) {
  this->amount = val;
}

void QueryResultRedPacketDto::__set_time(const std::string& val) {
  this->time = val;
}

uint32_t QueryResultRedPacketDto::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->receiveUserId);
          this->__isset.receiveUserId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->receiveUserName);
          this->__isset.receiveUserName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->amount);
          this->__isset.amount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->time);
          this->__isset.time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t QueryResultRedPacketDto::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("QueryResultRedPacketDto");

  xfer += oprot->writeFieldBegin("receiveUserId", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->receiveUserId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("receiveUserName", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->receiveUserName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("amount", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32(this->amount);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("time", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(QueryResultRedPacketDto &a, QueryResultRedPacketDto &b) {
  using ::std::swap;
  swap(a.receiveUserId, b.receiveUserId);
  swap(a.receiveUserName, b.receiveUserName);
  swap(a.amount, b.amount);
  swap(a.time, b.time);
  swap(a.__isset, b.__isset);
}

QueryResultRedPacketDto::QueryResultRedPacketDto(const QueryResultRedPacketDto& other14) {
  receiveUserId = other14.receiveUserId;
  receiveUserName = other14.receiveUserName;
  amount = other14.amount;
  time = other14.time;
  __isset = other14.__isset;
}
QueryResultRedPacketDto& QueryResultRedPacketDto::operator=(const QueryResultRedPacketDto& other15) {
  receiveUserId = other15.receiveUserId;
  receiveUserName = other15.receiveUserName;
  amount = other15.amount;
  time = other15.time;
  __isset = other15.__isset;
  return *this;
}
void QueryResultRedPacketDto::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "QueryResultRedPacketDto(";
  out << "receiveUserId=" << to_string(receiveUserId);
  out << ", " << "receiveUserName=" << to_string(receiveUserName);
  out << ", " << "amount=" << to_string(amount);
  out << ", " << "time=" << to_string(time);
  out << ")";
}


QueryByUserIdDto::~QueryByUserIdDto() throw() {
}


void QueryByUserIdDto::__set_userId(const int32_t val) {
  this->userId = val;
}

uint32_t QueryByUserIdDto::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->userId);
          this->__isset.userId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t QueryByUserIdDto::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("QueryByUserIdDto");

  xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->userId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(QueryByUserIdDto &a, QueryByUserIdDto &b) {
  using ::std::swap;
  swap(a.userId, b.userId);
  swap(a.__isset, b.__isset);
}

QueryByUserIdDto::QueryByUserIdDto(const QueryByUserIdDto& other16) {
  userId = other16.userId;
  __isset = other16.__isset;
}
QueryByUserIdDto& QueryByUserIdDto::operator=(const QueryByUserIdDto& other17) {
  userId = other17.userId;
  __isset = other17.__isset;
  return *this;
}
void QueryByUserIdDto::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "QueryByUserIdDto(";
  out << "userId=" << to_string(userId);
  out << ")";
}


QueryResultUserDto::~QueryResultUserDto() throw() {
}


void QueryResultUserDto::__set_redPacketId(const int32_t val) {
  this->redPacketId = val;
}

void QueryResultUserDto::__set_amount(const int32_t val) {
  this->amount = val;
}

void QueryResultUserDto::__set_time(const std::string& val) {
  this->time = val;
}

uint32_t QueryResultUserDto::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->redPacketId);
          this->__isset.redPacketId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->amount);
          this->__isset.amount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->time);
          this->__isset.time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t QueryResultUserDto::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("QueryResultUserDto");

  xfer += oprot->writeFieldBegin("redPacketId", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->redPacketId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("amount", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->amount);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("time", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(QueryResultUserDto &a, QueryResultUserDto &b) {
  using ::std::swap;
  swap(a.redPacketId, b.redPacketId);
  swap(a.amount, b.amount);
  swap(a.time, b.time);
  swap(a.__isset, b.__isset);
}

QueryResultUserDto::QueryResultUserDto(const QueryResultUserDto& other18) {
  redPacketId = other18.redPacketId;
  amount = other18.amount;
  time = other18.time;
  __isset = other18.__isset;
}
QueryResultUserDto& QueryResultUserDto::operator=(const QueryResultUserDto& other19) {
  redPacketId = other19.redPacketId;
  amount = other19.amount;
  time = other19.time;
  __isset = other19.__isset;
  return *this;
}
void QueryResultUserDto::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "QueryResultUserDto(";
  out << "redPacketId=" << to_string(redPacketId);
  out << ", " << "amount=" << to_string(amount);
  out << ", " << "time=" << to_string(time);
  out << ")";
}


QueryResultReceiveUserDto::~QueryResultReceiveUserDto() throw() {
}


void QueryResultReceiveUserDto::__set_redPacketId(const int32_t val) {
  this->redPacketId = val;
}

void QueryResultReceiveUserDto::__set_userId(const int32_t val) {
  this->userId = val;
}

void QueryResultReceiveUserDto::__set_userName(const std::string& val) {
  this->userName = val;
}

void QueryResultReceiveUserDto::__set_amount(const int32_t val) {
  this->amount = val;
}

void QueryResultReceiveUserDto::__set_time(const std::string& val) {
  this->time = val;
}

uint32_t QueryResultReceiveUserDto::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->redPacketId);
          this->__isset.redPacketId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->userId);
          this->__isset.userId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->userName);
          this->__isset.userName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->amount);
          this->__isset.amount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->time);
          this->__isset.time = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t QueryResultReceiveUserDto::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("QueryResultReceiveUserDto");

  xfer += oprot->writeFieldBegin("redPacketId", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->redPacketId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userId", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->userId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userName", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->userName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("amount", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->amount);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("time", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->time);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(QueryResultReceiveUserDto &a, QueryResultReceiveUserDto &b) {
  using ::std::swap;
  swap(a.redPacketId, b.redPacketId);
  swap(a.userId, b.userId);
  swap(a.userName, b.userName);
  swap(a.amount, b.amount);
  swap(a.time, b.time);
  swap(a.__isset, b.__isset);
}

QueryResultReceiveUserDto::QueryResultReceiveUserDto(const QueryResultReceiveUserDto& other20) {
  redPacketId = other20.redPacketId;
  userId = other20.userId;
  userName = other20.userName;
  amount = other20.amount;
  time = other20.time;
  __isset = other20.__isset;
}
QueryResultReceiveUserDto& QueryResultReceiveUserDto::operator=(const QueryResultReceiveUserDto& other21) {
  redPacketId = other21.redPacketId;
  userId = other21.userId;
  userName = other21.userName;
  amount = other21.amount;
  time = other21.time;
  __isset = other21.__isset;
  return *this;
}
void QueryResultReceiveUserDto::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "QueryResultReceiveUserDto(";
  out << "redPacketId=" << to_string(redPacketId);
  out << ", " << "userId=" << to_string(userId);
  out << ", " << "userName=" << to_string(userName);
  out << ", " << "amount=" << to_string(amount);
  out << ", " << "time=" << to_string(time);
  out << ")";
}

} // namespace