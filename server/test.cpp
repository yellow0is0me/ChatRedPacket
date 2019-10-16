
#include "sql/connection_pool.h"
#include "cppconn/connection.h"
#include "cppconn/resultset.h"

using namespace std;
using namespace sql;
//初始化连接池
/*
ConnPool *connpool = ConnPool::GetInstance();

int main(int argc, char *argv[]) {
    Connection *con;
    Statement *state;
    ResultSet *result;


    for (int i = 0; i < 100; i++) {
        // 从连接池中获取连接
        con = connpool->GetConnection();
        state = con->createStatement();
        state->execute("use ChatRedPacket");

        // 查询数据库
        result = state->executeQuery("select * from user_t");
        // 打印数据库查询结果
        cout << "================================" << endl;
        while (result->next()) {
            int userId = result->getInt("user_id");
            string userName = result->getString("user_name");
            double amount = result->getDouble("amount");
            cout << userId << " , " << userName << " , " << amount << endl;
        }
        cout << "i is: " << i << endl;
        cout << "================================" << endl;
        connpool->ReleaseConnection(con);
    }

    delete result;
    delete state;

    return 0;
}*/
