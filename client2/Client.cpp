//
// Created by HuangZhongyang on 2019/10/15.
//

#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <iostream>

#include "../thrift/gen-cpp/ChatRedPacket.h"

void receive(crp::ChatRedPacketClient client);

void get1(crp::ChatRedPacketClient client);

void get2(crp::ChatRedPacketClient client);

void get3(crp::ChatRedPacketClient client);

using namespace apache::thrift;
using namespace apache::thrift::protocol;
using namespace apache::thrift::transport;
using boost::shared_ptr;

int main(int argc, char **argv) {

    boost::shared_ptr<TTransport> socket(new TSocket("localhost", 9090));
    boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));
    boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));
    crp::ChatRedPacketClient client(protocol);

    try {

        transport->open();
        //receive(client);
        get3(client);
        transport->close();
    } catch (TException &tx) {
        std::cout << "ERROR: " << tx.what() << std::endl;
    }
    return 0;
}

void get3(crp::ChatRedPacketClient client) {
    std::vector<crp::QueryResultUserDto> resultDto;
    crp::QueryByUserIdDto dto;
    dto.userId = 2;
    client.queryCreateRedPacketByUser(resultDto, dto);
    for (crp::QueryResultUserDto dto1:resultDto) {
        std::cout << dto1 << std::endl;
    }
}

void get2(crp::ChatRedPacketClient client) {
    std::vector<crp::QueryResultReceiveUserDto> resultDto;
    crp::QueryByUserIdDto dto;
    dto.userId = 4;
    client.queryReceiveRedPacketByUser(resultDto, dto);
    for (crp::QueryResultReceiveUserDto dto1:resultDto) {
        std::cout << dto1 << std::endl;
    }
}

void get1(crp::ChatRedPacketClient client) {
    std::vector<crp::QueryResultRedPacketDto> resultDto;
    crp::QueryByRedPacketIdDto dto;
    dto.redPacketId = 22;
    client.queryRedPacketStatus(resultDto, dto);
    for (crp::QueryResultRedPacketDto dto1:resultDto) {
        std::cout << dto1 << std::endl;
    }
}

void receive(crp::ChatRedPacketClient client) {
    crp::RedPacketReceiveResponseDto resultDto;
    crp::RedPacketReceiveDto dto;
    dto.userId = 1;
    dto.redPacketId = 25;
    client.receiveRedPacket(resultDto, dto);
    std::cout << resultDto << std::endl;
}