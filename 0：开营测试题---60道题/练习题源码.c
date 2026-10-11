#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	/*
	1.  有一个函数如下：
			x (x<5)
		y = x+6 (5<=x<15)
			x-6 (x>=15)
		输入x的值，计算出相应的y值。
	*/
	//int x;
	//printf("请输入整数x的值："); 
	//scanf("%d", &x);				// 格式串里只留占位符，不要放提示文字
	//							//除了必要的 %d、%s 等格式符外，不要在 scanf 的格式串中添加任何多余的普通字符（包括 \n、空格、逗号、中文提示等），提示信息一律用 printf 输出。
	//if (x < 5)
	//	printf("y=%d\n", x);
	//else if (x < 15 && x >= 5)
	//	printf("y=%d\n", x + 6);
	//else if (x >= 15)
	//	printf("y=%d\n", x - 6);

	/*
	2.
		输入一个小写字母，将其转换为大写字母。
		toupper，tolower
		isupper，islower
	*/
	//char ch;
	//printf("请输入一个小写字母：");
	//scanf("%c", &ch);
	//if (ch < 'a' || ch>"z")
	//	printf("输入错误，您输入的不是一个小写字母。请重新输入。");
	//else
	//	printf("%c对应的大写字母是%c", ch, toupper(ch));

	/*
	3.
		求一个3×3矩阵主对角线元素之和。
	*/
	//int arr1[3][3];
	////初始化3*3矩阵。
	//printf("请初始化3*3矩阵，用空格或换行隔开。\n");
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		scanf("%d", &arr1[i][j]);
	//	}
	//}
	////显示3*3矩阵。
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%-4d", arr1[i][j]);
	//	}
	//	printf("\n");
	//}
	//int temp = 0;
	//for (int i = 0; i < 3; i++)
	//{
	//	temp += arr1[i][i];
	//}
	//printf("3×3矩阵主对角线元素之和为：%d\n", temp);

	/*
	4.
		求100～999之间的水仙花数。所谓水仙花数，是指一个3位数，它的每位数字的立方之和等于该数。例如，因为153=1+5+3，所以153为水仙花数。
	*/
	//for (int i = 100; i < 1000; i++)
	//{
	//	int ge = 0;
	//	int shi = 0;
	//	int bai = 0;
	//	ge = i % 10;
	//	bai = i / 100;
	//	shi = (i % 100) / 10;
	//	if (pow(ge, 3) + pow(shi, 3) + pow(bai, 3) == i)
	//	{
	//		printf("%d\n", i);
	//	}
	//}

	/*
	5.
		输入百分制成绩，并把它转换成五级分制，转换公式为：
		90---100  A
		80---89	 B
		70---79   C
		60---69   D
		<60		 E
	*/
	//int score;
	//printf("请输入成绩：");
	//scanf("%d", &score);
	//if (score >= 90 && score <= 100)
	//	printf("成绩为A。\n");
	//else if (score >= 80 && score < 90)
	//	printf("成绩为B。\n");
	//else if (score >= 70 && score < 80)
	//	printf("成绩为C。\n");
	//else if (score >= 60 && score < 70)
	//	printf("成绩为D。\n");
	//else if (score < 60 && score >= 0)
	//	printf("成绩为E。\n");
	//else
	//	printf("输入有误，请检查。");

	/*
	6.
		斐波拉契数列递归实现的方法如下：
		int Funct( int n )
		{
		if(n==0) return 1;
		if(n==1) return 1;
		retrurn Funct(n-1) + Funct(n-2);
		}
		请问，如何不使用递归，来实现上述函数？
	*/
	//前十项输出：
	//for (int i = 0; i < 10; i++)
	//{
	//	static int Fun1=1;
	//	static int Fun2=1;
	//	printf("%d\n", Fun1);
	//	printf("%d\n", Fun2);
	//	Fun1 = Fun1 + Fun2;
	//	Fun2 = Fun1 + Fun2;
	//}

	/*
	7.
		编写一个程序，将一个数组中的值按大小重新存放。例如, 原来顺序为8, 6, 5, 4, 1。要求改为1, 4, 5, 6, 8。
	*/
	//int arr1[5] = { 8,6,5,4,1 };
	//冒泡排序：
	//for (int i = 0; i < 5-1; i++)
	//{
	//	for (int j = 0; j < 5 - 1 - i; j++)
	//	{
	//		if (arr1[j] > arr1[j + 1])
	//		{
	//			int temp = arr1[j];
	//			arr1[j] = arr1[j + 1];
	//			arr1[j + 1] = temp;
	//		}
	//	}
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d  ", arr1[i]);
	//}
	//选择排序：
	//for (int i = 0; i < 5 - 1; i++)
	//{
	//	int min_idx = i;
	//	for (int j = i+1; j < 5; j++)
	//	{
	//		if (arr1[min_idx] > arr1[j])
	//		{
	//			min_idx = j;
	//		}
	//	}

	//	if (min_idx != i)
	//	{
	//		int temp = arr1[min_idx];
	//	}
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d  ", arr1[i]);
	//}



	/*
	8.
		编写一个程序根据输入的三角形的三条边判断是否能组成三角形，如果可以则输出它的面积和三角形类型（等边、等腰、直角三角形）。
	*/
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//printf("请输入三角形的三条边：");
	//scanf("%d %d %d", &a, &b, &c);
	//if (a + b > c && a + c > b && b + c > a)
	//{
	//	double s = (a + b + c) / 2.0;
	//	double area = sqrt(s * (s - a) * (s - b) * (s - c));

	//	if (a == b || a == c || b == c)
	//	{
	//		if (a == b && a == c)
	//			printf("这是一个等边三角形，面积为%lf。", area);
	//		else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	//			printf("这是一个等腰直角三角形，面积为%lf。", area);
	//		else
	//			printf("这是一个等腰三角形，面积为%lf。", area);
	//	}
	//	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	//		printf("这是一个直角三角形，面积为%lf。", area);
	//	else
	//		printf("这是一个普通三角形，面积为%lf。", area);
	//}
	//else
	//	printf("输入错误，不能构成三角形。");

	/*
	9.
		从键盘输入若干个学生成绩，统计并输出最高成绩和最低成绩，当输入负数时结束输入。
	*/
	int score;
	printf("请输入学生成绩。");

	while ((score = scanf("%d", &score)) > 0)
	{
		static int max = 0;
		static int min = 0;

		if (score > max)
		{
			max = score;
		}

		if (score < min)
		{
			min = score;
		}
	}















	/*

	9. 从键盘输入若干个学生成绩，统计并输出最高成绩和最低成绩，当输入负数
	时结束输入。
	10. 编写函数将化氏温度转换为摄氏温度，公式为C=（F-32）*5/9；并在主函
	数中调用。
	11. 输入一个自然数，输出其各因子的连乘形式，如输入12，则输出12=1*2*2*3。
	12. N 个整数从小到大排列，输入一个新数插入其中，使N+1个整数仍然有序。
	13. 在100～200之间找出满足用3除余2，用5除余3和用7除余2的所有整
	数。
	14. 输入10 个同学的成绩，统计80分以上和不及格的人数，并输出平均值。
	15. 编写一个函数来检验输入的一个字符是大写字母还是小写字母或不是26个
	英文字母。
	16. 编写一个程序，从键盘输入半径和高，输出圆柱体的底面积和体积。
	17. 输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数。
	18. 编写程序,形成如下矩阵,并输出。
	11111
	21111
	A = 32111
	43211
	54321
	19. 用递归函数完成以下运算：
	sum(n)=12+22+…+n2
	函数的原型如下：
	long sum(int n);
	该函数完成12+22+…+n2的运算，并返回运算结果，其中n>0。
	提示：你可以使用递归表达式：sum(n)=sum(n-1)+n2
	20. 编写一个程序，将整数转换成字符串：void itoa(int,char);















		*/




	return 0;
}