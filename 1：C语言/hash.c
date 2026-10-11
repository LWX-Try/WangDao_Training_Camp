//#include"hash.h"
//
////这个是哈希过程。
//static uint32_t hash(const void *key, int len, uint32_t seed) 
//{
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
//// 创建一个固定容量的哈希表
//HashMap *hashmap_create()
//{
//	HashMap *map = calloc(1, sizeof(HashMap));
//	if (map == NULL)
//		return NULL;
//
//	map->hash_seed = 1;
//	
//	return map;
//}
//
//// 销毁一个哈希表
//void hashmap_destroy(HashMap *map)
//{
//	if (map == NULL)
//		return;
//
//	//以下代码是释放所有节点。
//	
//	for (int i = 0; i < HASHMAP_CAPACITY; i++)
//	{
//		KeyValueNode *curr = map->buckets[i];
//
//		while (curr != NULL)
//		{
//			KeyValueNode *temp = curr->next;
//			free(curr);
//			curr = temp;
//		}
//
//		map->buckets[i] = NULL;
//	}
//
//	free(map);
//}
//
//// 插入一个键值对
//ValueType hashmap_put(HashMap *map, KeyType key, ValueType val)
//{
//	//第一步：对输入的键进行哈希变换。得到一个int类型的整数。
//	uint32_t hash_num = hash(key, strlen(key), map->hash_seed);
//
//	//第二步：对变换后的整数，进行数组长度取余。得到数组的下标。
//	uint32_t index = hash_num % HASHMAP_CAPACITY;
//
//	//第三步：检查这个下标下的链表，如果链表中存在一个和键相同的键值对，更新。如果没有，进行头插。
//	KeyValueNode *curr = map->buckets[index];
//
//	while (curr != NULL)
//	{
//		if (strcmp(curr->key, key) == 0)			//如果之前存的有这个键，对这个值进行更新，并且返回旧的值。
//		{
//			ValueType old_value = curr->val;
//			curr->val = val;
//			return old_value;
//		}
//
//		curr = curr->next;
//	}
//
//	//运行到这里，则说明，index对应的链表中，没有键为key的数据。需要创建节点，把这个节点进行头插。
//	KeyValueNode *new_node = calloc(1, sizeof(KeyValueNode));
//	if (new_node == NULL)
//	{
//		printf("申请失败！\n");
//		return NULL;
//	}
//	new_node->key = key;
//	new_node->val = val;
//	new_node->next = map->buckets[index];
//	map->buckets[index] = new_node;
//
//	return val;
//}
//
//// 查询一个键值对
//ValueType hashmap_get(HashMap *map, KeyType key)
//{
//	//第一步：对这个键进行哈希处理，得到一个int类型的整数。
//	uint32_t hash_num = hash(key, strlen(key), map->hash_seed);
//
//	//第二步：对这个整数进行数组长度取余，得到数组的下标。
//	uint32_t index = hash_num % HASHMAP_CAPACITY;
//
//	//第三步：对index这个下标，进行链表遍历。
//	KeyValueNode *curr = map->buckets[index];
//
//	while (curr != NULL)
//	{
//		if (strcmp(curr->key,key)==0)
//			return curr->val;
//		curr = curr->next;
//	}
//
//	//运行到这，则说明遍历对应链表后，没有发现这个键值对。
//	printf("未发现该键值对！\n");
//	return NULL;
//}
//// 删除某个键值对
//bool hashmap_remove(HashMap *map, KeyType key)
//{
//	//第一步：对这个键进行哈希处理，得到一个int类型的整数。
//	uint32_t hash_num = hash(key, strlen(key), map->hash_seed);
//
//	//第二步：对这个整数进行数组长度取余，得到数组的下标。
//	uint32_t index = hash_num % HASHMAP_CAPACITY;
//
//	//第三步：对index这个下标，进行链表遍历。
//	KeyValueNode *curr = map->buckets[index];
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
//
//	if (curr == NULL)
//	{
//		printf("未找到该键值对，请检查。\n");
//		return false;
//	}
//		
//	if (pre == NULL)								//进到里面则说明：我要删除的数据，就是第一个数据。特殊处理。
//	{
//		map->buckets[index] = curr->next;
//		free(curr);
//		return true;
//	}
//
//	pre->next = curr->next;
//	free(curr);
//	return true;
//}
//
