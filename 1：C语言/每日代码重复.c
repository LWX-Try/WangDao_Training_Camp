#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

typedef struct node
{
	int data;
	struct node *next;
}Node;


//day02--------------------------------------------------------------------------------------------------------------------------------------------------------------------

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//
//	/*
//	预处理——>编译——>汇编——>链接——>运行。
//	预处理：将.c和.h文件处理为.i文件。
//			在预处理阶段，主要是执行一次写预处理指令，例如#include，#define，把头文件里面的内容复制过来。
//			还有就是删除我们代码里面的注释。在这个过程中，不进行语法的检查，只进行替换。
//				#开头的就是预处理指令。
//				#include : 包含。 现在可以简单理解 复制粘贴，将 stdio.h 的内容复制粘贴进来
//				#define	：主要有宏函数，宏定义，在头文件中防止重复引用。
//	编	译：将.i文件处理为.s文件。
//			在编译阶段，主要就是将预处理后的.i文件变为.s文件，是里面的语言变为汇编语言。在这个过程中会进行语法的检查。
//	汇  编：将.s文件处理为.o/.obj文件。
//			在这个过程中，主要就是将.s文件处理成机器可以直接处理的二进制文件.o文件。
//	链  接：将各个.c生成的.o文件链接在一起。
//	*/
//
//	return 0;
//}

//day03--------------------------------------------------------------------------------------------------------------------------------------------------------------------

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//int main()
//{
//	//缓冲区残留问题：
//	//在scanf里面的" "号，可以吃掉你再输入时的" "和"\n",而且是吃掉当前连续的空白字符。
//	// 空白字符包括" ","\n","\t"。
//	//
//	int x = 0;
//	printf("请输入数字：");	 // 步骤 1
//	scanf("%d", &x);          // 步骤 2
//	printf("你输入了：%d", x); // 步骤 3
//	//对于缓存区里面\n残留，我们有三种解决办法：
//	// 1：被下一个%d/%s跳过，直接无视。
//	// 2：被下一个%c吃掉。
//	// 3：使用getchar()拿走。
//
//	printf("\n        %d", getchar());
//
//	//对于有符号数和无符号数进行比较时，编译器会把有符号数看作是无符号数进行比较。
//	unsigned int num1 = 80;
//	int num2 = -80;
//	if (num1 > num2)
//		printf("num1>num2");
//	if (num1 < num2)
//		printf("num1<num2");			//会输出num1<num2
//
//	putchar('\n');
//
//	//八进制：在数字前面加0；
//	int a = 012;
//	printf("%d", a);
//
//
//	return 0;
//}

//day04--------------------------------------------------------------------------------------------------------------------------------------------------------------------

//
// 在使用getchar的时候，不要每次都使用getchar，要使用ch=getchar。
// 因为，使用此一次getchar，就会消耗一个在缓存区的字符。
// 
// 在使用&&和||的时候，注意短路现象。
//
// 整形		short	int		long			long long
//			  2		 4		  4				8
// 
// 浮点型	float		double
//			  4			  8
// 
// 虽然long long占用8个字节，但是没有float表示的范围大。
// 浮点型的存储方式是科学计数法。只需要记录  前面具体的数字和后面的次方数就行了
// 但是，浮点数表示的数字不精确，只是他的缺点。
// 
// 表示范围：
//			char<整形<float<double
// 
// 对于运算：
//		对于int及int以下的等级，运算时默认按照int计算，结果也是int类型的。
//		char+short		4字节
//		char+int			4字节
//		
//		对于int以上，谁能表示的范围大，就用谁。
// 
// 数组的随机访问？
//		数组有两个重要的特点： 
//		内存空间连续；
//		存储的类型一致。 
//	随机访问是指：
//				例如我创建了一个int arr[10000]
//				我可以通过指针，去直接访问第8000个元素。

//day05--------------------------------------------------------------------------------------------------------------------------------------------------------------------

//利率的计算：
//#include<stdio.h>
//int main()
//{
//	int rate = 6;
//	int year = 5;
//	
//	double money[5 + 1][5] = { {100,100,100,100,100} };
//	for (int i = 1; i < 5+1; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			money[i][j] = money[i - 1][j] * (100+rate + j) / 100;
//		}
//	}
//	
//	for (int i = 1; i < 5 + 1; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%.2lf\t", money[i][j]);
//		}
//		putchar('\n');
//	}
//
//
//	return 0;
//}

