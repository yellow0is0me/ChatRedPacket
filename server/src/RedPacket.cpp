//
// Created by HuangZhongyang on 2019/10/14.
//

#include <random>
#include <set>
#include "RedPacket.h"

namespace crp {
    int &RedPacket::getRedPacketId() {
        return m_redPacketId;
    }

    int &RedPacket::getUserId() {
        return m_userId;
    }

    int &RedPacket::getCount() {
        return m_count;
    }

    int &RedPacket::getAmount() {
        return m_amount;
    }

    int RedPacket::getFinishFlag() {
        return m_finishFlag;
    }

    std::string &RedPacket::getUniqueId() {
        return m_uniqueId;
    }

    int &RedPacket::getVersion() {
        return m_version;
    }

    RedPacket::RedPacket(int redPacketId, int userId, int count, int amount,
                         std::string &uniqueId) : m_redPacketId(redPacketId),
                                                  m_userId(userId),
                                                  m_count(count),
                                                  m_amount(amount),
                                                  m_finishFlag(0),
                                                  m_uniqueId(uniqueId),
                                                  m_version(1) {
    }

    RedPacket::RedPacket(int userId, int count, int amount, std::string uniqueId) : m_redPacketId(0),
                                                                                    m_userId(userId),
                                                                                    m_count(count),
                                                                                    m_amount(amount),
                                                                                    m_finishFlag(0),
                                                                                    m_uniqueId(uniqueId),
                                                                                    m_version(1) {}

    std::vector<RedPacketLine> &RedPacket::getList() {
        return m_list;
    }

    void RedPacket::setList(std::vector<RedPacketLine> &list) {
        m_list = list;
    }

    RedPacket::RedPacket(RedPacket &redPacket) {
        m_redPacketId = redPacket.getRedPacketId();
        m_userId = redPacket.getUserId();
        m_count = redPacket.getCount();
        m_amount = redPacket.getAmount();
        m_finishFlag = redPacket.getFinishFlag();
        std::string m_uniqueId = redPacket.getUniqueId();
        m_version = redPacket.getVersion();
        m_list = redPacket.getList();
    }

    RedPacketLine::RedPacketLine() : l_version(1),
                                     l_receiveAmount(0),
                                     l_receiveUserId(-1),
                                     l_userId(0),
                                     l_redPacketId(0),
                                     l_id(0),
                                     l_backFlag(0) {}

    RedPacketLine::RedPacketLine(int redPacketId, int userId, int receiveAmount) : l_version(1),
                                                                                   l_receiveAmount(receiveAmount),
                                                                                   l_receiveUserId(-1),
                                                                                   l_userId(userId),
                                                                                   l_redPacketId(redPacketId),
                                                                                   l_id(0),
                                                                                   l_backFlag(0) {}

    int &RedPacketLine::getId() {
        return l_id;
    }

    int &RedPacketLine::getRedPacketId() {
        return l_redPacketId;
    }

    int &RedPacketLine::getUserId() {
        return l_userId;
    }

    int &RedPacketLine::getReceiveUserId() {
        return l_receiveUserId;
    }

    int &RedPacketLine::getReceiveAmount() {
        return l_receiveAmount;
    }

    void RedPacketLine::setReceiveAmount(int amount) {
        l_receiveAmount = amount;
    }

    int RedPacketLine::getBackFlag() {
        return l_backFlag;
    }

    int &RedPacketLine::getVersion() {
        return l_version;
    }

    RedPacketLine::RedPacketLine(int lId, int lRedPacketId, int lUserId, int lReceiveUserId, int lReceiveAmount,
                                 int lBackFlag, int lVersion) : l_id(lId), l_redPacketId(lRedPacketId),
                                                                l_userId(lUserId), l_receiveUserId(lReceiveUserId),
                                                                l_receiveAmount(lReceiveAmount), l_backFlag(lBackFlag),
                                                                l_version(lVersion) {}

