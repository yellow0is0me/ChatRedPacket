//
// Created by HuangZhongyang on 2019/10/14.
//
#include <iostream>
#include "../sql/connection_pool.h"
#include "cppconn/connection.h"
#include "cppconn/resultset.h"

#ifndef CHATREDPACKET_USER_H
#define CHATREDPACKET_USER_H
#if DEBUG || _DEBUG
#define LOG(x) std::cout << x
#else
#define LOG(x)
#endif


namespace crp {
    class User {
    public:
        int &get_userId();

        std::string &get_userName();

        int &get_amount();

        void update_amount(int newAmount);

        User(int userId, std::string userName, int amount);

        static User getUserById(int userId, sql::Connection *con);

        ~User() = default;

        int subAmount(int changeAmount, sql::Connection *con);

        int addAmount(int changeAmount, sql::Connection *con);

    private:
        int m_userId;
        std::string m_userName;
        int m_amount;
    };

}
#endif //CHATREDPACKET_USER_H