/*
关于const，虽然我们在变量的前面加了const，但是对于局部变量，我们仍然可以改变它的值。通过scanf()修改，或者通过数组越界的方式修改。
	对于局部变量，加了const之后，仍然存放在栈区。const并不改变变量的存储位置。

另外，关于随机变量。
要引用头文件：
		#include<time.h>
		#include<stdlib.h>
第一步：设置随机种子。							srand(time(NULL));			随机种子不要重复设置，不要设置在循环内，最好设置在代码的开头。
第二部：使用rand()函数，获取随机数。				int vall=rand();				找一个变量存储rand（）函数获得的随机数。

	如果不用time（NULL），而是在srand(常量)，使用了常量，那么这是一个伪随机数。代码每次运行所产生的随机数都是一样的。
	另外，rand（）得到的随机数是有范围的，是在[0，32767]。

如果，想得到1-100之间的随机数：
				rand()%100+1;				(0...99)+1
如果，想得到[m,n]之间的随机数：
				rand()%(n-m+1)+m			(0...n-m)+m
*/

//day06--------------------------------------------------------------------------------------------------------------------------------------------------------------------

//day11--------------------------------------------------------------------------------------------------------------------------------------------------------------------
//typedef struct
//{
//	int *table;
//	int len;				//能装多少。
//	int num;				//目前装了多少。
//}Vector;
//
//Vector *vector_create();
//void vector_destory(Vector *vec);
//void vector_printf(Vector *vec);
//
//void vector_insert_after_tail(Vector *vec, int data);
//void vector_insert_before_head(Vector *vec, int data);
//void vector_insert_by_idx(Vector *vec,int idx, int data);
//
//int vector_delete_by_idx(Vector *vec, int idx);
//int vector_delete_by_value_first_accurance(Vector *vec, int data);
//int vector_delete_by_value_last_accurance(Vector *vec, int data);
//int vector_delete_by_value_all_accurance(Vector *vec, int data);
//
////创建。
//Vector *vector_create()
//{
//	Vector *p_vec = malloc(sizeof(Vector));
//
//	if (p_vec == NULL)
//	{
//		printf("malloc failed in vector_create.\n");
//		return NULL;
//	}
//
//	p_vec->table = malloc(sizeof(int) * 10);
//	if (p_vec->table == NULL)
//	{
//		printf("malloc failed in array vector_create.\n");
//		free(p_vec);
//		return NULL;
//	}
//
//	p_vec->len = 10;
//	p_vec->num = 0;
//
//	return p_vec;
//}
//
////释放。
//void vector_destory(Vector *vec)
//{
//	free(vec->table);
//	free(vec);
//}
//
////打印
//void vector_printf(Vector *vec)
//{
//	printf("[");
//	for(int i=0;i<vec->num;i++)
//	{
//		printf("%d", vec->table[i]);
//		if (i != vec->num - 1)
//		{
//			printf(", ");
//		}
//	}
//	printf("]\n");
//}
//
////从最后插入。
//void vector_insert_after_tail(Vector *vec, int data)
//{
//	if (vec->len == vec->num)				//如果装满了。
//	{
//		int new_len = vec->len * 2;
//		int *new_p = realloc(vec->table, new_len*sizeof(int));
//
//		vec->len = new_len;
//		vec->table = new_p;
//	}
//
//	vec->table[vec->num] = data;
//	vec->num++;
//}
//
////从头部插入。
//void vector_insert_before_head(Vector *vec, int data)
//{
//	if (vec->num == vec->len)
//	{
//		int new_len = vec->len * 2;
//		int *new_p = realloc(vec->table, new_len);
//
//		vec->len = new_len;
//		vec->table = new_p;
//	}
//
//	for (int i = vec->num; i > 0; i--)
//		vec->table[vec->num] = vec->table[vec->num-1];
//
//	vec->table[0] = data;
//	vec->num++;
//}
//
////从idx下标插入。
//void vector_insert_by_idx(Vector *vec, int idx, int data)
//{
//	if (vec->num == vec->len)
//	{
//		int new_len = vec->len * 2;
//		int *new_p = realloc(vec->table, new_len);
//
//		vec->len = new_len;
//		vec->table = new_p;
//	}
//
//	for (int i = vec->num; i > idx; i--)
//	{
//		vec->table[vec->num] = vec->table[vec->num - 1];
//	}
//
//	vec->table[idx] = data;
//	vec->num++;
//}

