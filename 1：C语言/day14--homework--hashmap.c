//#include"day14--homework--hashmap.h"
//#include<stdint.h>
//
////这个是哈希过程。
//static uint32_t hash(const void *key, int len, uint32_t seed) {
//	const uint32_t m = 0x5bd1e995;
//	const int r = 24;
//	uint32_t h = seed ^ len;
//	const unsigned char *data = (const unsigned char *)key;
//
//	while (len >= 4) {
//		uint32_t k = *(uint32_t *)data;
//		k *= m;
//		k ^= k >> r;
//		k *= m;
//		h *= m;
//		h ^= k;
//		data += 4;
//		len -= 4;
//	}
//
//	switch (len) {
//	case 3: h ^= data[2] << 16;
//	case 2: h ^= data[1] << 8;
//	case 1: h ^= data[0];
//		h *= m;
//	};
//
//	h ^= h >> 13;
//	h *= m;
//	h ^= h >> 15;
//
//	return h;
//}
//
////创建哈希表。
//HashMap *hashmap_create()
//{
//	HashMap *map = calloc(1, sizeof(HashMap));
//	// [KeyValueNode *, KeyValueNode *, KeyValueNode *, ...]			里面都是一个一个的KeyValueNode类型的指针。
//	
//	if (map == NULL)
//	{
//		printf("创建失败！\n");
//		return NULL;
//	}
//
//	map->length = HASHMAP_INIT_CAPACITY;
//
//	return map;
//}
//
////往哈希表里面放键值对。				如果数据存在，就直接覆盖；如果数据不存在，就直接头插。
//ValueType hashmap_put(HashMap *map, KeyType key, ValueType value)
//{
//	//第一步：将键通过哈希算法，变化为一个int类型的数字。
//	uint32_t hash_num = hash(key, strlen(key), 1);
//
//	//第二步：对这个int类型的数组进行数组长度取余，得到对应的下标。
//	int index = hash_num % map->length;
//
//	//第三步：查找在这个下标的数组中，是否有结点。
//	//		  如果没有，直接将结点挂到上面。
//	//		  如果有，检查是否重复。若重复，覆盖数据；若不重复，进行头插。
//	KeyValueNode *curr = map->table[index];
//
//	if (curr != NULL)
//	{
//		while (1)
//		{
//			if (strcmp(curr->key, key) == 0)
//			{
//				ValueType old_value = curr->value;
//				curr->value = value;
//				return old_value;
//			}
//				
//			curr = curr->next;
//
//			if (curr == NULL)
//				break;
//
//		}
//	}
//
//	//走到这里，说明，要么这下标下的链表里面有数据，但是数据不相同；要么这个链表里面没有数据。
//	KeyValueNode *new_node = calloc(1, sizeof(KeyValueNode));
//	if (new_node == NULL)
//	{
//		printf("申请失败！\n");
//		exit(EXIT_FAILURE);
//	}
//
//	new_node->key = key;
//	new_node->value = value;
//	new_node->next = map->table[index];				//map->table[index]是一个指针，指向第一个键值对。
//
//	map->table[index] = new_node;
//
//	return value;
//}
//
//ValueType hashmap_get(HashMap *map, KeyType key)
//{
//	//第一步：先对键进行哈希变换。变为一个int类型的整数。
//	uint32_t hash_num = hash(key, strlen(key), 1);
//
//	//第二步：对这个int类型的整数，进行数组长度取余。得到数组下标
//	uint32_t index = hash_num % map->length;
//
//	//第三步：找到下标对应的位置。进行遍历。
//	KeyValueNode *curr = map->table[index];
//	while (curr != NULL)
//	{
//		if (strcmp(curr->key,key)==0)
//			return curr->value;
//
//		curr = curr->next;
//	}
//
//	return NULL;
//}
//
//bool hashmap_contains(HashMap *map, KeyType key)
//{
//	return hashmap_get == NULL;
//}
//
//bool hashmap_remove(HashMap *map, KeyType key)
//{
//	//第一步：先对传进来的键进行哈希变换。得到一个int类型的整数。
//	uint32_t hash_num = hash(key, strlen(key), 1);
//
//	//第二步：对得到的整数，进行数组长度取余。得到数组的下标。
//	uint32_t index = hash_num % map->length;
//
//	//第三步：去这个数组的下标，进行遍历。
//	KeyValueNode *curr = map->table[index];
//	KeyValueNode *pre = NULL;
//
//	while (curr != NULL)
//	{
//		if (strcmp(curr->key, key) == 0)
//			break;
//
//		pre = curr;
//		curr = curr->next;
//	}
//	if (curr == NULL)				//如果curr==NULL，则说明走到了最后，没有找到这个数据。		如果index对应的数组元素中，一个节点也没有，那么不进入while循环。
//		return false;
//
//	//运行到这里，则说明存在这个值，找到了这个值。
//
//	//如果这个pre==NULL，那么说明，第一个节点就是我要删除的节点。
//	if (pre == NULL)
//	{
//		map->table[index] = curr->next;
//		free(curr);
//		return true;
//	}
//
//
//	pre->next = curr->next;
//	free(curr);
//	return true;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//////摧毁哈希表。
////void hashmap_destory(HashMap *map)
////{
////	KeyValueNode *curr = map;
////	for (int i = 0; i < map->length - 1; i++)
////	{
////		if (curr != NULL)
////		{
////
////		}
////
////
////	}
////
////}
////
//////打印哈希表。
////void hashmap_printf(HashMap *map);
//
//
//
//
//
