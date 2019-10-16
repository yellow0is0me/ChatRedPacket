cmake_minimum_required(VERSION 3.15)
project(ChatRedPacket)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(server)
add_subdirectory(client)
add_subdirectory(client2)

#[[
#添加头文件搜索路径
include_directories(/usr/local/include)
include_directories(/usr/local/mysql-connector-c++-8.0/include/jdbc)

#添加库文件搜索路径
link_directories(/usr/local/lib)
link_directories(/usr/local/mysql-connector-c++-8.0/lib64)



AUX_SOURCE_DIRECTORY(.. DIR)
AUX_SOURCE_DIRECTORY(server DIR)
AUX_SOURCE_DIRECTORY(server/sql DIR)
AUX_SOURCE_DIRECTORY(server/src DIR)
add_executable(ChatRedPacket ${DIR})
target_link_libraries(ChatRedPacket /usr/local/mysql-connector-c++-8.0/lib64/libssl.1.1.dylib)
target_link_libraries(ChatRedPacket libmysqlcppconn.dylib)]]