////判断链表是否有环。
//bool has_circle(Node *head)
//{
//	if (head == NULL || head->next == NULL)			//先判断链表结构里面是否有结点，或判断是否有第二个结点。
//	{
//		return false;
//	}
//
//	Node *fast = head->next;					//步长为2。
//	Node *slow = head;						//步长为1。
//
//	while (1)
//	{
//		if (fast == slow)							//有环。
//			return true;
//
//		if (fast == NULL || fast->next == NULL)
//			return false;
//
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//}

//链表反转：
//Node *reverse(Node *head)
//{
//	//首先创建一个哑结点。
//	Node dummppy_node = { 0,NULL };
//
//	while (head != NULL)
//	{
//		Node *new_next = head->next;
//
//		//第一次进入循环：将head节点的next指针指向哑结点，用new_next指针指向原来的第二个结点，防止该结点丢失。
//		head->next = dummppy_node.next;
//		dummppy_node.next = head;
//
//		head = new_next;
//	}
//
//	return dummppy_node.next;
//}

//#define ARR_LEN(arr)	((sizeof(arr))/(sizeof(arr[0])))
//
//void printf_arr(int arr[], int len)
//{
//	printf("[");
//
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//		if (i != len - 1)
//			printf(" ");
//	}
//
//	printf("]\n");
//}
//
//void swap(int arr[], int i, int j)
//{
//	int temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//}
//
////选择排序：
//void select_sort(int arr[],int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		int min_index = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[min_index] > arr[j])
//				min_index = j;
//		}
//
//		swap(arr, i, min_index);
//
//	}
//}
//
////冒泡排序：
//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0; i < len-1; i++)
//	{
//		int flag = 0;
//
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(arr, j, j + 1);
//				flag = 1;
//			}
//		}
//
//		if (flag == 0)
//			break;
//	}
//}
//
////插入排序：
//void insert_sort(int arr[], int len)
//{
//	for (int i = 1; i < len; i++)			//这里的i从1开始，默认第0位数据是有序的。
//	{
//		int need_insert_value = arr[i];		//首先记录，下表为i的元素的值。
//		int need_check_index = i - 1;			//从这个下标的前一个开始和这个要插入的值进行比较。
//
//		while (need_check_index >= 0 && arr[need_check_index] > need_insert_value)			//保证下标不小于0，并且保证当前下标的数值比要交换的数值大，才能继续循环。
//		{
//			arr[need_check_index+1] = arr[need_check_index];								//如果进入循环，则说明当前下标的值大于要插入的值。把当前下标的值往后挪。
//			need_check_index--;														//下标-1，继续检查后一个下标的值。
//		}
//
//		arr[need_check_index+1] = need_insert_value;									//如果出来了，说明当前下标的值比要插入值小。把值插入到下标的后一个数据上。
//	}
//}
//
////希尔排序：
//void shell_sort(int arr[], int len)
//{
//	int gap = len / 2;
//
//	while (gap > 0)
//	{
//		for (int i = gap; i < len; i++)
//		{
//			//将数据往前插入的时候，发现这个数据比前面的要小。
//			int need_insert_value = arr[i];
//			int need_check_index = i - gap;
//
//			while (need_check_index >= 0 && arr[need_check_index] > need_insert_value)
//			{
//				arr[need_check_index + gap] = arr[need_check_index];
//				need_check_index -= gap;
//			}
//
//			arr[need_check_index + gap] = need_insert_value;
//		}
//		gap /= 2;
//	}
//}
//
//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;
//			}
//		}
//
//		if (flag == 0)
//		{
//			return;
//		}
//	}
//}
//
//void select_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int min_index = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[j] < arr[min_index])
//				min_index = j;
//		}
//
//		int temp = arr[i];
//		arr[i] = arr[min_index];
//		arr[min_index] = temp;
//
//	}
//}
//
////插入排序：
//void insert_sort(int arr[], int len)
//{
//	for (int i = 1; i < len; i++)
//	{
//		int need_insert_value = arr[i];
//		int need_check_index = i - 1;
//
//		while (need_check_index >= 0 && arr[need_check_index] > need_insert_value)
//		{
//			arr[need_check_index + 1] = arr[need_check_index];
//			need_check_index--;
//		}
//
//		arr[need_check_index + 1] = need_insert_value;
//	}
//}
//
////希尔排序：
//void shell_sort(int arr[], int len)
//{
//	int gap = len / 2;
//
//	while (gap > 0)
//	{
//		for (int i = gap; i < len; i++)
//		{
//			int need_insert_value = arr[i];
//			int need_check_index = i - gap;
//
//			while (need_check_index >= 0 && arr[need_check_index] > need_insert_value)
//			{
//				arr[need_check_index + gap] = arr[need_check_index];
//				need_check_index -= gap;
//			}
//
//		}
//
//		gap /= 2;
//	}
//}
//
////归并排序：
////先写一个辅助函数：
//void merge_left_and_right(int arr[], int left,int med, int right, int *temp)
//{
//	int index1 = left;
//	int index2 = med + 1;
//
//	int total_index = left;
//
//	while (index1 < med && index2 <= right)
//	{
//		if (arr[index1] <= arr[index2])
//			temp[total_index++] = arr[index1++];
//		else
//			temp[total_index++] = arr[index2++];
//	}
//
//	while (index1 <= med)
//		temp[total_index++] = arr[index1++];
//	while (index1 <= right)
//		temp[total_index++] = arr[index2++];
//
//	for (int i = left; i <= right; i++)
//	{
//		arr[i] = temp[i];
//	}
//}
//
//void devide_and_merge(int arr[], int left, int right, int *temp)
//{
//	if (left >= right)
//	{
//		return;
//	}
//
//	int med = (left + right) / 2;
//	devide_and_merge(arr, left, med, right);
//	devide_and_merge(arr, med+1, right, right);
//
//	merge_left_and_right(arr, left, med, right, *temp);
//}
//
//void merge_sort(int arr[], int len)
//{
//	int *temp = malloc(len * sizeof(int));
//
//	devide_and_merge(arr, 0, len - 1, temp);
//
//	free(temp);
//}
//
////快速排序：
//void partition(int arr[], int left, int right)
//{
//	//需要找到一个枢纽，左边的数据都是比它小的，右边的数据都是比它大的。
//	//并且，继续处理左和右。[left,pivot_index-1],[pivot_index+1,right]。
//	if (left >= right)
//		return;
//
//	int cur_l = left;
//	int cur_r = right;
//
//	int pivot_index = rand() % (right - left + 1) + left;
//	int pivot_value = arr[pivot_value];
//
//	swap(arr, pivot_index, left);
//
//	while (cur_l < cur_r)
//	{
//		while (cur_l < cur_r && arr[cur_r] >= pivot_value)
//			cur_r--;
//		if (cur_l < cur_r)
//			arr[cur_l] < arr[cur_r];
//		while (cur_l < cur_r && arr[cur_r] <  pivot_value)
//			cur_l++;
//		if (cur_l < cur_r)
//			arr[cur_r] < arr[cur_l];
//	}
//
//	arr[cur_l] = pivot_value;
//
//	int pivot_final_index = cur_l;
//	partition(arr, left, pivot_final_index - 1);
//	partition(arr, pivot_final_index + 1, right);
//}

