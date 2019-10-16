
namespace cpp crp

exception OperateException{
    1:string errCode
    2:string message
}
exception QueryException{
    1:string errCode
    2:string message
}

struct OperateResultDto{
    1:i32 status
    2:string message
}

//创建红包
struct RedPacketCreateDto{
    1:string uniqueId
    2:i32 userId
    3:i32 amount
    4:i32 count
}

//领取红包
struct RedPacketReceiveDto{
    1:i32 userId
    2:i32 redPacketId
}

struct RedPacketReceiveResponseDto{
    1:i32 status
    2:i32 receiveAmount
    3:string message
}

//查询
struct QueryByRedPacketIdDto{
    1:i32 redPacketId
}

struct QueryResultRedPacketDto{
    1:i32 receiveUserId
    2:string receiveUserName
    3:i32 amount
    4:string time
}

struct QueryByUserIdDto{
    1:i32 userId
}

struct QueryResultUserDto{
    1:i32 redPacketId
    2:i32 amount
    3:string time
}

struct QueryResultReceiveUserDto{
    1:i32 redPacketId
    2:i32 userId
    3:string userName
    4:i32 amount
    5:string time
}

service ChatRedPacket{
    //创建红包
    OperateResultDto createRedPacket(1:RedPacketCreateDto createDto) throws(1:OperateException ex)

    //领取红包
    RedPacketReceiveResponseDto receiveRedPacket(1:RedPacketReceiveDto receiveDto) throws(1:OperateException ex)

    //根据红包ID查看红包领取情况
    list<QueryResultRedPacketDto> queryRedPacketStatus(1:QueryByRedPacketIdDto queryDto) throws(1:QueryException ex)

    //根据用户ID查看红包领取情况
    list<QueryResultReceiveUserDto> queryReceiveRedPacketByUser(1:QueryByUserIdDto queryDto) throws(1:QueryException ex)

    //根据用户ID查看红包发送情况
    list<QueryResultUserDto> queryCreateRedPacketByUser(1:QueryByUserIdDto queryDto) throws(1:QueryException ex)

}