//
// Created by HuangZhongyang on 2019/10/15.
//

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/resultset.h>
#include <cppconn/exception.h>
#include <cppconn/driver.h>
#include <cppconn/connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/statement.h>

using namespace std;
using namespace sql;


/*
int main(int argc, char *argv[]) {
    sql::Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *result;

    */
/* 创建连接 *//*

    driver = get_driver_instance();
    con = driver->connect("localhost:3306", "root", "123456"); // 需要修改为你数据库的用户密码
    */
/* 连接 MySQL 数据库 university  *//*

    con->setSchema("ChatRedPacket");

    stmt = con->createStatement();
    result = stmt->executeQuery("select * from user_t"); // 标准sql语句
    while (result->next()) {
        cout << "\t MySQL replies: ";
        */
/* 通过数字偏移量, 1 代表第一列 *//*

        int userId = result->getInt("user_id");
        string userName = result->getString("user_name");
        double amount = result->getDouble("amount");
        cout << userId << " , " << userName << " , " << amount << endl;
    }
    delete result;
    delete stmt;
    delete con;
}*/