////堆排：
//void swap(int arr[], int i, int j) {
//	int tmp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = tmp;
//}
//
//void heapify(int arr[], int root_idx, int tree_len)
//{
//	while (1)
//	{
//		int left_child_idx = root_idx * 2 + 1;
//		int right_child_idx = root_idx * 2 + 2;
//
//		int max_idx = root_idx;
//		if (left_child_idx<tree_len && arr[left_child_idx]>arr[max_idx])
//			max_idx = left_child_idx;
//		if (right_child_idx<tree_len && arr[right_child_idx]>arr[max_idx])
//			max_idx = right_child_idx;
//
//		if (max_idx == root_idx)
//			break;
//
//		swap(arr, root_idx, max_idx);
//		root_idx = max_idx;
//	}
//}
//
//void heap_sort(int arr[], int len)
//{
//	第一次建堆：
//	int tree_len = len;
//	for (int i = tree_len - 1; i >= 0; i--)
//		heapify(arr, i, tree_len);
//
//	后续不断地调整数据，将0下标的数据，调整到tree_len-1
//	while (tree_len > 0)
//	{
//		swap(arr, 0, tree_len - 1);
//		tree_len--;
//
//		heapify(arr, 0, tree_len);
//	}
//}


//void teat1()
//{
//	//1：打开文件流。
//	FILE *fp = fopen("test/1.txt", "r");
//
//	//2:检查是否打开成功
//	if (fp == NULL)
//	{
//		printf("fopen failed.\n");
//		return;
//	}
//
//	//3：使用文件流。
//	int ch = fgetc(fp);
//	printf("ch=%d\n", ch);
//
//	//4：关闭文件流。
//	fclose(fp);
//}

