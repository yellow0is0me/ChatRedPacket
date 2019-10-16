cmake_minimum_required(VERSION 3.15)
project(ChatRedPacket_Client2)

set(CMAKE_CXX_STANDARD 14)

#添加头文件搜索路径
include_directories(/usr/local/include)

#添加库文件搜索路径
link_directories(/usr/local/lib)

AUX_SOURCE_DIRECTORY(. DIR)
AUX_SOURCE_DIRECTORY(../thrift/gen-cpp DIR)

add_executable(ChatRedPacket_Client2 ${DIR})

target_link_libraries(ChatRedPacket_Client2 -lthrift)
