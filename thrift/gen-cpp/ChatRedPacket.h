/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ChatRedPacket_H
#define ChatRedPacket_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "ChatRedPacket_types.h"

namespace crp {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class ChatRedPacketIf {
 public:
  virtual ~ChatRedPacketIf() {}
  virtual void createRedPacket(OperateResultDto& _return, const RedPacketCreateDto& createDto) = 0;
  virtual void receiveRedPacket(RedPacketReceiveResponseDto& _return, const RedPacketReceiveDto& receiveDto) = 0;
  virtual void queryRedPacketStatus(std::vector<QueryResultRedPacketDto> & _return, const QueryByRedPacketIdDto& queryDto) = 0;
  virtual void queryReceiveRedPacketByUser(std::vector<QueryResultReceiveUserDto> & _return, const QueryByUserIdDto& queryDto) = 0;
  virtual void queryCreateRedPacketByUser(std::vector<QueryResultUserDto> & _return, const QueryByUserIdDto& queryDto) = 0;
};

class ChatRedPacketIfFactory {
 public:
  typedef ChatRedPacketIf Handler;

  virtual ~ChatRedPacketIfFactory() {}

  virtual ChatRedPacketIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ChatRedPacketIf* /* handler */) = 0;
};

class ChatRedPacketIfSingletonFactory : virtual public ChatRedPacketIfFactory {
 public:
  ChatRedPacketIfSingletonFactory(const boost::shared_ptr<ChatRedPacketIf>& iface) : iface_(iface) {}
  virtual ~ChatRedPacketIfSingletonFactory() {}

  virtual ChatRedPacketIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ChatRedPacketIf* /* handler */) {}

 protected:
  boost::shared_ptr<ChatRedPacketIf> iface_;
};

class ChatRedPacketNull : virtual public ChatRedPacketIf {
 public:
  virtual ~ChatRedPacketNull() {}
  void createRedPacket(OperateResultDto& /* _return */, const RedPacketCreateDto& /* createDto */) {
    return;
  }
  void receiveRedPacket(RedPacketReceiveResponseDto& /* _return */, const RedPacketReceiveDto& /* receiveDto */) {
    return;
  }
  void queryRedPacketStatus(std::vector<QueryResultRedPacketDto> & /* _return */, const QueryByRedPacketIdDto& /* queryDto */) {
    return;
  }
  void queryReceiveRedPacketByUser(std::vector<QueryResultReceiveUserDto> & /* _return */, const QueryByUserIdDto& /* queryDto */) {
    return;
  }
  void queryCreateRedPacketByUser(std::vector<QueryResultUserDto> & /* _return */, const QueryByUserIdDto& /* queryDto */) {
    return;
  }
};

typedef struct _ChatRedPacket_createRedPacket_args__isset {
  _ChatRedPacket_createRedPacket_args__isset() : createDto(false) {}
  bool createDto :1;
} _ChatRedPacket_createRedPacket_args__isset;

class ChatRedPacket_createRedPacket_args {
 public:

  ChatRedPacket_createRedPacket_args(const ChatRedPacket_createRedPacket_args&);
  ChatRedPacket_createRedPacket_args& operator=(const ChatRedPacket_createRedPacket_args&);
  ChatRedPacket_createRedPacket_args() {
  }

  virtual ~ChatRedPacket_createRedPacket_args() throw();
  RedPacketCreateDto createDto;

  _ChatRedPacket_createRedPacket_args__isset __isset;

  void __set_createDto(const RedPacketCreateDto& val);

