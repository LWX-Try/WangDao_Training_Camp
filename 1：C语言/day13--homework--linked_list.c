//#include"day13--homework--linked_list.h"
//
//// 创建一个空的链表
//LinkedList *create_linked_list()
//{
//	return (LinkedList *)calloc(1, sizeof(LinkedList));					//创建一个LinkList数据类型的指针变量，申请一块地址，用来LinkList的数据。
//}
//
//// 销毁链表
//void destroy_linked_list(LinkedList *list)
//{
//	//销毁链表，先销毁结点，在销毁链表结构。
//	Node *curr = list->head;
//	while (curr!=NULL)												//如果这个链表里面有结点，销毁结点。
//	{
//		Node *next = curr->next;
//		free(curr);
//
//		curr = next;
//	}
//
//	//运行到这里，则说明结点都已经摧毁完了。销毁链表结构。
//	free(list);
//}
//
//// 头插法
//bool add_before_head(LinkedList *list, DataType new_data)
//{
//	Node *new_node = malloc(sizeof(Node));
//	if (new_node == NULL)	return false;
//
//	//运行到这里则说明申请成功了
//	new_node->data = new_data;
//	new_node->next = list->head;
//	list->head = new_node;
//
//	if (list->tail == NULL)		//如果这个链表里面原来一个节点都没有，那么将tail指向new_node。
//		list->tail = new_node;
//
//	list->size++;
//
//	return true;
//}
//
//// 尾插法
//bool add_behind_tail(LinkedList *list, DataType new_data)
//{
//	if (list == NULL)	return false;						//如果链表为空，直接返回。
//
//	Node *new_node = malloc(sizeof(Node));
//	if (new_node == NULL)	return false;					//创建节点，并检查。
//
//	new_node->data = new_data;
//	new_node->next = NULL;							//先往节点里面填充数据。
//	if (list->tail == NULL)							//如果原来链表结构为空。
//	{
//		list->tail = new_node;
//		list->head = new_node;
//		list->size++;
//		return true;
//	}
//
//	list->tail->next = new_node;						//让原来最后一个节点的next，指向new_node。
//	list->tail = new_node;							//让tail指向new_node。
//
//	list->size++;
//
//	return true;
//}
//
//// 根据索引插入一个新结点
//bool add_by_idx(LinkedList *list, int idx, DataType new_data)
//{
//	if (list == NULL)		return false;				//如果链表为空，直接返回。
//
//	if (idx<0 || idx>list->size)		return false;
//	if (idx == 0)			return add_before_head(list, new_data);				//如果是头插。
//	if (idx == list->size)	return add_behind_tail(list, new_data);				//如果是尾插。
//
//	Node *new_node = malloc(sizeof(Node));
//	if (new_node == NULL)	return false;					//创建节点，并检查。
//
//	new_node->data = new_data;
//
//	Node *curr_node = list->head;
//	for (int i = 0; i < idx-1; i++)
//	{
//		curr_node = curr_node->next;
//	}
//
//	new_node->next = curr_node->next;
//	curr_node->next = new_node;
//	list->size++;
//
//	return true;
//}
//
//// 根据索引搜索一个结点
//Node *search_by_idx(LinkedList *list, int idx)
//{
//	if (list == NULL)				return NULL;
//
//	if (idx<0 || idx>=list->size)		return NULL;
//
//	Node *curr = list->head;
//
//	for (int i = 0; i < idx; i++)
//	{
//		curr = curr->next;
//	}
//
//	return curr;
//}
//
//// 根据数据搜索一个结点
//Node *search_by_data(LinkedList *list, DataType data)
//{
//	if (list == NULL)	return NULL;
//
//	Node *curr = list->head;
//
//	while (curr != NULL)
//	{
//		if (curr->data == data)
//		{
//			break;
//		}
//		curr = curr->next;
//	}
//	if (curr == NULL)	return NULL;				//没有找到这个数据。
//
//	return curr;
//}
//
//// 根据数据删除一个结点
//bool delete_by_data(LinkedList *list, DataType data)
//{
//	if (list == NULL)	return false;
//
//	if (list->head->data == data)				//如果要删除第一个结点。
//	{
//		Node *temp = list->head;
//		list->head = list->head->next;
//		if (list->head == NULL)	list->tail = NULL;			//如果这个链表结构里面只有一个结点。
//		free(temp);
//		list->size--;
//		return true;
//	}
//
//
//	//查找要删除的结点。（从第二个结点开始查找。）
//	Node *curr = list->head;
//	Node *pre_node = NULL;
//
//	while (curr != NULL)
//	{
//		if (curr->data == data)
//			break;
//		pre_node = curr;
//		curr = curr->next;
//	}
//	if (curr == NULL)	return false;				//没有找到这个数据。
//
//	pre_node->next = pre_node->next->next;
//	if (curr->next == NULL)	 list->tail = pre_node;
//	free(curr);
//	list->size--;
//
//	return true;
//}
//
//
//
//// 扩展: 根据索引删除一个结点
//bool delete_by_idx(LinkedList *list, int idx)
//{
//	if (list == NULL)	return false;
//
//	if (idx < 0 || idx >= list->size)		return false;
//
//	Node *curr = list->head;
//	Node *pre_node = NULL;
//
//	for (int i = 0; i < idx; i++)
//	{
//		pre_node = curr;
//		curr = curr->next;
//	}
//
//	if (pre_node == NULL)					//如果idx=0，那么删除头节点。
//	{
//		list->head = curr->next;
//		if (list->head == NULL)			//如果这个链表结构里面只有一个结点。
//			list->head = NULL;
//	}
//	else
//	{
//		pre_node->next = curr->next;
//		if (curr->next == NULL)			//如果删除最后一个结点。	
//			list->tail = pre_node;
//	}
//
//
//
//	free(curr);
//	list->size--;
//
//	return true;
//}
//
//
//
//
//// 打印单链表 格式为：1 -> 2 -> 3 ->...
//void print_list(LinkedList *list)
//{
//	if (list == NULL)	return false;
//
//	Node *curr = list->head;
//	while (curr != NULL)
//	{
//		printf("%d", curr->data);
//		if (curr->next != NULL)
//			printf(" -> ");
//		curr = curr->next;
//	}
//
//	printf("\n");
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
//
