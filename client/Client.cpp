//
// Created by HuangZhongyang on 2019/10/15.
//

#include <thrift/transport/TSocket.h>
#include <thrift/transport/TTransportUtils.h>
#include <thrift/protocol/TBinaryProtocol.h>
#include <iostream>

#include "../thrift/gen-cpp/ChatRedPacket.h"

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
        crp::OperateResultDto resultDto;
        crp::RedPacketCreateDto dto;
        dto.uniqueId = "x123xxx2ss31xx2sdx21";
        dto.userId = 1;
        dto.amount = 50;
        dto.count = 8;
        client.createRedPacket(resultDto, dto);
        std::cout << resultDto << std::endl;

        transport->close();
    } catch (TException &tx) {
        std::cout << "ERROR: " << tx.what() << std::endl;
    }
    return 0;
}