  bool operator == (const ChatRedPacket_createRedPacket_args & rhs) const
  {
    if (!(createDto == rhs.createDto))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_createRedPacket_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_createRedPacket_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ChatRedPacket_createRedPacket_pargs {
 public:


  virtual ~ChatRedPacket_createRedPacket_pargs() throw();
  const RedPacketCreateDto* createDto;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_createRedPacket_result__isset {
  _ChatRedPacket_createRedPacket_result__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_createRedPacket_result__isset;

class ChatRedPacket_createRedPacket_result {
 public:

  ChatRedPacket_createRedPacket_result(const ChatRedPacket_createRedPacket_result&);
  ChatRedPacket_createRedPacket_result& operator=(const ChatRedPacket_createRedPacket_result&);
  ChatRedPacket_createRedPacket_result() {
  }

  virtual ~ChatRedPacket_createRedPacket_result() throw();
  OperateResultDto success;
  OperateException ex;

  _ChatRedPacket_createRedPacket_result__isset __isset;

  void __set_success(const OperateResultDto& val);

  void __set_ex(const OperateException& val);

  bool operator == (const ChatRedPacket_createRedPacket_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex == rhs.ex))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_createRedPacket_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_createRedPacket_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_createRedPacket_presult__isset {
  _ChatRedPacket_createRedPacket_presult__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_createRedPacket_presult__isset;

class ChatRedPacket_createRedPacket_presult {
 public:


  virtual ~ChatRedPacket_createRedPacket_presult() throw();
  OperateResultDto* success;
  OperateException ex;

  _ChatRedPacket_createRedPacket_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ChatRedPacket_receiveRedPacket_args__isset {
  _ChatRedPacket_receiveRedPacket_args__isset() : receiveDto(false) {}
  bool receiveDto :1;
} _ChatRedPacket_receiveRedPacket_args__isset;

class ChatRedPacket_receiveRedPacket_args {
 public:

  ChatRedPacket_receiveRedPacket_args(const ChatRedPacket_receiveRedPacket_args&);
  ChatRedPacket_receiveRedPacket_args& operator=(const ChatRedPacket_receiveRedPacket_args&);
  ChatRedPacket_receiveRedPacket_args() {
  }

  virtual ~ChatRedPacket_receiveRedPacket_args() throw();
  RedPacketReceiveDto receiveDto;

  _ChatRedPacket_receiveRedPacket_args__isset __isset;

  void __set_receiveDto(const RedPacketReceiveDto& val);

  bool operator == (const ChatRedPacket_receiveRedPacket_args & rhs) const
  {
    if (!(receiveDto == rhs.receiveDto))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_receiveRedPacket_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_receiveRedPacket_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ChatRedPacket_receiveRedPacket_pargs {
 public:


  virtual ~ChatRedPacket_receiveRedPacket_pargs() throw();
  const RedPacketReceiveDto* receiveDto;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_receiveRedPacket_result__isset {
  _ChatRedPacket_receiveRedPacket_result__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_receiveRedPacket_result__isset;

class ChatRedPacket_receiveRedPacket_result {
 public:

  ChatRedPacket_receiveRedPacket_result(const ChatRedPacket_receiveRedPacket_result&);
  ChatRedPacket_receiveRedPacket_result& operator=(const ChatRedPacket_receiveRedPacket_result&);
  ChatRedPacket_receiveRedPacket_result() {
  }

  virtual ~ChatRedPacket_receiveRedPacket_result() throw();
  RedPacketReceiveResponseDto success;
  OperateException ex;

  _ChatRedPacket_receiveRedPacket_result__isset __isset;

  void __set_success(const RedPacketReceiveResponseDto& val);

  void __set_ex(const OperateException& val);

  bool operator == (const ChatRedPacket_receiveRedPacket_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex == rhs.ex))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_receiveRedPacket_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_receiveRedPacket_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_receiveRedPacket_presult__isset {
  _ChatRedPacket_receiveRedPacket_presult__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_receiveRedPacket_presult__isset;

class ChatRedPacket_receiveRedPacket_presult {
 public:


  virtual ~ChatRedPacket_receiveRedPacket_presult() throw();
  RedPacketReceiveResponseDto* success;
  OperateException ex;

  _ChatRedPacket_receiveRedPacket_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ChatRedPacket_queryRedPacketStatus_args__isset {
  _ChatRedPacket_queryRedPacketStatus_args__isset() : queryDto(false) {}
  bool queryDto :1;
} _ChatRedPacket_queryRedPacketStatus_args__isset;

class ChatRedPacket_queryRedPacketStatus_args {
 public:

  ChatRedPacket_queryRedPacketStatus_args(const ChatRedPacket_queryRedPacketStatus_args&);
  ChatRedPacket_queryRedPacketStatus_args& operator=(const ChatRedPacket_queryRedPacketStatus_args&);
  ChatRedPacket_queryRedPacketStatus_args() {
  }

  virtual ~ChatRedPacket_queryRedPacketStatus_args() throw();
  QueryByRedPacketIdDto queryDto;

  _ChatRedPacket_queryRedPacketStatus_args__isset __isset;

  void __set_queryDto(const QueryByRedPacketIdDto& val);

  bool operator == (const ChatRedPacket_queryRedPacketStatus_args & rhs) const
  {
    if (!(queryDto == rhs.queryDto))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_queryRedPacketStatus_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_queryRedPacketStatus_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ChatRedPacket_queryRedPacketStatus_pargs {
 public:


  virtual ~ChatRedPacket_queryRedPacketStatus_pargs() throw();
  const QueryByRedPacketIdDto* queryDto;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_queryRedPacketStatus_result__isset {
  _ChatRedPacket_queryRedPacketStatus_result__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_queryRedPacketStatus_result__isset;

class ChatRedPacket_queryRedPacketStatus_result {
 public:

  ChatRedPacket_queryRedPacketStatus_result(const ChatRedPacket_queryRedPacketStatus_result&);
  ChatRedPacket_queryRedPacketStatus_result& operator=(const ChatRedPacket_queryRedPacketStatus_result&);
  ChatRedPacket_queryRedPacketStatus_result() {
  }

  virtual ~ChatRedPacket_queryRedPacketStatus_result() throw();
  std::vector<QueryResultRedPacketDto>  success;
  QueryException ex;

  _ChatRedPacket_queryRedPacketStatus_result__isset __isset;

  void __set_success(const std::vector<QueryResultRedPacketDto> & val);

  void __set_ex(const QueryException& val);

  bool operator == (const ChatRedPacket_queryRedPacketStatus_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex == rhs.ex))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_queryRedPacketStatus_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_queryRedPacketStatus_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_queryRedPacketStatus_presult__isset {
  _ChatRedPacket_queryRedPacketStatus_presult__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_queryRedPacketStatus_presult__isset;

class ChatRedPacket_queryRedPacketStatus_presult {
 public:


  virtual ~ChatRedPacket_queryRedPacketStatus_presult() throw();
  std::vector<QueryResultRedPacketDto> * success;
  QueryException ex;

  _ChatRedPacket_queryRedPacketStatus_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ChatRedPacket_queryReceiveRedPacketByUser_args__isset {
  _ChatRedPacket_queryReceiveRedPacketByUser_args__isset() : queryDto(false) {}
  bool queryDto :1;
} _ChatRedPacket_queryReceiveRedPacketByUser_args__isset;

class ChatRedPacket_queryReceiveRedPacketByUser_args {
 public:

  ChatRedPacket_queryReceiveRedPacketByUser_args(const ChatRedPacket_queryReceiveRedPacketByUser_args&);
  ChatRedPacket_queryReceiveRedPacketByUser_args& operator=(const ChatRedPacket_queryReceiveRedPacketByUser_args&);
  ChatRedPacket_queryReceiveRedPacketByUser_args() {
  }

  virtual ~ChatRedPacket_queryReceiveRedPacketByUser_args() throw();
  QueryByUserIdDto queryDto;

  _ChatRedPacket_queryReceiveRedPacketByUser_args__isset __isset;

  void __set_queryDto(const QueryByUserIdDto& val);

  bool operator == (const ChatRedPacket_queryReceiveRedPacketByUser_args & rhs) const
  {
    if (!(queryDto == rhs.queryDto))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_queryReceiveRedPacketByUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_queryReceiveRedPacketByUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ChatRedPacket_queryReceiveRedPacketByUser_pargs {
 public:


  virtual ~ChatRedPacket_queryReceiveRedPacketByUser_pargs() throw();
  const QueryByUserIdDto* queryDto;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_queryReceiveRedPacketByUser_result__isset {
  _ChatRedPacket_queryReceiveRedPacketByUser_result__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_queryReceiveRedPacketByUser_result__isset;

class ChatRedPacket_queryReceiveRedPacketByUser_result {
 public:

  ChatRedPacket_queryReceiveRedPacketByUser_result(const ChatRedPacket_queryReceiveRedPacketByUser_result&);
  ChatRedPacket_queryReceiveRedPacketByUser_result& operator=(const ChatRedPacket_queryReceiveRedPacketByUser_result&);
  ChatRedPacket_queryReceiveRedPacketByUser_result() {
  }

  virtual ~ChatRedPacket_queryReceiveRedPacketByUser_result() throw();
  std::vector<QueryResultReceiveUserDto>  success;
  QueryException ex;

  _ChatRedPacket_queryReceiveRedPacketByUser_result__isset __isset;

  void __set_success(const std::vector<QueryResultReceiveUserDto> & val);

  void __set_ex(const QueryException& val);

  bool operator == (const ChatRedPacket_queryReceiveRedPacketByUser_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex == rhs.ex))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_queryReceiveRedPacketByUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_queryReceiveRedPacketByUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_queryReceiveRedPacketByUser_presult__isset {
  _ChatRedPacket_queryReceiveRedPacketByUser_presult__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_queryReceiveRedPacketByUser_presult__isset;

class ChatRedPacket_queryReceiveRedPacketByUser_presult {
 public:


  virtual ~ChatRedPacket_queryReceiveRedPacketByUser_presult() throw();
  std::vector<QueryResultReceiveUserDto> * success;
  QueryException ex;

  _ChatRedPacket_queryReceiveRedPacketByUser_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _ChatRedPacket_queryCreateRedPacketByUser_args__isset {
  _ChatRedPacket_queryCreateRedPacketByUser_args__isset() : queryDto(false) {}
  bool queryDto :1;
} _ChatRedPacket_queryCreateRedPacketByUser_args__isset;

class ChatRedPacket_queryCreateRedPacketByUser_args {
 public:

  ChatRedPacket_queryCreateRedPacketByUser_args(const ChatRedPacket_queryCreateRedPacketByUser_args&);
  ChatRedPacket_queryCreateRedPacketByUser_args& operator=(const ChatRedPacket_queryCreateRedPacketByUser_args&);
  ChatRedPacket_queryCreateRedPacketByUser_args() {
  }

  virtual ~ChatRedPacket_queryCreateRedPacketByUser_args() throw();
  QueryByUserIdDto queryDto;

  _ChatRedPacket_queryCreateRedPacketByUser_args__isset __isset;

  void __set_queryDto(const QueryByUserIdDto& val);

  bool operator == (const ChatRedPacket_queryCreateRedPacketByUser_args & rhs) const
  {
    if (!(queryDto == rhs.queryDto))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_queryCreateRedPacketByUser_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_queryCreateRedPacketByUser_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ChatRedPacket_queryCreateRedPacketByUser_pargs {
 public:


  virtual ~ChatRedPacket_queryCreateRedPacketByUser_pargs() throw();
  const QueryByUserIdDto* queryDto;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_queryCreateRedPacketByUser_result__isset {
  _ChatRedPacket_queryCreateRedPacketByUser_result__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_queryCreateRedPacketByUser_result__isset;

class ChatRedPacket_queryCreateRedPacketByUser_result {
 public:

  ChatRedPacket_queryCreateRedPacketByUser_result(const ChatRedPacket_queryCreateRedPacketByUser_result&);
  ChatRedPacket_queryCreateRedPacketByUser_result& operator=(const ChatRedPacket_queryCreateRedPacketByUser_result&);
  ChatRedPacket_queryCreateRedPacketByUser_result() {
  }

  virtual ~ChatRedPacket_queryCreateRedPacketByUser_result() throw();
  std::vector<QueryResultUserDto>  success;
  QueryException ex;

  _ChatRedPacket_queryCreateRedPacketByUser_result__isset __isset;

  void __set_success(const std::vector<QueryResultUserDto> & val);

  void __set_ex(const QueryException& val);

  bool operator == (const ChatRedPacket_queryCreateRedPacketByUser_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(ex == rhs.ex))
      return false;
    return true;
  }
  bool operator != (const ChatRedPacket_queryCreateRedPacketByUser_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ChatRedPacket_queryCreateRedPacketByUser_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ChatRedPacket_queryCreateRedPacketByUser_presult__isset {
  _ChatRedPacket_queryCreateRedPacketByUser_presult__isset() : success(false), ex(false) {}
  bool success :1;
  bool ex :1;
} _ChatRedPacket_queryCreateRedPacketByUser_presult__isset;

class ChatRedPacket_queryCreateRedPacketByUser_presult {
 public:


  virtual ~ChatRedPacket_queryCreateRedPacketByUser_presult() throw();
  std::vector<QueryResultUserDto> * success;
  QueryException ex;

  _ChatRedPacket_queryCreateRedPacketByUser_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class ChatRedPacketClient : virtual public ChatRedPacketIf {
 public:
  ChatRedPacketClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ChatRedPacketClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void createRedPacket(OperateResultDto& _return, const RedPacketCreateDto& createDto);
  void send_createRedPacket(const RedPacketCreateDto& createDto);
  void recv_createRedPacket(OperateResultDto& _return);
  void receiveRedPacket(RedPacketReceiveResponseDto& _return, const RedPacketReceiveDto& receiveDto);
  void send_receiveRedPacket(const RedPacketReceiveDto& receiveDto);
  void recv_receiveRedPacket(RedPacketReceiveResponseDto& _return);
  void queryRedPacketStatus(std::vector<QueryResultRedPacketDto> & _return, const QueryByRedPacketIdDto& queryDto);
  void send_queryRedPacketStatus(const QueryByRedPacketIdDto& queryDto);
  void recv_queryRedPacketStatus(std::vector<QueryResultRedPacketDto> & _return);
  void queryReceiveRedPacketByUser(std::vector<QueryResultReceiveUserDto> & _return, const QueryByUserIdDto& queryDto);
  void send_queryReceiveRedPacketByUser(const QueryByUserIdDto& queryDto);
  void recv_queryReceiveRedPacketByUser(std::vector<QueryResultReceiveUserDto> & _return);
  void queryCreateRedPacketByUser(std::vector<QueryResultUserDto> & _return, const QueryByUserIdDto& queryDto);
  void send_queryCreateRedPacketByUser(const QueryByUserIdDto& queryDto);
  void recv_queryCreateRedPacketByUser(std::vector<QueryResultUserDto> & _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ChatRedPacketProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<ChatRedPacketIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ChatRedPacketProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_createRedPacket(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_receiveRedPacket(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_queryRedPacketStatus(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_queryReceiveRedPacketByUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_queryCreateRedPacketByUser(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ChatRedPacketProcessor(boost::shared_ptr<ChatRedPacketIf> iface) :
    iface_(iface) {
    processMap_["createRedPacket"] = &ChatRedPacketProcessor::process_createRedPacket;
    processMap_["receiveRedPacket"] = &ChatRedPacketProcessor::process_receiveRedPacket;
    processMap_["queryRedPacketStatus"] = &ChatRedPacketProcessor::process_queryRedPacketStatus;
    processMap_["queryReceiveRedPacketByUser"] = &ChatRedPacketProcessor::process_queryReceiveRedPacketByUser;
    processMap_["queryCreateRedPacketByUser"] = &ChatRedPacketProcessor::process_queryCreateRedPacketByUser;
  }

  virtual ~ChatRedPacketProcessor() {}
};

class ChatRedPacketProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ChatRedPacketProcessorFactory(const ::boost::shared_ptr< ChatRedPacketIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ChatRedPacketIfFactory > handlerFactory_;
};

class ChatRedPacketMultiface : virtual public ChatRedPacketIf {
 public:
  ChatRedPacketMultiface(std::vector<boost::shared_ptr<ChatRedPacketIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ChatRedPacketMultiface() {}
 protected:
  std::vector<boost::shared_ptr<ChatRedPacketIf> > ifaces_;
  ChatRedPacketMultiface() {}
  void add(boost::shared_ptr<ChatRedPacketIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void createRedPacket(OperateResultDto& _return, const RedPacketCreateDto& createDto) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->createRedPacket(_return, createDto);
    }
    ifaces_[i]->createRedPacket(_return, createDto);
    return;
  }

  void receiveRedPacket(RedPacketReceiveResponseDto& _return, const RedPacketReceiveDto& receiveDto) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->receiveRedPacket(_return, receiveDto);
    }
    ifaces_[i]->receiveRedPacket(_return, receiveDto);
    return;
  }

  void queryRedPacketStatus(std::vector<QueryResultRedPacketDto> & _return, const QueryByRedPacketIdDto& queryDto) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->queryRedPacketStatus(_return, queryDto);
    }
    ifaces_[i]->queryRedPacketStatus(_return, queryDto);
    return;
  }

  void queryReceiveRedPacketByUser(std::vector<QueryResultReceiveUserDto> & _return, const QueryByUserIdDto& queryDto) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->queryReceiveRedPacketByUser(_return, queryDto);
    }
    ifaces_[i]->queryReceiveRedPacketByUser(_return, queryDto);
    return;
  }

  void queryCreateRedPacketByUser(std::vector<QueryResultUserDto> & _return, const QueryByUserIdDto& queryDto) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->queryCreateRedPacketByUser(_return, queryDto);
    }
    ifaces_[i]->queryCreateRedPacketByUser(_return, queryDto);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class ChatRedPacketConcurrentClient : virtual public ChatRedPacketIf {
 public:
  ChatRedPacketConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ChatRedPacketConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void createRedPacket(OperateResultDto& _return, const RedPacketCreateDto& createDto);
  int32_t send_createRedPacket(const RedPacketCreateDto& createDto);
  void recv_createRedPacket(OperateResultDto& _return, const int32_t seqid);
  void receiveRedPacket(RedPacketReceiveResponseDto& _return, const RedPacketReceiveDto& receiveDto);
  int32_t send_receiveRedPacket(const RedPacketReceiveDto& receiveDto);
  void recv_receiveRedPacket(RedPacketReceiveResponseDto& _return, const int32_t seqid);
  void queryRedPacketStatus(std::vector<QueryResultRedPacketDto> & _return, const QueryByRedPacketIdDto& queryDto);
  int32_t send_queryRedPacketStatus(const QueryByRedPacketIdDto& queryDto);
  void recv_queryRedPacketStatus(std::vector<QueryResultRedPacketDto> & _return, const int32_t seqid);
  void queryReceiveRedPacketByUser(std::vector<QueryResultReceiveUserDto> & _return, const QueryByUserIdDto& queryDto);
  int32_t send_queryReceiveRedPacketByUser(const QueryByUserIdDto& queryDto);
  void recv_queryReceiveRedPacketByUser(std::vector<QueryResultReceiveUserDto> & _return, const int32_t seqid);
  void queryCreateRedPacketByUser(std::vector<QueryResultUserDto> & _return, const QueryByUserIdDto& queryDto);
  int32_t send_queryCreateRedPacketByUser(const QueryByUserIdDto& queryDto);
  void recv_queryCreateRedPacketByUser(std::vector<QueryResultUserDto> & _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

} // namespace

#endif
