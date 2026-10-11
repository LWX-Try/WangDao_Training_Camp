//#ifndef DAY14__HOMEWOEK__HASHMAP_H
//#define DAY14__HOMEWOEK__HASHMAP_H
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<string.h>
//
////在哈希表中，存储的是键值对。
//typedef char *KeyType;
//typedef char *ValueType;
//
//typedef struct KeyValueNode
//{
//	KeyType key;
//	ValueType value;
//	struct KeyValueNode *next;
//}KeyValueNode;
//
//#define HASHMAP_INIT_CAPACITY	20
//
////哈希表是由：数组+链表，组成的。
//typedef struct HashMap
//{
//	//定义一个数组，这个数组是结构体指针数组。里面存放的都是一个一个KeyValueNode类型的指针。
//	KeyValueNode *table[HASHMAP_INIT_CAPACITY];
//
//	//在哈希表中，需要存储数组的长度。
//	int length;
//}HashMap;
//
////哈希表的创建，销毁，打印。
//HashMap *hashmap_create();
//void hashmap_destory(HashMap *map);
//void hashmap_printf(HashMap *map);
//
////哈希表的增删改查。
//
//#endif // !DAY14--HOMEWOEK--HASHMAP_H
