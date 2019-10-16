//
// Created by HuangZhongyang on 2019/10/14.
//
#include <iostream>
#include <vector>
#include "../sql/connection_pool.h"
#include "cppconn/connection.h"
#include "cppconn/resultset.h"

#ifndef CHATREDPACKET_REDPACKET_H
#define CHATREDPACKET_REDPACKET_H
#if DEBUG || _DEBUG
#define LOG(x) std::cout << x
#else
#define LOG(x)
#endif

namespace crp {

    class RedPacketLine {
    public :
        RedPacketLine(int redPacketId, int userId, int receiveAmount);

        RedPacketLine();

        RedPacketLine(int lId, int lRedPacketId, int lUserId, int lReceiveUserId, int lReceiveAmount, int lBackFlag,
                      int lVersion);

        ~RedPacketLine() = default;

        int &getId();

        int &getRedPacketId();

        int &getUserId();

        int &getReceiveUserId();

        int &getReceiveAmount();

        void setReceiveAmount(int amount);

        int getBackFlag();

        int &getVersion();

        static RedPacketLine getAndUpdateRedPacketLine(int redPacketId, int receiveUserId, sql::Connection *con);

    private:
        int l_id;
        int l_redPacketId;
        int l_userId;
        int l_receiveUserId;
        int l_receiveAmount;
        int l_backFlag;
        int l_version;
    };

    class RedPacket {
    public:
        RedPacket(int redPacketId, int userId, int count, int amount,
                  std::string &uniqueId);

        RedPacket(int userId, int count, int amount,
                  std::string uniqueId);

        RedPacket(RedPacket &redPacket);

        ~RedPacket() = default;

        int &getRedPacketId();

        int &getUserId();

        int &getCount();

        int &getAmount();

        int getFinishFlag();

        std::string &getUniqueId();

        int &getVersion();

        std::vector<RedPacketLine> &getList();

        void setList(std::vector<RedPacketLine> &list);

        static void splitRedPacket(RedPacket *redPacket);

        int createRedPacket(sql::Connection *con);

        int createRedPacketLineList(sql::Connection *con);

    protected:

    private:
        int m_redPacketId;
        int m_userId;
        int m_count;
        int m_amount;
        int m_finishFlag;
        std::string m_uniqueId;
        int m_version;

        std::vector<RedPacketLine> m_list;
    };

}
#endif //CHATREDPACKET_REDPACKET_H
