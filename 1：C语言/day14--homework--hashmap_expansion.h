//用动态数组和链表，基于拉链法来设计哈希桶，实现一个动态哈希表。要求能够基于负载因子，进行自动扩容。

//可以基于以下头文件来实现：
#pragma once
#ifndef DYNAMIC_HASHMAP_H
#define DYNAMIC_HASHMAP_H

typedef char *KeyType;
typedef char *ValueType;

#include <stdint.h>
#include <stdbool.h>

typedef struct node_s {
    KeyType key;
    ValueType val;
    struct node_s *next;
} KeyValueNode;

typedef struct {
    KeyValueNode **buckets;		// 此时哈希桶是一个动态数组，指向char*元素的指针，所以是一个二级指针
    int size;				    // 键值对的个数
    int capacity;		        	// 数组的长度
    uint32_t hash_seed;	    	// 哈希函数需要的种子值
} DynamicHashMap;

// 创建一个固定容量的哈希表
DynamicHashMap *hashmap_create();
// 销毁一个哈希表
void hashmap_destroy(DynamicHashMap *map);
// 插入一个键值对
ValueType hashmap_put(DynamicHashMap *map, KeyType key, ValueType val);
// 查询一个键值对
ValueType hashmap_get(DynamicHashMap *map, KeyType key);
// 删除某个键值对
bool hashmap_remove(DynamicHashMap *map, KeyType key);

#endif // !DYNAMIC_HASHMAP_H




//注意：该哈希表底层的数组是可以自动扩容的，键值对元素的类型是字符串类型。