#include"day14--homework--hashmap_expansion.h"

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









