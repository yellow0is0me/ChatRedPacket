//
// Created by HuangZhongyang on 2019/10/14.
//
#include "User.h"

#include <utility>
#include <vector>

namespace crp {

    int User::get_userId() {
        return m_userId;
    }

    std::string User::get_userName() {
        return m_userName;
    }

    int User::get_amount() {
        return m_amount;
    }

    void User::update_amount(int newAmount) {
        m_amount = newAmount;
    }

    inline
    User::User(int userId, std::string userName, int amount) : m_userId(userId), m_userName(userName),
                                                               m_amount(amount) {}


    User User::getUserById(int userId, sql::Connection *con) {
        Statement *state;
        ResultSet *result;
        state = con->createStatement();
        char mysql[] = "select * from user_t where user_id = %d";
        char mysqlBuf[1024];
        std::snprintf(mysqlBuf, 1024, mysql, userId);
        result = state->executeQuery(mysqlBuf);

        User user;
        int i = 0;
        if (result->next()) {
            user = User(result->getInt("user_id"), result->getString("user_name"), result->getInt("amount"));
            i = 1;
        }
        con->commit();
        state->close();
        result->close();
        if (i <= 0) {
            throw logic_error("User not found");
        } else {
            return user;
        }

    }

    int User::subAmount(int changeAmount, sql::Connection *con) {
        Statement *state;
        state = con->createStatement();
        char mysql[] = "update user_t set amount=amount-(%d) where user_id = %d and amount >= (%d)";
        char mysqlBuf[1024];
        std::snprintf(mysqlBuf, 1024, mysql, changeAmount, m_userId, changeAmount);
        int result = state->executeUpdate(mysqlBuf);
        state->close();
        if (result != 1) {
            throw logic_error("Modify User Amount Error");
        }
        return 1;
    }

    int User::addAmount(int changeAmount, sql::Connection *con) {
        Statement *state;
        state = con->createStatement();
        char mysql[] = "update user_t set amount=amount+(%d) where user_id = %d";
        char mysqlBuf[1024];
        std::snprintf(mysqlBuf, 1024, mysql, changeAmount, m_userId);
        int result = state->executeUpdate(mysqlBuf);
        state->close();
        if (result != 1) {
            throw logic_error("Modify User Amount Error");
        }
        return 1;
    }

    User::User() {}
}