//#include"day14--homework--check_loop_of_hash.h"
//
////这个是哈希过程。
//static uint32_t hash(const void *key, int len, uint32_t seed) {
//    const uint32_t m = 0x5bd1e995;
//    const int r = 24;
//    uint32_t h = seed ^ len;
//    const unsigned char *data = (const unsigned char *)key;
//
//    while (len >= 4) {
//        uint32_t k = *(uint32_t *)data;
//        k *= m;
//        k ^= k >> r;
//        k *= m;
//        h *= m;
//        h ^= k;
//        data += 4;
//        len -= 4;
//    }
//
//    switch (len) {
//    case 3: h ^= data[2] << 16;
//    case 2: h ^= data[1] << 8;
//    case 1: h ^= data[0];
//        h *= m;
//    };
//
//    h ^= h >> 13;
//    h *= m;
//    h ^= h >> 15;
//
//    return h;
//}
//
//// 创建一个固定容量的哈希表
//HashMap *hashmap_create()
//{
//    HashMap *map = calloc(1, sizeof(HashMap));
//    if (map == NULL)
//    {
//        printf("申请失败！\n");
//        return NULL;
//    }
//
//    map->hash_seed = (uint32_t)1;
//
//    return map;
//}
//
//// 销毁哈希表
//void hashmap_destroy(HashMap *map)
//{
//    if (map == NULL)   return;
//    for (int i = 0; i < CAPACITY; i++)
//    {
//        HashNode *curr = map->buckets[i];
//        while (curr != NULL)
//        {
//            HashNode *next = curr->next;
//
//            free(curr);
//
//            curr = next;
//        }
//
//        map->buckets[i] = NULL;
//    }
//
//    free(map);
//}
//
////尝试将链表结点的指针(地址)插入哈希表
////若发现结点已存入哈希表, 则函数返回true
////若结点未存入, 则将结点地址存入哈希表并返回false
//bool hashmap_put(HashMap *map, KeyType key)
//{
//    if (map == NULL)
//        return false;
//
//    //第一步：对传入的键进行哈希变换，得到一个int类型的整数。
//    int hash_num = hash(key, sizeof(KeyType), map->hash_seed);
//
//    //第二步：对这个整数进行数组长度取余。得到数组下标。
//    int index = hash_num % CAPACITY;
//
//    //第三步：去这个下标，遍历这个链表。
//    HashNode *curr = map->buckets[index];
//    while (curr != NULL)
//    {
//        if (curr->key == key)
//            return true;
//        curr = curr->next;
//    }
//
//    //运行到这里，说明index下标对应的链表中，没有这个键。需要将这个键进行头插。
//    HashNode *new_node = calloc(1, sizeof(HashNode));
//    if (new_node == NULL)
//    {
//        printf("申请失败！\n");
//        return false;
//    }
//    new_node->key = key;
//    new_node->next = map->buckets[index];
//    map->buckets[index] = new_node;
//    
//    return false;
//}
//
//// 实现尾插法
//void insert_behind_tail(Node **head, int data) 
//{
//    // 1.新建结点
//    Node *new_node = malloc(sizeof(Node));
//    if (new_node == NULL) {
//        printf("malloc failed in insert_behind_tail.\n");
//        exit(1);
//    }
//    // 初始化新结点
//    new_node->next = NULL;
//    new_node->data = data;
//
//    // 2.判断尾插前链表是否为空
//    if (*head == NULL) {
//        // 链表尾插之前为空
//        *head = new_node;
//        return;
//    }
//    // 链表尾插时 不为空
//    Node *tail = *head;
//    while (tail->next != NULL) {
//        tail = tail->next;
//    }	// while循环结束时, curr指向当前的尾结点
//    tail->next = new_node;
//}
//