//void swap(int *arr,int left,int right)
//{
//	int temp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = temp;
//}
//void partition(int arr[], int left, int right) {
//	// [left, right]
//	// 需要找到一个 枢纽值，挪动数据。 左边都是比它小的，右边都是比它大的。 
//	// 并且，继续处理左和右。  [left, pivot_index - 1 ] [pivot_index + 1, right ]
//	if (left >= right) {
//		return;
//	}
//
//	int cur_l = left;
//	int cur_r = right;
//
//	// [2,8]   : rand() % 7 + 2 ===== [0,6] + 2 = 2,8
//	// [left, right]  rand() % (right - left + 1) + left;
//	int pivot_index = rand() % (right - left + 1) + left;
//	int pivot_value = arr[pivot_index];
//
//	swap(arr, pivot_index, left);
//
//	while (cur_l < cur_r) {
//		// 从右开工： 找到 比 pivot_value 小的值。且 cur_l < cur_r
//		while (cur_l < cur_r && arr[cur_r] >= pivot_value) {
//			cur_r--;
//		}
//		if (cur_l < cur_r) {
//			arr[cur_l] = arr[cur_r];
//		}
//		while (cur_l < cur_r && arr[cur_l] < pivot_value) {
//			cur_l++;
//		}
//		if (cur_l < cur_r) {
//			arr[cur_r] = arr[cur_l];
//		}
//	}
//
//	arr[cur_l] = pivot_value;
//
//	int pivot_final_index = cur_l;
//	partition(arr, left, pivot_final_index - 1);
//	partition(arr, pivot_final_index + 1, right);
//}
//
//void quick_sort(int arr[], int len) {
//	srand(time(NULL));
//
//	// 快排的核心操作： 
//	// 找到一个枢纽值。让枢纽值的左边都是比它小的，右边都是比它大的。 
//	// 最终， 枢纽的位置是对的。 继续处理左边，和右边。 
//
//
//	// 我们需要描述： 子数组的范围。  左界， 右界
//	// [左界, 右界]
//
//	partition(arr, 0, len - 1);
//}

////快速排序：
//int partition(int arr[], int left, int right)
//{
//	int pivot = arr[left];
//	int cur_l = left;
//	int cur_r = right;
//
//	while (cur_l < cur_r)
//	{
//		while (cur_l<cur_r && arr[cur_r]>pivot)
//			cur_r--;
//		if (cur_l < cur_r)
//		{
//			arr[cur_l] = arr[cur_r];
//			cur_l++;
//		}
//		while (cur_l<cur_r && arr[cur_l]<pivot)
//			cur_l++;
//		if (cur_l < cur_r)
//		{
//			arr[cur_r] = arr[cur_l];
//			cur_r--;
//		}
//	}
//
//	arr[cur_l] = pivot;
//	return cur_l;
//}
//void quick_sort(int arr[], int left, int right)
//{
//	if (left > right)
//		return;
//
//	int pivot_index = partition(arr, left, right);
//
//	quick_sort(arr, left, pivot_index - 1);
//	quick_sort(arr, pivot_index+1, right);
//}









