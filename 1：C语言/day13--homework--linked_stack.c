//#include"day13--homework--linked_stack.h"
//
//// 基本操作
//// 创建链式栈
//LinkedStack *stack_create()
//{
//	LinkedStack *stack = calloc(1, sizeof(LinkedStack));
//	
//	if (stack == NULL)
//		return NULL;
//
//	return stack;
//}
//
//// 销毁链式栈
//void stack_destroy(LinkedStack *stack)
//{
//	if (stack == NULL)
//		return;
//
//	while (stack->top != NULL)
//	{
//		StackFrame *temp = stack->top;
//
//		stack->top = stack->top->next;
//
//		free(temp);
//	}
//
//	free(stack);
//}
//
//// 判空
//bool is_empty(const LinkedStack *stack)
//{
//	if (stack == NULL)
//		return true;
//
//	return stack->top == NULL;
//}
//
//// 入栈
//void stack_push(LinkedStack *stack, ElementType data)
//{
//	if (stack == NULL)
//	{
//		printf("栈指针为空，输入错误！\n");
//		return;
//	}
//
//	StackFrame *new_node = calloc(1, sizeof(StackFrame));
//	if (new_node == NULL)
//	{
//		printf("申请失败！\n");
//		return;
//	}
//	new_node->data = data;
//
//	//入栈是头插，最上面的节点是头。
//	//这里如果原来栈就是空的，也可以直接处理了。
//	new_node->next = stack->top;
//	stack->top = new_node;
//}
//
//// 出栈并返回栈顶元素
//ElementType stack_pop(LinkedStack *stack)
//{
//	if (stack==NULL||stack->top==NULL)
//		return 0;
//
//	StackFrame *next = stack->top->next;
//	ElementType old_type = stack->top->data;
//
//	free(stack->top);
//	stack->top = next;
//
//	return old_type;
//}
//// 访问栈顶元素
//ElementType stack_peek(LinkedStack *stack)
//{
//	if (stack == NULL||stack->top==NULL)
//	{
//		printf("输入错误!\n");
//		return 0;
//	}
//	return stack->top->data;
//}