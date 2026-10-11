//#include"day12--homework--linked_list.h"
//
//// 创建一个空的链表
//LinkedList *create_linked_list()
//{
//	//以下两种方法都是创建了链表结构，没有创建结点。
//
//	//方法一：
//	LinkedList *list = malloc(sizeof(LinkedList));
//	list->head = NULL;
//	list->tail = NULL;
//	list->size = 0;
//
//	return list;
//
//	//方法二：
//	//return calloc(1, sizeof(LinkedList));
//}
//
//// 销毁链表
//void destroy_linked_list(LinkedList *list)
//{
//	//销毁链表时，先销毁结点，再销毁链表结构。
//	Node *curr = list->head;
//	while (curr != NULL)
//	{
//		Node *temp = curr->next;
//		free(curr);
//		curr = temp;
//	}
//	free(list);
//}
//
//// 头插法
//bool add_before_head(LinkedList *list, DataType new_data)
//{
//	Node *new_node = calloc(1, sizeof(Node));
//	if (new_node == NULL)
//	{
//		printf("申请失败！\n");
//		return false;
//	}
//
//	new_node->next = list->head;
//	list->head = new_node;
//	new_node->data = new_data;
//	list->size++;
//
//	if (list->tail == NULL)
//	{
//		list->tail = new_node;
//	}
//	
//	return true;
//}
//
//// 尾插法
//bool add_behind_tail(LinkedList *list, DataType new_data)
//{
//	Node *new_node = malloc(sizeof(Node));
//	if (new_node == NULL)
//	{
//		printf("申请失败！\n");
//		return false;
//	}
//	new_node->data = new_data;
//	new_node->next = NULL;
//
//	if (list->tail == NULL)									//当list->tail == NULL的时候，则说明，这个链表原来一个结点也没有。
//	{
//		list->head = new_node;
//		list->tail = new_node;
//	}
//	else
//	{
//		list->tail->next = new_node;
//		list->tail = new_node;
//	}
//
//	list->size++;
//
//	return true;
//}
//
//// 根据索引插入一个新结点
//bool add_by_idx(LinkedList *list, int idx, DataType new_data)			//注意：长度size是从1开始的，索引idx是从0开始的。
//{
//	//检查idx是否合法。size的值是从1开始的，idx是从0开始的。所以idx的取值是[0，size]。
//	if (idx<0 || idx>list->size)
//	{
//		printf("索引非法！\n");
//		return false;
//	}
//	if (idx == 0) return add_before_head(list,new_data);									//因为idx是从0开始的，所以当idx为1的时候，实际上是插到的一个和第二个之间。
//	if (idx == list->size) return add_behind_tail(list, new_data);
//
//	Node *new_node = malloc(sizeof(Node));
//	if (new_node == NULL)
//	{
//		printf("申请失败！\n");
//		return false;
//	}
//	new_node->data = new_data;
//									
//	Node *curr = list->head;
//	for (int i = 0; i < idx - 1; i++)										
//	{
//		curr = curr->next;
//	}
//
//	new_node->next = curr->next;
//	curr->next = new_node;
//	list->size++;
//
//	return true;
//}
//
//// 根据索引搜索一个结点
//Node *search_by_idx(LinkedList *list, int idx)					//有索引一定要检查索引是否合法。
//{
//	if (idx<0 || idx>=list->size)								//当idx==list->size的时候，这时候是尾插，如果是搜索结点的话要写成idx>=list->size，因为idx的取值范围是[0，size-1]
//	{
//		printf("索引非法！\n");
//		return NULL;
//	}
//
//	Node *temp = list->head;									
//	for (int i = 0; i < idx; i++)
//	{
//		temp = temp->next;
//	}
//
//	return temp;
//}
//
//// 根据数据搜索一个结点
//Node *search_by_data(LinkedList *list, DataType data)
//{
//	Node *temp = list->head;
//
//	while (temp != NULL)
//	{
//		if (temp->data == data)
//			return temp;
//		temp = temp->next;
//	}
//
//	printf("未找到该数据！\n");
//	return NULL;
//}
//
//// 根据数据删除一个结点
//bool delete_by_data(LinkedList *list, DataType data)
//{
//	if (list->head == NULL)	return false;											//首先，判断链表结构里面是否有结点。
//
//	if (list->head->data == data)												//如果，我要删除的数据就是第一个结点。
//	{
//		Node *del = list->head;
//		list->head = list->head->next;
//		if (list->head == NULL)	list->tail = NULL;							//如果，我要删除的数据就是第一个结点。并且，该链表结构里面只有这一个结点。
//		free(del);
//		list->size--;
//		return true;
//	}
//
//	//如果要删除的数据不是第一个结点。那么从第二个结点开始所过。
//	Node *pre_node = list->head;
//	Node *curr = list->head->next;
//	while (curr != NULL&& curr->data != data)
//	{
//		pre_node = curr;
//		curr = curr->next;
//	}
//	if (curr == NULL)	return false;												//如果遍历以后，没有发现这个数据，那么返回false。
//
//	//如果运行到这里，则说明，我要删除的不是第一个结点，并且，找到了这个数据。
//	if (pre_node->next == list->tail)	list->tail = pre_node;				//如果我要删除的是最后一个结点。
//	pre_node->next = pre_node->next->next;
//	free(curr);
//	list->size--;
//	return true;
//}
//
//// 扩展: 根据索引删除一个结点
//bool delete_by_idx(LinkedList *list, int idx)
//{
//	if (idx<0 || idx>=list->size) return false;
//
//	if (idx == 0)
//	{
//		Node *del = list->head;
//		list->head = list->head->next;
//		if (list->head == NULL)	list->tail = NULL;
//		free(del);
//		list->size--;
//		return true;
//	}
//
//	Node *curr = list->head;
//	for (int i = 0; i < idx - 1; i++)	curr = curr->next;
//	Node *del = curr->next;
//	curr->next = del->next;
//	if (del == list->tail)	list->tail = curr;
//	free(del);
//	list->size--;
//
//	return true;
//}
//
//// 打印单链表 格式为：1 -> 2 -> 3 ->...
//void print_list(LinkedList *list) 
//{
//	Node *temp1 = list->head;
//	while (temp1 != NULL)
//	{
//		printf("%d", temp1->data);
//		if (temp1->next != NULL)
//			printf(" -> ");
//		temp1 = temp1->next;
//	}
//
//	putchar('\n');
//}