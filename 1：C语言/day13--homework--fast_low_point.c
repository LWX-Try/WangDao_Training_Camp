//#include"day13--homework--fast_low_point.h"
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct node {
//	int data;
//	struct node *next;
//} Node;
//
//void insert_tail(Node **head, int new_data) {
//	// 1.分配新结点，初始化它
//	Node *new_node = malloc(sizeof(Node));
//	if (new_node == NULL) {
//		printf("error: malloc failed in insert_tail.\n");
//		exit(1);
//	}
//	new_node->data = new_data;
//	new_node->next = NULL;
//	// 3.链表非空时,让原本最后一个结点指向新结点
//	if (*head != NULL) {
//		// 2.遍历找到最后一个结点
//		Node *end = *head;
//		while (end->next != NULL) {
//			end = end->next;
//		} // while循环结束时, end指向最后一个结点
//		end->next = new_node;
//		return;
//	}
//	// 链表尾插之前是空的,那就直接更新头指针就行了
//	*head = new_node;
//}
//
///*
//基于链表的结点定义：
//
//typedef struct node {
//	int data;
//	struct node *next;
//} Node;
//以及相应的二级指针尾插法构建单链表：
//
//// 实现尾插法构建链表
//void insert_tail(Node **head, int new_data) {
//	// 1.分配新结点，初始化它
//	Node *new_node = malloc(sizeof(Node));
//	if (new_node == NULL) {
//		printf("error: malloc failed in insert_tail.\n");
//		exit(1);
//	}
//	new_node->data = new_data;
//	new_node->next = NULL;
//	// 3.链表非空时,让原本最后一个结点指向新结点
//	if (*head != NULL) {
//		// 2.遍历找到最后一个结点
//		Node *end = *head;
//		while (end->next != NULL) {
//			end = end->next;
//		} // while循环结束时, end指向最后一个结点
//		end->next = new_node;
//		return;
//	}
//	// 链表尾插之前是空的,那就直接更新头指针就行了
//	*head = new_node;
//}
//后续单链表的面试题，也请基于此链表结点的定义，以及尾插法构建链表实现。
//利用快慢指针法，直接求解下列两个问题：
//
//1.求链表中间结点的值
//
//2.判断单链表是否有环
//
//注意：
//不仅要定义函数实现对应功能，还需要编写测试用例，进行测试。尤其是测试单链表有环，要自己构建出一条有环的单链表进行测试。
//
//*/
