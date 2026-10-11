//#pragma once
//#ifndef DAY14_HOMEWORK_CHECK_LOOP_OF_HASH_H
//#define DAY14_HOMEWORK_CHECK_LOOP_OF_HASH_H
//
////你可以基于下面头文件来实现哈希表：
//
//#include <stdint.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <stdbool.h>
//
//#define CAPACITY 10  // 哈希表的底层数组长度是10
//
//typedef struct node {
//	int data;
//	struct node *next;
//}Node;	// 哈希表当中存储的链表结点类型
//
//// 此哈希表只存储键,不存储value
//// key值存储链表结点的指针
//typedef Node *KeyType;
//
//// 键值对结点，此时无需存储值了
//typedef struct node_s {
//	KeyType key;    // 键
//	struct node_s *next;
//} HashNode; // 键值对结点类型
//
//typedef struct {
//	HashNode *buckets[CAPACITY];
//	uint32_t hash_seed;
//} HashMap;    // 哈希表结构体类型
//
//// 创建一个固定容量的哈希表
//HashMap *hashmap_create();
//// 销毁哈希表
//void hashmap_destroy(HashMap *map);
//
////尝试将链表结点的指针(地址)插入哈希表
////若发现结点已存入哈希表, 则函数返回true
////若结点未存入, 则将结点地址存入哈希表并返回false
//bool hashmap_put(HashMap *map, KeyType key);
//
////构建有环单链表的代码如下：
//void insert_behind_tail(Node **head, int data);
//
//
//
//#endif // !DAY14_HOMEWORK_CHECK_LOOP_OF_HASH_H
