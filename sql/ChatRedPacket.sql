/*
 Navicat Premium Data Transfer

 Source Server         : localhost-mysql
 Source Server Type    : MySQL
 Source Server Version : 50720
 Source Host           : localhost:3306
 Source Schema         : ChatRedPacket

 Target Server Type    : MySQL
 Target Server Version : 50720
 File Encoding         : 65001

 Date: 17/10/2019 16:16:42
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for red_packet_line_t
-- ----------------------------
DROP TABLE IF EXISTS `red_packet_line_t`;
CREATE TABLE `red_packet_line_t` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `red_packet_id` int(11) DEFAULT NULL,
  `user_id` int(11) DEFAULT NULL,
  `receive_user_id` int(11) DEFAULT NULL,
  `receive_amount` int(20) DEFAULT '0',
  `back_flag` int(1) DEFAULT '0',
  `create_time` datetime DEFAULT NULL,
  `last_update_time` datetime DEFAULT NULL,
  `version` int(11) DEFAULT '1',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=323549 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Table structure for red_packet_t
-- ----------------------------
DROP TABLE IF EXISTS `red_packet_t`;
CREATE TABLE `red_packet_t` (
  `red_packet_id` int(11) NOT NULL AUTO_INCREMENT,
  `user_id` int(11) DEFAULT NULL,
  `count` int(6) DEFAULT NULL,
  `amount` int(20) DEFAULT '0',
  `finish_flag` int(1) DEFAULT '0',
  `unique_id` varchar(500) NOT NULL,
  `create_time` datetime DEFAULT NULL,
  `last_update_time` datetime DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  `version` int(11) DEFAULT '1',
  PRIMARY KEY (`red_packet_id`),
  UNIQUE KEY `uniqId_index` (`unique_id`)
) ENGINE=InnoDB AUTO_INCREMENT=26 DEFAULT CHARSET=utf8mb4;

-- ----------------------------
-- Table structure for user_t
-- ----------------------------
DROP TABLE IF EXISTS `user_t`;
CREATE TABLE `user_t` (
  `user_id` int(11) NOT NULL AUTO_INCREMENT,
  `user_name` varchar(500) DEFAULT NULL,
  `amount` int(20) DEFAULT '0',
  PRIMARY KEY (`user_id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4;

SET FOREIGN_KEY_CHECKS = 1;