    void RedPacket::splitRedPacket(RedPacket *redPacket) {
        int nTotalAmount = redPacket->getAmount();
        if (nTotalAmount <= 0)
            throw std::logic_error("Amount of red packet should > 0!");
        if (redPacket->getCount() <= 0)
            throw std::logic_error("Count of red packet should > 0!");
        if (nTotalAmount < redPacket->getCount())
            throw std::logic_error("Amount of one red packet should > 1 fen!");

        std::set<int> mValue;

        std::default_random_engine e(time(nullptr));
        std::uniform_int_distribution<int> u(0, 999);
        mValue.insert(0);
        mValue.insert(nTotalAmount);
        while (mValue.size() < redPacket->getCount() + 1) {
            int temp = u(e) % (nTotalAmount - 1) + 1;
            if (mValue.find(temp) != mValue.end())//make sure the slit point is a new point
            {
                continue;
            }
            mValue.insert(temp);//put into the map
        }

        auto list = std::vector<RedPacketLine>();

        auto itor = mValue.begin();
        auto itor_1 = mValue.begin();

        itor++;
        while (itor != mValue.end()) {
            itor_1 = --itor;
            itor++;
            list.push_back(
                    RedPacketLine(redPacket->getRedPacketId(), redPacket->getUserId(), *itor - *itor_1));
            itor++;
        }

        redPacket->setList(list);
    }

    int RedPacket::createRedPacket(sql::Connection *con) {
        sql::Statement *state;
        sql::ResultSet *resultSet;

        state = con->createStatement();
        char mysql[] = "insert into red_packet_t(unique_id,user_id,count,amount,create_time,last_update_time) values ('%s','%d','%d','%d',now(),now())";
        char mysqlBuf[1024];
        std::sprintf(mysqlBuf, mysql, this->getUniqueId().data(), this->getUserId(), this->getCount(),
                     this->getAmount());
        int result = state->executeUpdate(mysqlBuf);
        if (result == 1) {
            resultSet = state->executeQuery("select last_insert_id() as id");
            while (resultSet->next()) {
                this->m_redPacketId = resultSet->getInt("id");
            }
            resultSet->close();
        }
        state->close();
        if (result != 1) {
            throw logic_error("Insert Red Packet Error");
        }
        return 1;
    }

    int RedPacket::createRedPacketLineList(sql::Connection *con) {
        sql::Statement *state;

        state = con->createStatement();
        int result = 0;
        auto iter = m_list.begin();
        while (iter != m_list.cend()) {
            char mysql[] = "insert into red_packet_line_t(red_packet_id,user_id,receive_user_id,receive_amount,create_time,last_update_time) values ('%d','%d','%d','%d',now(),now())";
            char mysqlBuf[1024];
            std::sprintf(mysqlBuf, mysql, iter->getRedPacketId(), iter->getUserId(), iter->getReceiveUserId(),
                         iter->getReceiveAmount());
            result = state->executeUpdate(mysqlBuf);
            if (result != 1) {
                break;
            }
            iter++;
        }
        state->close();
        if (result != 1) {
            throw logic_error("Insert Red Packet Line Error");
        }
        return 1;
    }

    RedPacketLine RedPacketLine::getAndUpdateRedPacketLine(int redPacketId, int receiveUserId, sql::Connection *con) {
        Statement *state;
        state = con->createStatement();
        char mysql[] = "update red_packet_line_t set receive_user_id = %d,version=version+1,last_update_time=now() where red_packet_id=%d and receive_user_id=-1 and version=1 limit 1";
        char mysqlBuf[1024];
        std::sprintf(mysqlBuf, mysql, receiveUserId, redPacketId);
        int result = state->executeUpdate(mysqlBuf);
        int i = 0;
        RedPacketLine *redPacketLine = nullptr;
        if (result == 1) {
            char mysql2[] = "select * from  red_packet_line_t where red_packet_id=%d and receive_user_id=%d";
            char mysqlBuf2[1024];
            ResultSet *resultSet;
            std::sprintf(mysqlBuf2, mysql2, redPacketId, receiveUserId);
            resultSet = state->executeQuery(mysqlBuf2);
            while (resultSet->next()) {
                redPacketLine = new RedPacketLine(
                        resultSet->getInt("id"),
                        resultSet->getInt("red_packet_id"),
                        resultSet->getInt("user_id"),
                        resultSet->getInt("receive_user_id"),
                        resultSet->getInt("receive_amount"),
                        resultSet->getInt("back_flag"),
                        resultSet->getInt("version")
                        );
                i++;
                if (i > 1) {
                    break;
                }
            }
            resultSet->close();
        }
        state->close();
        if (i > 1) {
            throw logic_error("Duplicate RedPacketLine");
        } else if (i <= 0) {
            throw logic_error("RedPacketLine not found");
        } else {
            return *redPacketLine;
        }

    }
}