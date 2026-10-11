#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<errno.h>
#include"day13--homework--fast_low_point.h"
#include"day14--homework--check_loop_of_hash.h";

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//day2作业。

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	/*
//	键盘输入一名学生的语文、数学和英语成绩（均为整数百分制）。计算其平均成绩，并保留两位小数打印显示。
//	键盘输入一个位于(0, 1)范围内的浮点数，并将其转化为百分比形式，结果保留一位小数。例如：输入0.12转换为12.0%，而输入0.1234转换为12.3%。
//	*/
//	int Chinese_score = 0;
//	int math_score = 0;
//	int English_score = 0;
//	printf("请分别输入语文成绩，数学成绩，英语成绩。\n");
//	scanf("%d %d %d", &Chinese_score, &math_score, &English_score);
//	printf("平均成绩为：%.2lf。\n", (Chinese_score + math_score + English_score) / 3.0);
//
//	double f1 = 0;
//	printf("请输入一个位于(0, 1)范围内的浮点数。\n");
//	scanf("%lf", &f1);
//	printf("%lf转化后为%.1lf%。\n", f1, f1 * 100);					//注意：如果想输出%，必须使用%%。如果是一个%输出是则不会显示。
//																//“\”叫做转义字符。他的作用是告诉编译器，别把下一个字符当作普通字符，它是一个特殊字符。
//																//		\n:换行（是ASCII的10。）		\t:水平制表符			\0:空字符（NULL）
//																//如果你想输出一个真正意义上的\，必须要写\\。
//																// 如果你想在printf（）函数里输出双引号""，必须用\"。
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	/*
//	现在我们就来开发一个简单的交互式程序：
//	程序将为用户提供选择菜单：
//		清空账户余额
//		往账户上存钱
//		从账户上取钱
//		显示当前余额
//		退出程序。
//	选择项分别用整数 0、1、2、3 和 4 表示，账户余额可以用一个简单的局部变量表示，整体代码全部写在main函数里。交互程序大致界面如下：
//	*/
//	int code = 0;
//	double balance = 0;
//	while (code != 4)
//	{
//		printf("===记账程序菜单===\n");
//		printf("0.清空账户余额\n");
//		printf("1.往账户上存钱\n");
//		printf("2.从账户上取钱\n");
//		printf("3.显示当前余额\n");
//		printf("4.退出程序\n");
//		printf("请选择操作（0-4）：");
//		scanf("%d", &code);
//		if (code == 0)
//		{
//			balance = 0;
//			printf("当前账户余额已清零，账户余额为0。\n");
//		}
//		else if (code == 1)
//		{
//			double add_balance = 0;
//			printf("请输入存款金额：");
//			scanf("%lf", &add_balance);
//			balance += add_balance;
//			printf("成功存款%lf元，当前余额为%lf。\n",add_balance,balance);
//		}
//		else if (code == 2)
//		{
//			double get_balance = 0;
//			printf("请输入取款金额：");
//			scanf("%lf", &get_balance);
//			balance -= get_balance;
//			printf("成功取款%lf元，当前余额为%lf。\n",get_balance,balance);
//		}
//		else if (code == 3)
//		{
//			printf("当前余额为：%lf。\n",balance);
//		}
//		else if (code == 4)
//		{
//			break;
//		}
//		else
//		{
//			printf("代码输入错误，请重新输入：");
//			scanf("%d", &code);
//			putchar('\n');
//		}
//		putchar('\n');
//	}
//	printf("已成功退出。\n");
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	///*
	//写一个程序，实现分数相加。用户以分子/分母的形式输入分数，程序打印相加后的结果(化为最简分数)。
	//（注：利用欧几里得算法求最大公约数，进行分数简化）
	//*/
	//#define _CRT_SECURE_NO_WARNINGS
	//#include<stdio.h>
	//#include<stdlib.h>
	//int gcd(int a, int b)
	//{
	//	if (b == 0)
	//		return a;
	//	return gcd(b, a % b);
	//}

	//int main()
	//{
	//	int molecule1 = 0;					//分子
	//	int denominator1 = 0;				//分母
	//	int molecule2 = 0;
	//	int denominator2 = 0;

	//	printf("请输入第一个分数（分子/分母）：");
	//	scanf("%d/%d", &molecule1, &denominator1);
	//	putchar('\n');

	//	printf("请输入第二个分数（分子/分母）：");
	//	scanf("%d/%d", &molecule2, &denominator2);
	//	putchar('\n');

	//	int molecule3 = molecule1 * denominator2 + molecule2 * denominator1;
	//	int denominator3 = denominator1 * denominator2;

	//	int reg = gcd(abs(molecule3), abs(denominator3));

	//	printf("两个分数的和是：%d/%d", molecule3 / reg, denominator3 / reg);


	//	return 0;
	//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//编写一个函数，输入一个公元年份（如2004），判断该年是否为闰年，并返回判断结果。
//
//平年闰年的规则如下：
//
//如果年份不是4的倍数，则是平年。
//如果年份是4的倍数但不是100的倍数，则是闰年。
//如果年份是100的倍数但不是400的倍数，则是平年。
//如果年份是400的倍数，则是闰年。
//要求使用bool类型作为函数的返回值。
//
//注意：日历有一系列的题目，这道题编写的函数在下一道题目中可能会用到。
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//bool is_leap_year(int year)		
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("%d是闰年。", year);
//		return true;												//如果是闰年则返回true
//	}
//	else
//	{
//		printf("%d不是闰年。", year);
//		return false;
//	}
//}
//int main()
//{
//	is_leap_year(2004);
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//编写一个程序实现一个简单的计算器，能够处理加法、减法、乘法和除法。
//输入：用户输入两个数字(可以带小数)和一个操作符（+、-、*、/）。
//输出：显示计算的表达式及结果。
//注意以下几个要求：
//	1. 代码可以直接写在main函数里，不需要提取函数。
//	2. 输入的表达式应当符合格式要求，应当正常录入两个操作数和一个运算符，否则直接退出程序。
//	3. 在进行除法操作时，需要保证除数不为0，若除数为0，则直接退出程序。
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//int main()
//{
//	double num1 = 0;
//	double num2 = 0;
//	char ch;
//
//	printf("请输入需要计算的表达式：");
//	scanf("%lf%c%lf", &num1, &ch, &num2);
//	putchar('\n');
//
//	switch (ch)
//	{
//	case '+':
//		printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2); break;
//	case '-':
//		printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); break;
//	case '*':
//		printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); break;
//	case '/':
//		if (num2 == 0)
//			printf("Error：除数为0！\n");
//		else
//			printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
//		break;
//	default:
//		printf("符号输入错误。\n");
//		break;
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//day3作业。

///*
//编写一个C程序，要求用户输入5个整数，计算其中所有非负整数（大于等于0）的和。
//	要求：
//	1. 使用for循环接收5次输入
//	2. 使用continue语句跳过负数（小于0的数）
//	3. 只累加非负整数
//	4. 输出格式为："非负整数的和是: %d"
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &num);
//		if (num < 0)
//			continue;
//		sum += num;
//	}
//	putchar('\n');
//
//	printf("非负整数的和是: %d", sum);
//	putchar('\n');
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//编写一个C程序，实现一个简单的计算器，可以进行加、减、乘、除四则运算。
//	要求：
//	1. 使用do-while循环实现重复计算
//	2. 显示菜单让用户选择操作
//	3. 使用switch语句处理不同的运算
//	4. 输入0退出程序
//	5. 除法运算要检查除数是否为0
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//int main()
//{
//	int code;
//	do
//	{
//		printf("\n");
//		printf("请选择操作：\n");
//		printf("0：退出程序\n");
//		printf("1：+\n");
//		printf("2：-\n");
//		printf("3：*\n");
//		printf("4：/\n");
//		
//		scanf("%d", &code);
//		putchar("\n");
//
//		switch (code)
//		{
//			int num1 = 0, num2 = 0;
//		case 0:
//			printf("程序已退出。\n");
//			return 0;
//		case 1:
//			printf("请输入加法算式：");
//			scanf("%d + %d =", &num1, &num2);
//			printf("%d + %d = %d\n", num1, num2, num1 + num2);
//			break;
//		case 2:
//			printf("请输入减法算式：");
//			scanf("%d - %d =", &num1, &num2);
//			printf("%d - %d = %d\n", num1, num2, num1 - num2);
//			break;
//		case 3:
//			printf("请输入乘法算式：");
//			scanf("%d * %d =", &num1, &num2);
//			printf("%d * %d = %d\n", num1, num2, num1 * num2);
//			break;
//		case 4:
//			printf("请输入除法算式：");
//			scanf("%d / %d =", &num1, &num2);
//			if (num2 == 0)
//			{
//				printf("输入错误，除数不能为0。\n");
//				return 0;
//			}
//			else
//			{
//				printf("%d / %d = %d\n", num1, num2, num1 / num2);
//				break;
//			}
//		default:
//			printf("输入错误，算法符号出错！\n");
//			break;
//		}
//
//	} while (code!=0);
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//编写一个C程序，打印一个数字金字塔。
//例如，当输入5时，输出如下金字塔：
//		1
//	   121
//	  12321
//	 1234321
//	123454321
//		要求：
//		1. 用户输入金字塔的层数n（1-9）
//		2. 使用双层嵌套for循环打印金字塔
//		3. 外层循环控制行数
//		4. 内层循环控制每行输出的数字
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//int main()
//{
//	int n = 0;
//	printf("请输入金字塔层数：");
//	scanf("%d", &n);
//	putchar("\n");
//
//	for (int i = 1; i <= n; i++)
//	{
//		//输出金字塔前的" "
//		for (int j = 0; j < n-i; j++)
//		{
//			printf(" ");
//		}
//
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d", j);
//		}
//
//		for (int j = i-1; j > 0; j--)
//		{
//			printf("%d", j);
//		}
//
//		putchar('\n');
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//编写一个函数isPrime()，判断一个整数是否为素数（质数），然后在主函数中测试。
//	要求：
//	1. 编写一个函数int isPrime(int num)，如果num是素数返回1，否则返回0
//	2. 在主函数中调用该函数测试几个数字
//	3. 素数定义：大于1的自然数，除了1和它本身外，不能被其他自然数整除
//	4. 使用for循环和break语句优化判断过程
//	5. 使用return语句提前返回结果
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//int isPrime(int num)
//{
//	if (num == 1)
//	{
//		printf("%d不是素数。", num);
//		putchar('\n');
//		return 0;
//	}
//	if (num == 2)
//	{
//		printf("%d是素数。", num);
//		putchar('\n');
//		return 1;
//	}
//
//	int flag = 1;
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)			//如果不是素数。
//		{
//			flag = 0;
//			break;
//		}
//	}
//
//	if (flag == 1)
//	{
//		printf("%d是素数。",num);
//		putchar('\n');
//		return 1;
//	}
//	if (flag == 0)
//	{
//		printf("%d不是素数。",num);
//		putchar('\n');
//		return 0;
//	}
//
//}
//
//int main()
//{
//	//测试isPrime函数。
//	for (int i = 1; i < 100; i++)
//	{
//		isPrime(i);
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//编写一个程序实现一个简单的计算器，能够处理加法、减法、乘法和除法。
//输入：用户输入两个数字(可以带小数)和一个操作符（+、-、*、/）。
//输出：显示计算的表达式及结果。
//	注意以下几个要求：
//	1. 代码可以直接写在main函数里，不需要提取函数。
//	2. 输入的表达式应当符合格式要求，应当正常录入两个操作数和一个运算符，否则直接退出程序。
//	3. 在进行除法操作时，需要保证除数不为0，若除数为0，则直接退出程序。
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//int main()
//{
//	double num1 = 0;
//	double num2 = 0;
//	char ch;
//
//	printf("请输入需要计算的表达式：");
//	scanf("%lf %c %lf", &num1, &ch, &num2);
//	putchar('\n');
//
//	switch (ch)
//	{
//	case '+':
//		printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2); break;
//	case '-':
//		printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); break;
//	case '*':
//		printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); break;
//	case '/':
//		if (num2 == 0)
//			printf("Error：除数为0！\n");
//		else
//			printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
//		break;
//	default:
//		printf("符号输入错误。\n");
//		break;
//	}
//
//	return 0;
//
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//在上面简单计算器题目的基础上，实现以下功能：
//	1.在进行完一次运算后，询问用户是否继续运算。只要用户输入y/Y就可以继续运算，而不是只能计算一次。
//	2.当用户的输入有误时，不退出程序，而是要求用户继续输入表达式计算。
//
//提示：
//可以考虑使用do...while循环结构，配合循环控制变量来解决，代码仍然都写在main函数中即可。
//写完代码后，可以测试一下：在询问循环是否继续时输入"yyyyy"，会发生什么情况呢？如何解决
//*/
//
// 
// 
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//int main()
//{
//	double num1 = 0;
//	double num2 = 0;
//	char ch1;
//	char ch2;
//
//	do
//	{
//		printf("请输入需要计算的表达式:");
//		int ret = scanf("%lf %c %lf", &num1, &ch1, &num2);
//		putchar('\n');
//
//		if (ret != 3)
//		{
//			char ch;
//			while ((ch = getchar()) != '\n');
//			printf("格式输入错误，请重新输入!");
//			continue;
//		}
//
//		switch (ch1)
//		{
//		case '+':
//			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2); break;
//		case '-':
//			printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); break;
//		case '*':
//			printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); break;
//		case '/':
//			if (num2 == 0)
//				printf("Error：除数为0！\n");
//			else
//				printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
//			break;
//		default:
//			printf("符号输入错误。\n");
//			break;
//		}
//		putchar('\n');
//
//		while (getchar() != '\n');
//
//		printf("是否继续计算？（输入'y/Y'继续，其他任意键结束）：");
//		scanf(" %c", &ch2);																//这里一定要注意：在%c的前面加上" "。这样就可以吞掉上一个输入scanf时的"\n"。
//		putchar('\n');
//
//	} while (ch2 == 'y' || ch2 == 'Y');
//
//
//	return 0;
//
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//用位运算符实现以下算法：
//1：定义一个函数，判断某个整数是否为奇数。
//2：给定一个正整数，请定义一个函数判断它是否为2的幂(1, 2, 4, 8, 16, ....)。
//3：给定一个不为0的整数，编写函数找出它值为1的最低有效位(称之为Last Set Bit)。LSB是1表示此整数的最低位就是1, 2则表示倒数第二位是第一个1, 4表示倒数第三位是第一个1....
//   一个示例如下：
//		输入：n = 24
//		输出：8
//		解释：24的二进制表示为 11000，值为 1 的最低有效位是倒数第四位，则输出 2 ^ 3，即输出的结果8。
//4：给定两个不同的整数 a 和 b，请交换它们两个的值。（不要定义函数来实现，直接在main函数里实现）
//5：给定一个非空的整数数组nums，已知某个元素只出现了一次，其余元素均出现两次，那么请你找出这个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//
//扩展题目 :
//给定一个非空的整数数组nums，已知有两个元素只出现了一次，其余元素均出现两次，那么请你找出这两个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//*/
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<math.h>
//
////题目一：定义一个函数，判断某个整数是否为奇数。
//bool is_odd(int num)
//{
//	if ((num & 1) == 1)
//		return true;
//	else
//		return false;
//}
//
////题目二：给定一个正整数，请定义一个函数判断它是否为2的幂(1, 2, 4, 8, 16, ....)。
//bool is_power_of_two(int num)													//注意：如果一个数是2的幂，则他的二进制中只有一个1，其他位是0。
//{																			//		那么，num&(num-1)一定是0。
//	if (num < 0)
//		return false;
//	return (num & (num - 1)) == 0;
//
//}
//
////题目三：给定一个不为0的整数，编写函数找出它值为1的最低有效位(称之为Last Set Bit)。LSB是1表示此整数的最低位就是1, 2则表示倒数第二位是第一个1, 4表示倒数第三位是第一个1....
//int find_LSB(int num)
//{
//	num = abs(num);																						int find_LSB(int num) {
//	int count = 0;																							 return num & -num;	// 核心技巧！取负数的补码，与自身相与
//																										}
//	if (is_odd(num))
//	{
//		return 1;
//	}
//
//	for (int i = 0; i < 31; i++)
//	{
//		num = (num >> 1);
//		count++;
//		if((num & 1) == 1)
//			return pow(2,count);
//	}
//}
//
//int main()
//{	
//	//题目一：定义一个函数，判断某个整数是否为奇数。
//	is_odd(10086);
//
//	//题目二：给定一个正整数，请定义一个函数判断它是否为2的幂(1, 2, 4, 8, 16, ....)。
//	is_power_of_two(64);
//
//	//题目三：给定一个不为0的整数，编写函数找出它值为1的最低有效位(称之为Last Set Bit)。LSB是1表示此整数的最低位就是1, 2则表示倒数第二位是第一个1, 4表示倒数第三位是第一个1....
//		//一个示例如下：
//		//	输入：n = 24
//		//	输出：8
//		//	解释：24的二进制表示为 11000，值为 1 的最低有效位是倒数第四位，则输出 2 ^ 3，即输出的结果8。
//	printf("%d\n",find_LSB(24));
//
//	//题目四：给定两个不同的整数 a 和 b，请交换它们两个的值。（不要定义函数来实现，直接在main函数里实现）
//	int a = 0, b = 0;
//	printf("请输入两个值：");
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	//题目五：给定一个非空的整数数组nums，已知某个元素只出现了一次，其余元素均出现两次，那么请你找出这个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//	异或法相当于给数组里所有元素举行了一场“消消乐”大赛，凡是出现两次的，碰在一起就“同归于尽”（变成0），唯一出现一次的那个元素因为没有对手，最终存活了下来
// int result = 0;
//	for (int i = 0; i < 9; i++) 
// {
//	result ^= nums[i];
// }
// 
// 
// 
//	int nums[9] = { 12,16,17,22,20,22,12,16,17 };
//	for (int i = 0; i < 9; i++)
//	{
//		int flag = 0;
//		for (int j = i+1; j < 9; j++)
//		{
//			if ((nums[i] ^ nums[j]) == 0)
//				flag = 1;
//		}
//
//		if (flag == 0)
//		{
//			printf("这个元素是%d。", nums[i]);
//			putchar('\n');
//			break;
//		}
//	}
//
//	return 0;
//
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//day4作业。

///*
//编写一个程序实现以下需求：
//	用户键盘录入一整行字符数据，包含数字和字母。
//	当用户按下回车键后结束数据录入。
//	请统计用户输入的一整行字符数据中，数字和字母分别有多少个。
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<math.h>
//
//int main(void)
//{
//	char ch;
//	int num1 = 0;
//	int num2 = 0;
//	/*scanf("%c", &ch);*/
//
//	while((ch=getchar())!='\n')
//	{
//		if ((ch <= 'Z' && ch>='A') || (ch <= 'z' && ch >= 'a'))
//			num1++;
//		else if (ch <= '9' && ch>='0')
//			num2++;
//	}
//
//	printf("录入数字：%d个。\n录入字母：%d个。", num2, num1);
//
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//用位运算符实现以下算法
//
//1：定义一个函数，判断某个整数是否为奇数。
//2：给定一个正整数，请定义一个函数判断它是否为2的幂(1, 2, 4, 8, 16, ....)。
//3：给定一个不为0的整数，编写函数找出它值为1的最低有效位 (称之为Last Set Bit)。LSB是1表示此整数的最低位就是1,2则表示倒数第二位是第一个1,4表示倒数第三位是第一个1....
//	一个示例如下：
//	输入：n = 24
//	输出：8
//	解释：24的二进制表示为 11000，值为 1 的最低有效位是倒数第四位，则输出 2^3，即输出的结果8。
//4：给定两个不同的整数 a 和 b，请交换它们两个的值。（不要定义函数来实现，直接在main函数里实现）。
//5：给定一个非空的整数数组nums，已知某个元素只出现了一次，其余元素均出现两次，那么请你找出这个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//
//扩展题目:
//给定一个非空的整数数组nums，已知有两个元素只出现了一次，其余元素均出现两次，那么请你找出这两个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<math.h>
//
////1：定义一个函数，判断某个整数是否为奇数。
//bool is_odd(int num)
//{
//	return num & 1;
//}
//
////2：给定一个正整数，请定义一个函数判断它是否为2的幂(1, 2, 4, 8, 16, ....)。
//bool is_pow_of_two(int num)
//{
//	int ret = num & (num - 1);
//	if (ret == 0)
//	{
//		printf("%d是2的幂次。\n", num);
//		return 1;
//	}
//	else
//	{
//		printf("%d不是2的幂次。\n", num);
//		return 0;
//	}
//}
//
////3：给定一个不为0的整数，编写函数找出它值为1的最低有效位(称之为Last Set Bit)。LSB是1表示此整数的最低位就是1, 2则表示倒数第二位是第一个1, 4表示倒数第三位是第一个1....
//int LSB(int num)
//{
//	if (num == 0)
//	{
//		printf("该数为零，输入错误!\n");
//		return 0;
//	}
//
//	int ret = is_odd(num);
//	if (ret == 1)
//	{
//		printf("该数的LSB为1。\n");
//		return 1;
//	}
//
//	int count = 0;
//	while ((num & 1) == 0)
//	{
//		num >>= 1;
//		count++;
//	}
//	printf("该数的LSB为%d。\n", 1<<count);
//
//	return 1<<count;	
//}
//
//
//int main(void)
//{
//	//1：定义一个函数，判断某个整数是否为奇数。
//	int ret = is_odd(10086);
//	if (ret == 1)
//		printf("该数是奇数。\n");
//	else
//		printf("该数是偶数。\n");
//
//	//2：给定一个正整数，请定义一个函数判断它是否为2的幂(1, 2, 4, 8, 16, ....)。
//	is_pow_of_two(64);
//
//	//3：给定一个不为0的整数，编写函数找出它值为1的最低有效位(称之为Last Set Bit)。LSB是1表示此整数的最低位就是1, 2则表示倒数第二位是第一个1, 4表示倒数第三位是第一个1....
//	//		一个示例如下：
//	//		输入：n = 24
//	//		输出：8
//	//		解释：24的二进制表示为 11000，值为 1 的最低有效位是倒数第四位，则输出 2 ^ 3，即输出的结果8。
//	LSB(12);
//
//	//4：给定两个不同的整数 a 和 b，请交换它们两个的值。（不要定义函数来实现，直接在main函数里实现）。
//	int a = 100;
//	int b = 200;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	//5：给定一个非空的整数数组nums，已知某个元素只出现了一次，其余元素均出现两次，那么请你找出这个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//	int nums[9] = { 23,54,43,67,10,54,43,23,67 };
//
//	for (int i = 0; i < 9; i++)
//	{
//		int flag = 0;
//		for (int j =0; j < 9; j++)
//		{
//			if ((i!=j)&&(nums[i]==nums[j]))			//检查所有j，并且排除自身。
//			{
//				flag = 1;
//				continue;
//			}
//		}
//
//		if (flag == 0)
//		{
//			printf("只出现一次的元素是：%d。\n", nums[i]);
//			break;
//		}
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

////在上面简单计算器题目的基础上，实现以下功能：
////	1.在进行完一次运算后，询问用户是否继续运算。只要用户输入y / Y就可以继续运算，而不是只能计算一次。
////	2.当用户的输入有误时，不退出程序，而是要求用户继续输入表达式计算。
////
////提示：
////可以考虑使用do...while循环结构，配合循环控制变量来解决，代码仍然都写在main函数中即可。
////写完代码后，可以测试一下：在询问循环是否继续时输入"yyyyy"，会发生什么情况呢？如何解决？
//
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//int main()
//{
//	double num1 = 0;
//	double num2 = 0;
//	char ch1;
//	char ch2;
//	char ch;
//
//	do
//	{
//		printf("请输入需要计算的表达式:");
//		int ret = scanf("%lf %c %lf", &num1, &ch1, &num2);
//
//	/*	while ((ch = getchar()) != '\n');*/
//		putchar('\n');
//
//		if (ret != 3)
//		{
//			char ch;
//			while ((ch = getchar()) != '\n');
//			printf("格式输入错误，请重新输入!\n");
//			continue;
//		}
//
//		switch (ch1)
//		{
//		case '+':
//			printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2); break;
//		case '-':
//			printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2); break;
//		case '*':
//			printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2); break;
//		case '/':
//			if (num2 == 0)
//				printf("Error：除数为0！\n");
//			else
//				printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
//			break;
//		default:
//			printf("符号输入错误。\n");
//			break;
//		}
//		putchar('\n');
//
//		while (getchar() != '\n');
//
//		printf("是否继续计算？（输入'y/Y'继续，其他任意键结束）：");
//		scanf(" %c", &ch2);																//这里一定要注意：在%c的前面加上" "。这样就可以吞掉上一个输入scanf时的"\n"。
//		putchar('\n');
//		while (getchar() != '\n');
//
//	} while (ch2 == 'y' || ch2 == 'Y');
//
//
//	return 0;
//
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//固定投资的初始资金是100元，用户先输入年利率（rate）和要投资的年份（years）
//投资收益后的资产每年计算一次，随后此程序将打印此利率在投资年份内每年的资产总价值，和紧随其后的4个更高的利率（总计5个利率）下投资的总价值。
//余额考虑复利，第一年的余额是(本金 + 本金 * 利率)，第二年则可以在第一年余额的基础上累加(本金 * 利率)。
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<math.h>
//
//int main()
//{
//	int rate = 0;
//	int years = 0;
//
//	printf("请输入年利率：");
//	scanf("%d", &rate);
//	printf("请输入要投资的年份：");
//	scanf("%d", &years);
//	putchar('\n');
//
//	printf("Years\t%d%%\t%d%%\t%d%%\t%d%%\t%d%%\n", rate, rate + 1, rate + 2, rate + 3, rate + 4);
//	for (int i = 1; i <= years; i++)
//	{
//		printf("%d\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", i,
//			100 * pow((1 + rate * 0.01), i),
//			100 * pow((1 + (rate + 1) * 0.01), i),
//			100 * pow((1 + (rate + 2) * 0.01), i),
//			100 * pow((1 + (rate + 3) * 0.01), i),
//			100 * pow((1 + (rate + 4) * 0.01), i));
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

///*
//编写一个程序，要求用户键盘录入十名学生的语文成绩(百分制)，然后存储在一个一维数组中。最后计算全班的平均成绩、最高分和最低分，并打印出来。
//注意：
//	1.要求使用一个int数组来存放成绩，平均成绩保留2位小数。
//	2.如果你还不理解将数组作为参数传递的话，请不要提取函数，直接将所有代码写到main函数里。
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//#include<math.h>
//
//void input_score(int *arr, int n)
//{
//	int score = 0;
//	double avg = 0;
//	printf("请输入学生的成绩：");
//	scanf(" %d", &arr[0]);
//	int max=arr[0];
//	int min=arr[0];
//
//	for (int i = 1; i < n; i++)
//	{
//		scanf(" %d", &arr[i]);
//
//		if (arr[i] > max)
//			max = arr[i];
//
//		if (arr[i] < min)
//			min = arr[i];
//
//		avg += arr[i];
//	}
//
//	printf("平均成绩为：%lf。\n最高成绩为：%d。\n最低成绩为：%d。\n",(avg+arr[0]) / 10, max, min);
//}
//
//int main()
//{
//	int arr[10];
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	input_score(arr,len);
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//day5作业。

/*
给定一个非空的整数数组nums，已知有两个元素只出现了一次，其余元素均出现两次，那么请你找出这两个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
*/

////#include<stdio.h>
////
////int main(void)
////{
////	int arr[10] = { 24,65,76,43,213,65,76,43,24,77 };
////	int arr1 = 0;
////
////	for (int i = 0; i < 10; i++)
////	{
////		arr1 ^= arr[i];
////	}
////
////	int LSB = arr1 & (-arr1);
////
////	int greap1 = 0;
////	int greap2 = 0;
////	for (int i = 0; i < 10; i++)
////	{
////		if (arr[i] & LSB)
////			greap1 ^= arr[i];
////		else
////			greap2 ^= arr[i];
////	}
////
////	printf("%d和%d只出现了一次。\n", greap1, greap2);
////
////
////	//for (int i = 0; i < 10; i++)
////	//{
////	//	int flag = 0;
////	//	for (int j = 0; j < 10; j++)
////	//	{
////	//		if ((i!=j) && ((arr[i] ^ arr[j]) == 0))
////	//		{
////	//			flag = 1;
////	//			break;
////	//		}
////	//	}
////
////	//	if (flag == 0)
////	//	{
////	//		printf("%d只出现了一次。\n",arr[i]);
////	//	}
////	//}
////
////	return 0;
////}

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int arr[10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n - 1; i++)
//	{
//		int flag = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[flag] < arr[j])
//				flag = j;
//		}
//
//		if (flag != i)
//		{
//			int temp = arr[flag];
//			arr[flag] = arr[i];
//			arr[i] = temp;
//		}
//
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//
//		if (i != n - 1)
//		{
//			printf(" ");
//		}
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int arr[10] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int flag_max = n-1;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > arr[flag_max])
//			flag_max = i;
//	}
//	if (flag_max != n-1)
//	{
//		int temp = arr[flag_max];
//		arr[flag_max] = arr[n - 1];
//		arr[n - 1] = temp;
//	}
//
//	int flag_min = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] < arr[flag_min])
//			flag_min = i;
//	}
//	if (flag_min != 0)
//	{
//		int temp = arr[flag_min];
//		arr[flag_min] = arr[0];
//		arr[0] = temp;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main(void)
//{
//	int arr[1000] = { 0 };
//	int store_number_count[10] = { 0 };
//	int n = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		
//		while (1)
//		{
//			int temp = arr[i] % 10;
//			store_number_count[temp]++;
//		}
//
//	}
//
//	return 0;
//}

//int main()
//{
//	do
//	{
//		srand(time(NULL));
//		int first_sieve = rand() % 6 + 1;			//第一个筛子。
//		int second_siev = rand() % 6 + 1;			//第二个筛子。
//		int target = 0;							//目标。
//		int flag = 0;
//
//		//第一次投掷获胜。
//		if ((first_sieve + second_siev == 7) || (first_sieve + second_siev == 11))
//		{
//			printf("you win.point1=%d,point2=%d.\n", first_sieve, second_siev);
//			flag = 1;
//		}
//		//第一次投掷失败。
//		else if ((first_sieve + second_siev == 2) || (first_sieve + second_siev == 3) || (first_sieve + second_siev == 12))
//		{
//			printf("you false.point1=%d,point2=%d.\n", first_sieve, second_siev);
//			target = first_sieve + second_siev;				//目标点数为第一次投掷时两个筛子之和。
//		}
//		else
//		{
//			//第二次投掷。
//			first_sieve = rand() % 6 + 1;
//			second_siev = rand() % 6 + 1;
//
//			while (1)				//死循环，直到分出胜负，return 0。
//			{
//				//第二次，及以后投掷获胜。
//				if (first_sieve + second_siev == target)
//				{
//					printf("you win.point1=%d,point2=%d.\n", first_sieve, second_siev);
//					flag = 1;
//				}
//				//第二次，及以后投掷失败。
//				else if (first_sieve + second_siev == 7)
//				{
//					printf("you false.point1=%d,point2=%d.\n", first_sieve, second_siev);
//					flag = 1;
//				}
//				printf("point1=%d,point2=%d.\n", first_sieve, second_siev);
//
//				//第三次，及以后投掷。
//				first_sieve = rand() % 6 + 1;
//				second_siev = rand() % 6 + 1;
//			}
//		}
//		
//
//
//		exit(EXIT_SUCCESS);
//		exit(EXIT_FAILURE);
//
//
//
//
//
//
//
//
//		printf("是否还要继续游戏：");
//		char ch1;
//		char ch2;
//		scanf(" %c", &ch1);
//		while ((ch2 = getchar()) != '\n');
//
//		if (ch1 != 'y' || ch1 != 'Y')
//		{
//			printf("游戏结束。\n");
//			return 0;
//		}
//	} while (1);
//
//
//	return 0;
//}


///*
//只出现一次的数字
//给你一个 非空 整数数组 nums ，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
//你必须设计并实现线性时间复杂度的算法来解决此问题，且该算法只使用常量额外空间。
//*/
//
//int main(void)
//{
//	int nums[9] = { 66,4,34,65,79,79,4,66,34 };
//	int mixed_array = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		mixed_array ^= nums[i];
//	}
//
//	printf("只出现过一次的数组元素是：%d。\n", mixed_array);
//	return 0;
//}

///*
//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。要求算法具有线性时间复杂度，并且不使用额外空间。
//	1. 不能使用额外的数组或哈希表等辅助数据结构。
//	2. 利用异或运算的性质（相同数异或结果为0，任何数与0异或为其本身）实现。
//	3. 编写函数 `int bit_single_number(int *nums, int numssize)`。
//*/
//int bit_single_number(int *nums, int nums_size)
//{
//	int mixed_array = 0;
//	for (int i = 0; i < nums_size; i++)
//	{
//		mixed_array ^= nums[i];
//	}
//	return mixed_array;
//}
//
//int main(void)
//{
//	int nums[9] = { 66,4,34,65,79,79,4,66,34 };
//	int len = sizeof(nums) / sizeof(nums[0]);
//
//	printf("%d在该数组中只出现了一次。\n", bit_single_number(nums, len));
//	return 0;
//}

///*
//编写一个函数，输入是一个无符号整数（以二进制串的形式），返回其二进制表达式中数字位数为 `1` 的个数（即汉明重量）。
//	要求：
//	1. 使用 `n & (n - 1)` 操作消除最低位的 1，统计消除次数即可。				n&(n-1)可以消除最低位的1。
//	2. 编写函数 `int bit_hamming_weight(unsigned int n)`。
//*/
//
////n&(-n)
//
//int bit_hamming_weight(unsigned int n)
//{
//	int count = 0;
//
//	while (n != 0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	unsigned int num = 123;
//
//	printf("%u的二进制中有%d个1。\n", num, bit_hamming_weight(num));
//
//	return 0;
//}

///*
//给定一个整数 `n`，请你判断该整数是否是 2 的幂次方。如果是，返回 `1`；否则，返回 `0`。
//
//要求：
//1. 一个数 `n` 是 2 的幂，当且仅当 `n > 0` 且 `n & (n - 1) == 0`。
//2. 编写函数 `int bit_is_power_of_two(int n)`。
//*/
//int bit_is_power_of_two(int n)
//{
//	if (n <= 0)
//	{
//		return 0;
//	}
//
//	if ((n & (n - 1)) == 0)
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//
//int main(void)
//{
//
//	return 0;
//}

///*
//给定一个整数 `n`，请你判断该整数是否是 3 的幂次方。如果是，返回 `1`；否则，返回 `0`。
//
//要求：
//1. 通过循环将 `n` 不断除以 3，如果最终结果为 1 则是 3 的幂。
//2. 编写函数 `int bit_is_power_of_three(int n)`。
//*/
//int bit_is_power_of_three(int n)
//{
//	while (n >= 3)
//	{
//		if (n <= 0)
//			return 0;
//
//		n /= 3;
//		if (n == 1)
//			return 1;
//		if (n == 2)
//			return 0;
//	}
//}
//
//int main(void)
//{
//	return 0;
//}


///*
//现在有一副扑克牌，去掉大小王。请你写一个随机发牌程序，由用户指定发几张票，然后打印用户得到的手牌。
//	注：
//	扑克牌的花色（suit）有四种：梅花（Club）、方块（Diamond）、红心（Heart）、黑桃（Spade）
//	扑克牌的点数（point）有13种，2~10，J，Q，K，A
//*/
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<stdbool.h>
//int main()
//{
//	char suit_of_cards[4] = { 'C','D','H','S' };
//	char point_of_cards[13] = { '2','3','4','5','6','7','8','9','T','A','J','Q','K' };
//	srand(time(NULL));
//	bool already_send_card_count[4][13] = { 0 };
//
//	printf("请指定手牌个数：");
//	int num_of_handcard = 0;
//	scanf(" %d", &num_of_handcard);
//	int count = 0;
//
//	if (num_of_handcard > 52||num_of_handcard<=0)
//	{
//		printf("输入错误，最小值为1，最大值为52。\n");
//		return 0;
//	}
//
//	while (count< num_of_handcard)
//	{
//		int suit_index = rand() % 4;
//		int point_index = rand() % 13;
//
//		char suit = suit_of_cards[suit_index];
//		char point = point_of_cards[point_index];
//
//		if (already_send_card_count[suit_index][point_index] == 1)
//		{
//			printf("appeare many times!\n");
//			continue;
//		}
//
//		printf("%c%c\n", suit, point);
//		already_send_card_count[suit_index][point_index] = 1;
//		count++;
//
//	}
//
//	return 0;
//}

///*
//编写程序模拟掷骰子的游戏（每一次投掷，都投掷两个骰子）。每局游戏的规则如下：
//	第一次掷的时候：
//		如果点数之和为 7 或 11 则获胜；
//		如果点数之和为2、3或12则落败；
//		其他情况下的点数之和称为“目标”，继续投掷两个骰子。
//	在后续的投掷中：
//		如果玩家再次掷出“目标”点数则获胜；
//		如果掷出7则落败；
//		其他情况都忽略，继续投掷两个骰子。
//在每一局游戏结束时，程序都要询问用户是否再玩一次，如果用户输入的回答不是 y 或 Y ，那么就结束游戏，程序此时要打印显示胜败的次数。
//玩家游玩过程程序的输出，大体如下所示：
//
//You rolled: 5
//Your point is 5
//You rolled: 7
//You lose!
//
//Play again?(y/Y means continue) y
//You rolled: 5
//Your point is 5
//You rolled: 4
//You rolled: 4
//You rolled: 9
//You rolled: 2
//You rolled: 7
//You lose!
//
//Play again?(y/Y means continue) y
//You rolled: 4
//Your point is 4
//You rolled: 7
//You lose!
//
//Play again?(y/Y means continue) n
//
//Wins: 0 Losses: 3
//提示（请思考三个问题）：
//1.肯定需要使用随机数，那么srand设置种子值，这个函数调用应该放在哪里呢？
//2.在键盘录入是否继续游玩时，如果键盘输入的是"(空格)y"，会发生什么事情？怎么解决？
//3.在键盘录入是否继续游玩时，如果键盘输入的是"yyy"，会发生什么事情？怎么解决？
//*/
//int main()
//{
//	int win_count = 0;
//	int lose_count = 0;
//	srand(time(NULL));
//
//	do
//	{
//
//		int first_sieve = rand() % 6 + 1;			//第一个筛子。
//		int second_siev = rand() % 6 + 1;			//第二个筛子。
//		int target = first_sieve + second_siev;		//目标点数为第一次投掷时两个筛子之和。	
//		int flag = 0;
//
//		//第一次投掷获胜。
//		if ((first_sieve + second_siev == 7) || (first_sieve + second_siev == 11))
//		{
//			printf("you win.point1=%d,point2=%d.\n", first_sieve, second_siev);
//			win_count++;
//		}
//
//		//第一次投掷失败。
//		else if ((first_sieve + second_siev == 2) || (first_sieve + second_siev == 3) || (first_sieve + second_siev == 12))
//		{
//			printf("you false.point1=%d,point2=%d.\n", first_sieve, second_siev);
//			lose_count++;
//		}
//
//		else 
//		{
//			//第二次投掷。
//			first_sieve = rand() % 6 + 1;
//			second_siev = rand() % 6 + 1;
//
//			while (1)				//死循环，直到分出胜负，return 0。
//			{
//				//第二次，及以后投掷获胜。
//				if (first_sieve + second_siev == target)
//				{
//					printf("you win.point1=%d,point2=%d.\n", first_sieve, second_siev);
//					win_count++;
//					break;
//				}
//				//第二次，及以后投掷失败。
//				else if (first_sieve + second_siev == 7)
//				{
//					printf("you false.point1=%d,point2=%d.\n", first_sieve, second_siev);
//					lose_count++;
//					break;
//				}
//				printf("point1=%d,point2=%d.\n", first_sieve, second_siev);
//
//				//第三次，及以后投掷。
//				first_sieve = rand() % 6 + 1;
//				second_siev = rand() % 6 + 1;
//			}
//		}
//
//		printf("是否还要继续游戏：");
//		char ch1;
//		char ch2;
//		scanf(" %c", &ch1);
//		while ((ch2 = getchar()) != '\n');
//
//		if (ch1 != 'y' && ch1 != 'Y')
//		{
//			printf("游戏结束。胜利次数：%d。失败次数：%d。\n",win_count,lose_count);
//			return 0;
//		}
//	} while (1);
//
//
//	return 0;
//}

///*
//以下关于一维/二维数组的基础语法编程练习题，请编写代码完成。
//	1：给定一个宏定义N的值为10，声明一个长度为N的int数组，然后将数组元素初始化为它下标的平方，最后将数组元素全部累加到一起求和，并输出打印这个和。
//	2：给定两个宏定义N的值为5，M的值是3，声明一个N * M的二维数组，然后生成伪随机数将该二维数组初始化，要求随机数的范围在 1 到 100 之间。紧接着：
//	   以矩阵的样式遍历打印这个二维数组中的所有元素。
//	   求出该二维数组每一行和每一列的元素和，并输出打印结果。
//
//提示：
//每一行和每一列的和可以用数组计算和存储起来，打印元素和求和可以一次嵌套循环完成，而不需要多次。
//注意：当下请不要提取函数，就把所有代码都写在main函数里。
//
//*/
//#define N 10
//#define N1 5
//#define M 3
//
//int main(void)
//{
//	//1：给定一个宏定义N的值为10，声明一个长度为N的int数组，然后将数组元素初始化为它下标的平方，最后将数组元素全部累加到一起求和，并输出打印这个和。
//	int arr[N] = { 0 };
//	int sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		arr[i] = i * i;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		sum += arr[i];
//	}
//	printf("数组的和为：%d。\n", sum);
//
//	//2：给定两个宏定义N的值为5，M的值是3，声明一个N * M的二维数组，然后生成伪随机数将该二维数组初始化，要求随机数的范围在 1 到 100 之间。紧接着：
//	//	以矩阵的样式遍历打印这个二维数组中的所有元素。
//	//	求出该二维数组每一行和每一列的元素和，并输出打印结果。
//	srand(NULL);
//	int arr1[N1][M] = { 0 };
//	for (int i = 0; i < N1; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			arr1[i][j] = rand()%100+1;
//		}
//	}
//	printf("该二维数组的元素打印效果如下：\n");
//	for (int i = 0; i < N1; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			printf("%d\t",arr1[i][j]);
//		}
//		putchar('\n');
//	}
//
//	printf("每行的和：\n");
//	for (int i = 0; i < N1; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < M; j++)
//		{
//			sum += arr1[i][j];
//		}
//		printf("第%d行的和：%d\n", i+1, sum);
//	}
//
//	printf("每列的和：\n");
//	for (int i = 0; i < N1; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < M; j++)
//		{
//			sum += arr1[j][i];
//		}
//		printf("第%d列的和：%d\n", i + 1, sum);
//	}
//
//	return 0;
//}


///*
//键盘录入三个边长（带小数），然后用海伦公式计算三角形的面积（如果它确实是一个三角形的话）
//
//海伦公式求三角形面积：
//
//
//
//要求基于下列两个函数完成这个编程题：
//
//// 判断abc是否可以组成三角形，true表示可以组成，false表示不可以
//bool is_triangle(double a, double b, double c);
//
//// 利用海伦公式在abc可以构成三角形的前提下，求三角形面积
//double get_area(double a, double b, double c);
//注意：不要忘记使用sqrt函数要包含头文件<math.h>
//
//*/
//bool is_triangle(double a, double b, double c)
//{
//	if (a + b > c && a + c > b && b + c > a)
//		return true;
//	else
//		return false;
//}
//
//double get_area(double a, double b, double c)
//{
//	if (is_triangle(a,b,c))
//	{
//		double p = (a + b + c) / 2;
//		return sqrt(p * (p - a) * (p - b) * (p - c));
//	}
//	else
//	{
//		printf("不为三角形。\n");
//		return 0;
//	}
//}
//
//int main()
//{
//	double num1 = 0, num2 = 0, num3 = 0;
//	scanf("%lf %lf %lf",&num1,&num2,&num3);
//	printf("该三角形的面积为：%lf。\n", get_area(num1, num2, num3));
//}



////实现一个终端交互式的简易计算器，交互的形式大体如下：
////
////要求至少提供四种运算加减乘除，如下：
////
////int add(int a, int b);
////int subtract(int a, int b);
////int multiply(int a, int b);
////float divide(int a, int b);
////并且在结束进程时，打印总共执行操作的次数。（也就是这些函数调用的次数）
////
////注意：除法的实现，要求判断除数不为0，并且在除数为0时使用exit表示异常退出进程。
////
////要求：需要编写一个函数，用于随时随地打印当前操作的执行次数，也就是打印上述四个函数的调用次数。
////
////思考一下：这个变量应该设置为什么变量呢？
//
//
//double add(int a, int b)
//{
//	return (double)(a + b);
//}
//double subtract(int a, int b)
//{
//	return (double)(a - b);
//}
//double multiply(int a, int b)
//{
//	return (double)(a * b);
//}
//double divide(int a, int b)
//{
//	if (b == 0)
//		exit(EXIT_FAILURE);
//	return 1.0*a / b;
//}
//
//void my_printf()
//{
//	double num1 = 0, num2 = 0;
//	char ch;
//	printf("请输入要计算的表达式（例如：5+3）：");
//	scanf("%lf %c %lf", &num1, &ch, &num2);
//
//	switch (ch)
//	{
//	case '+':
//		printf("结果：%lf\n", add(num1, num2));
//		break;
//	case '-':
//		printf("结果：%lf\n", subtract(num1, num2));
//		break;
//	case '*':
//		printf("结果：%lf\n", multiply(num1, num2));
//		break;
//	case '/':
//		printf("结果：%lf\n", divide(num1, num2));
//		break;
//	default:
//		printf("符号输入错误。\n");
//		break;
//	}
//}
//
//int main(void)
//{
//	static count = 0;
//
//	while (1)
//	{
//		my_printf();
//		count++;
//		printf("是否继续？（y/n）：");
//		char ch;
//		scanf("%c", &ch);
//		while (getchar() != '\n');
//
//		if (ch == 'n')
//		{
//			printf("总共执行的操作此时为：%d次。\n", count);
//			break;
//		}
//	}
//	return 0;
//}

///*
//编写函数实现以下功能：
//	1：键盘录入一个正整数，请判断它是否是一个素数，然后控制台输出对应的结果。要对键盘录入的数据做参数校验，素数是一个大于1的自然数，它仅能被1和自身整除。
//	2：键盘录入两个整数：底(base)和幂指数(exponent)，计算base的exponent次幂，并打印输出对应的结果。（注意底和幂指数都可能是负数）
//提示：求幂运算时，基础的思路就是先无脑把指数转换成正数，然后累乘，最后再根据指数是否是负数决定是否取倒数。
//*/
//
////1：键盘录入一个正整数，请判断它是否是一个素数，然后控制台输出对应的结果。要对键盘录入的数据做参数校验，素数是一个大于1的自然数，它仅能被1和自身整除。
//bool is_prime(void)
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf(" %d", &num);
//
//	if (num <= 1)
//	{
//		printf("the number is a non-prime.\n");
//		return 0;
//	}
//
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			printf("the number is a non-prime.\n");
//			return 0;
//		}
//	}
//
//	printf("the number is a prime.\n");
//	return 1;
//}
//
////2：键盘录入两个整数：底(base)和幂指数(exponent)，计算base的exponent次幂，并打印输出对应的结果。（注意底和幂指数都可能是负数）
//double calculate_power()
//{
//	double base = 0;
//	double exponent = 0;
//	printf("please input base and exponent:");
//	scanf("%lf %lf", &base, &exponent);
//
//	if ((base == 0) && (exponent < 0))
//	{
//		printf("input error!exponent should be greater than zero.\n");
//		return 0;
//	}
//
//	double result = pow(base, fabs(exponent));
//
//	if (exponent > 0)
//		return result;
//	else if (exponent < 0)
//		return 1.0 / result;
//}
//
//int main(void)
//{
//	is_prime();
//
//
//
//
//	return 0;
//}

///*
//杨辉三角（YangHui Triangle）指的是南宋时期数学家杨辉，根据北宋时期的数学家贾宪的作品（现已遗失），发现的一种几何排列规律，在数学中，它是二项式系数在三角形中的一种几何排列。
//杨辉三角的大致图案如下：
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//........
//在欧洲，这个表叫做帕斯卡三角形（Pascal's Triangle），法国数学家布莱士·帕斯卡（Blaise Pascal ）在1654年发现这一规律，相比于中国，比杨辉要迟393年，比贾宪迟600年。
//杨辉三角从纯粹数字规律上来说，就是：
//每一行的元素和行数一样，即行数等于列数。第一行有一列，第二行有两列....
//第一行的元素从1开始，且之后每个元素的值，都是上一行同列元素和上一行左边列的元素之和。
//前两行的元素和每一行的首尾元素由于没有上一行同列元素或上一行左列元素，默认都是1。
//现在请你用二维数组来存储杨辉三角的前十行(每一行就是一个一维数组)，并以杨辉三角的打印格式来最终打印杨辉三角。
//
//注意：C语言的二维数组列长是一致的，所以实际上只能用二维数组的一半空间来存储元素，这一点要特别注意。
//*/
//
//int main()
//{
//	int arr[10][10] = { {1},{1,1} };
//
//	for (int i = 2; i < 10; i++)
//	{
//		arr[i][0] = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%-4d ", arr[i][j]);
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//day6作业。

//函数调用是使用什么存储的，它的过程是怎样的？
//手动画一下，以下函数的调用过程图。
//
//#include <stdio.h>
//void test(void);
//void test2(void);
//
//int main(void) {
//	printf("main before\n");
//	int a = 10;
//	test();
//	printf("mian after\n");
//	return 0;
//}
//
//void test(void) {
//	printf("test before\n");
//	int a = 20;
//	test2();
//	printf("test after\n");
//}
//
//void test2(void) {
//	printf("test2 before\n");
//	int a = 30;
//	printf("test2 after\n");
//}



////函数调用是使用什么存储的，它的过程是怎样的？
////手动画一下，以下函数的调用过程图。
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void test4() {
//	printf("test4 before.\n");
//	printf("test4 after.\n");
//}
//
//void test3() {
//	printf("test3 before.\n");
//	test4();
//	printf("test3 after.\n");
//}
//
//void test2() {
//	printf("test2 before.\n");
//	test3();
//	test4();
//	test3();
//	printf("test2 after.\n");
//}
//
//void test1() {
//	printf("test1 before.\n");
//	test2();
//	test3();
//	printf("test1 after.\n");
//}
//
//int main(void) {
//	printf("main before.\n");
//	test1();
//	//test3();
//	//test4();
//	printf("main after.\n");
//	return 0;
//}















































































































































//int main()
//{
//	int N = 0;
//	int store_number[1000] = { 0 };
//	int singal_number_count[10] = { 0 };
//	scanf(" %d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf(" %d", &store_number[i]);
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		int temp = store_number[i];
//
//		if (temp == 0)
//		{
//			singal_number_count[0]++;
//			continue;
//		}
//		else
//		{
//			while (temp != 0)
//			{
//				singal_number_count[temp % 10]++;
//				temp /= 10;
//			}
//		}
//
//	}
//
//	int flag_max = singal_number_count[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (singal_number_count[i] > flag_max)
//		{
//			flag_max = singal_number_count[i];
//		}
//	}
//
//	printf("%d:",flag_max);
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (singal_number_count[i] == flag_max)
//		{
//			printf(" %d", i);
//		}
//	}
//
//	return 0;
//}


///*
//本题要求从输入的N个整数中查找给定的X。如果找到，输出X的位置（从0开始数）；如果没有找到，输出“Not Found”。
//
//输入格式：
//输入在第一行中给出两个正整数N（≤20）和X，第二行给出N个整数。数字均不超过长整型，其间以空格分隔。
//
//输出格式：
//在一行中输出X的位置，或者“Not Found”。
//*/
//int main()
//{
//	int input_number_count = 0;
//	int need_find_number = 0;
//	scanf(" %d %d", &input_number_count, &need_find_number);
//
//	while (getchar() != '\n');
//
//	int store_number[20] = { 0 };
//	for (int i = 0; i < input_number_count; i++)
//	{
//		scanf(" %d", &store_number[i]);
//	}
//
//	while (getchar() != '\n');
//
//	int flag = 0;
//	for (int i = 0; i < input_number_count; i++)
//	{
//		if (need_find_number == store_number[i])
//		{
//			printf("%d", i);
//			flag = 1;
//		}
//	}
//
//	if (flag == 0)
//		printf("Not Found");
//
//	return 0;
//}

///*
//编写一个C程序，计算从1加到n的和，其中n由用户输入。
//
//要求：
//1. 使用scanf()接收用户输入的正整数n
//2. 使用for循环计算1到n的和
//3. 输出格式为："1到%d的和是: %d"
//
//考点： for循环
//*/
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf(" %d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("1到%d的和是: %d", n, sum);
//
//	return 0;
//}

///*
//编写一个C程序，找出所有的水仙花数并统计个数。
//
//水仙花数是指一个三位数，其各位数字的立方和等于该数本身。例如：153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153
//
//要求：
//1. 使用for循环遍历所有的三位数（100-999）
//2. 分离出百位、十位和个位数字
//3. 计算各位数字的立方和
//4. 判断是否为水仙花数，如果是则输出
//5. 统计水仙花数的个数并输出
//
//考点： 嵌套循环，整数分解
//*/
//int main()
//{
//	int ones_place = 0;
//	int tens_place = 0;
//	int hundreds_place = 0;
//	for (int i = 100; i <= 999; i++)
//	{
//		ones_place = i % 10;
//		hundreds_place = i / 100;
//		tens_place = (i % 100) / 10;
//
//		if (pow(ones_place, 3) + pow(tens_place, 3) + pow(hundreds_place, 3) == i)
//			printf("%d是一个水仙花数。\n", i);
//	}
//
//	return 0;
//}

///*
//编写一个C程序，实现一个简单的猜数字游戏。程序随机生成一个1-100之间的数字，用户有5次机会猜这个数字。
//
//要求：
//1. 使用rand()函数生成1-100之间的随机数
//2. 使用while循环控制最多猜5次
//3. 每次猜完后给出提示（猜大了、猜小了）
//4. 如果猜对了，使用break语句跳出循环并输出恭喜信息
//5. 如果5次都没猜对，输出正确答案
//
//考点： while循环，break语句，随机数
//*/
//int main()
//{
//	//生成随机数。
//	srand(time(NULL));
//	int random_number_from_one_to_hundred = rand() % 100 + 1;
//	int count = 0;
//	int input_number = 0;
//
//	while (count < 5)
//	{
//		count++;
//
//		scanf(" %d", &input_number);
//
//		if (input_number > random_number_from_one_to_hundred)
//		{
//			printf("猜大了。\n");
//		}
//		else if (input_number < random_number_from_one_to_hundred)
//		{
//			printf("猜小了。\n");
//		}
//		else if (input_number == random_number_from_one_to_hundred)
//		{
//			printf("恭喜您，猜对了。\n");
//			break;
//		}
//
//	}
//
//	return 0;
//}

///*
//编写一个C程序，要求用户输入5个整数，计算其中所有非负整数（大于等于0）的和。
//
//要求：
//1. 使用for循环接收5次输入
//2. 使用continue语句跳过负数（小于0的数）
//3. 只累加非负整数
//4. 输出格式为："非负整数的和是: %d"
//*/
//int main()
//{
//	int arr[5] = { 0 };
//
//	for (int i = 0; i < 5; i++)
//	{
//		scanf(" %d", &arr[i]);
//	}
//
//	int non_negative_integer_sum = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i] < 0)
//			continue;
//		else
//			non_negative_integer_sum += arr[i];
//	}
//		
//	printf("非负整数的和是: %d。\n", non_negative_integer_sum);
//
//	return 0;
//}

///*
//编写一个C程序，打印一个数字金字塔。
//
//例如，当输入5时，输出如下金字塔：
//
//	  1
//   121
//  12321
// 1234321
//123454321
//要求：
//1. 用户输入金字塔的层数n（1-9）
//2. 使用双层嵌套for循环打印金字塔
//3. 外层循环控制行数
//4. 内层循环控制每行输出的数字
//*/
//int main()
//{
//	int n = 0;
//	scanf(" %d", &n);
//
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= n-1; j++)
//		{
//			printf(" ");
//		}
//
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d", j);
//		}
//
//		for (int j = i-1; j >=1; j--)
//		{
//			printf("%d", j);
//		}
//
//		putchar('\n');
//	}
//
//	return 0;
//}

///*
//编写一个函数isPrime()，判断一个整数是否为素数（质数），然后在主函数中测试。
//
//要求：
//1. 编写一个函数int isPrime(int num)，如果num是素数返回1，否则返回0
//2. 在主函数中调用该函数测试几个数字
//3. 素数定义：大于1的自然数，除了1和它本身外，不能被其他自然数整除
//4. 使用for循环和break语句优化判断过程
//5. 使用return语句提前返回结果
//*/
//int isPrime(int num)
//{
//	if (num <= 1)
//	{
//		return 0;
//	}
//
//	int flag = 1;
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf(" %d", &n);
//
//	if (isPrime(n) == 1)
//	{
//		printf("%d是素数。\n", n);
//	}
//	else if (isPrime(n) == 0)
//	{
//		printf("%d不是素数。\n", n);
//	}
//
//	return 0;
//}

///*
//编写一个程序实现以下需求：
//	用户键盘录入一整行字符数据，包含数字和字母。
//	当用户按下回车键后结束数据录入。
//	请统计用户输入的一整行字符数据中，数字和字母分别有多少个。
//*/
//int main()
//{
//	char ch;
//	int number_of_digits = 0;
//	int number_of_letters = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= '0' && ch <= '9')
//			number_of_digits++;
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			number_of_letters++;
//	}
//	printf("数字有：%d个。\n字母有：%d个。\n", number_of_digits, number_of_letters);
//
//	return 0;
//}

///*
//用位运算符实现以下算法
//	1：定义一个函数，判断某个整数是否为奇数。
//	2：给定一个正整数，请定义一个函数判断它是否为2的幂(1, 2, 4, 8, 16, ....)。
//	3：给定一个不为0的整数，编写函数找出它值为1的最低有效位 (称之为Last Set Bit)。LSB是1表示此整数的最低位就是1,2则表示倒数第二位是第一个1,4表示倒数第三位是第一个1....
//			一个示例如下
//			输入：n = 24
//			输出：8
//			解释：24的二进制表示为 11000，值为 1 的最低有效位是倒数第四位，则输出 2^3，即输出的结果8。
//	4：给定两个不同的整数 a 和 b，请交换它们两个的值。（不要定义函数来实现，直接在main函数里实现）
//	5：给定一个非空的整数数组nums，已知某个元素只出现了一次，其余元素均出现两次，那么请你找出这个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//扩展题目:
//给定一个非空的整数数组nums，已知有两个元素只出现了一次，其余元素均出现两次，那么请你找出这两个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//*/
////1：定义一个函数，判断某个整数是否为奇数。
//bool isodd(int num)
//{
//	if ((num & 1) == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//
////2：给定一个正整数，请定义一个函数判断它是否为2的幂(1, 2, 4, 8, 16, ....)。
//bool is_exponent_of_two(int num)
//{
//	if(num<0) return 0;
//	return !(bool)(num & (num - 1));
//}
//
////3：给定一个不为0的整数，编写函数找出它值为1的最低有效位(称之为Last Set Bit)。LSB是1表示此整数的最低位就是1, 2则表示倒数第二位是第一个1, 4表示倒数第三位是第一个1....
//int LSB(int num)						//该函数的是：找出该数最低位上的1。
//{
//	return num & (-num);
//}
//
//int main()
//{
//	//1：定义一个函数，判断某个整数是否为奇数。
//	if (isodd(10086) == 1)
//	{
//		printf("该数字为奇数。\n");
//	}
//	else
//	{
//		printf("该数字为偶数。\n");
//	}
//
//	//2：给定一个正整数，请定义一个函数判断它是否为2的幂(1, 2, 4, 8, 16, ....)。
//	if (is_exponent_of_two(8) == 1)
//	{
//		printf("该数字为2的幂次。\n");
//	}
//	else
//	{
//		printf("该数字不为2的幂次。\n");
//	}
//	
//	//3：给定一个不为0的整数，编写函数找出它值为1的最低有效位(称之为Last Set Bit)。LSB是1表示此整数的最低位就是1, 2则表示倒数第二位是第一个1, 4表示倒数第三位是第一个1....
//	printf("%d是%d最低位上的1。\n", LSB(10), 10);
//
//	//4：给定两个不同的整数 a 和 b，请交换它们两个的值。（不要定义函数来实现，直接在main函数里实现）
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	//5：给定一个非空的整数数组nums，已知某个元素只出现了一次，其余元素均出现两次，那么请你找出这个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//	int nums[9] = { 56,43,32,78,90,78,56,43,32 };
//	int n = 0;
//	for (int i = 0; i < 9; i++)
//	{
//		n ^= nums[i];
//	}
//	printf("只出现过一次的元素是：%d。\n", n);
//
//	//给定一个非空的整数数组nums，已知有两个元素只出现了一次，其余元素均出现两次，那么请你找出这两个只出现一次的元素。（不要定义函数来实现，直接在main函数里实现）
//	int nums1[10] = { 56,43,32,78,90,78,56,43,32,99 };
//	int k = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		k ^= nums1[i];
//	}
//
//	int number1 = 0;
//	int number2 = 0;
//	int lsb = LSB(n);
//	for (int i = 0; i < 10; i++)
//	{
//		if ((nums1[i] & lsb) == 1)
//			number1 ^= nums1[i];
//		else
//			number2 ^= nums1[i];
//	}
//	printf("只出现过一次的两个数是：%d和%d。\n", number1, number2);
//
//	return 0;
//}

////编写一个程序实现一个简单的计算器，能够处理加法、减法、乘法和除法。
//// 
////输入：用户输入两个数字(可以带小数)和一个操作符（ + 、 - 、 * 、 / ）。
////输出：显示计算的表达式及结果。
////
////注意以下几个要求：
////		1. 代码可以直接写在main函数里，不需要提取函数。
////		2. 输入的表达式应当符合格式要求，应当正常录入两个操作数和一个运算符，否则直接退出程序。
////		3. 在进行除法操作时，需要保证除数不为0，若除数为0，则直接退出程序。
////提示：考虑switch结构，选择不同的运算符。
//
//int main()
//{
//	double num1 = 0;
//	double num2 = 0;
//	char ch1;
//	char ch2;
//
//	if (scanf("%lf %c %lf", &num1, &ch1, &num2) != 3)
//	{
//		printf("格式输入错误！请按照格式：数字 运算符 数字。\n");
//		exit(EXIT_FAILURE);
//	}
//	
//
//	while ((ch2 = getchar()) != '\n');
//
//	switch (ch1)
//	{
//	case '+':
//		printf("%lf %c %lf = %.2lf\n", num1, ch1, num2, num1 + num2);
//		break;
//	case '-':
//		printf("%lf %c %lf = %.2lf\n", num1, ch1, num2, num1 - num2);
//		break;
//	case '*':
//		printf("%lf %c %lf = %.2lf\n", num1, ch1, num2, num1 * num2);
//		break;
//	case '/':
//		if (num2 == 0)
//		{
//			printf("Error：除数为0！\n");
//			exit(EXIT_FAILURE);
//		}
//		printf("%lf %c %lf = %.2lf\n", num1, ch1, num2, num1 / num2);
//		break;
//	}
//
//	return 0;
//}


////在上面简单计算器题目的基础上，实现以下功能：
////1.在进行完一次运算后，询问用户是否继续运算。只要用户输入y / Y就可以继续运算，而不是只能计算一次。
////2.当用户的输入有误时，不退出程序，而是要求用户继续输入表达式计算。
////
////提示：
////	可以考虑使用do...while循环结构，配合循环控制变量来解决，代码仍然都写在main函数中即可。
////	写完代码后，可以测试一下：在询问循环是否继续时输入"yyyyy"，会发生什么情况呢？如何解决？
//int main()
//{
//
//
//
//
//
//	do
//	{
//		printf("请输入需要计算的表达式：");
//
//		double num1 = 0;
//		double num2 = 0;
//		char ch1;
//		char ch2;
//
//		if (scanf("%lf %c %lf", &num1, &ch1, &num2) != 3)
//		{
//			printf("格式输入错误！请按照格式：数字 运算符 数字。\n");
//			while (getchar() != '\n');
//			continue;
//		}
//
//
//		while (getchar() != '\n');
//
//		switch (ch1)
//		{
//		case '+':
//			printf("%lf %c %lf = %.2lf\n", num1, ch1, num2, num1 + num2);
//			break;
//		case '-':
//			printf("%lf %c %lf = %.2lf\n", num1, ch1, num2, num1 - num2);
//			break;
//		case '*':
//			printf("%lf %c %lf = %.2lf\n", num1, ch1, num2, num1 * num2);
//			break;
//		case '/':
//			if (num2 == 0)
//			{
//				printf("Error：除数为0！\n");
//				break;
//			}
//			printf("%lf %c %lf = %.2lf\n", num1, ch1, num2, num1 / num2);
//			break;
//		}
//
//		putchar('\n');
//
//		printf("是否继续计算？（输入'y/Y'继续，其他任意键结束）：");
//		char ch;
//		scanf(" %c", &ch);
//		while (getchar() != '\n');
//		if (ch != 'Y' && ch != 'y')
//			return 0;
//		
//		putchar('\n');
//
//	} while (1);
//
//
//
//	return 0;
//}

///*
//以下关于一维/二维数组的基础语法编程练习题，请编写代码完成。
//	1：给定一个宏定义N的值为10，声明一个长度为N的int数组，然后将数组元素初始化为它下标的平方，最后将数组元素全部累加到一起求和，并输出打印这个和。
//	2：给定两个宏定义N的值为5，M的值是3，声明一个N * M的二维数组，然后生成伪随机数将该二维数组初始化，要求随机数的范围在 1 到 100 之间。紧接着：
//		以矩阵的样式遍历打印这个二维数组中的所有元素。
//		求出该二维数组每一行和每一列的元素和，并输出打印结果。
//提示：
//每一行和每一列的和可以用数组计算和存储起来，打印元素和求和可以一次嵌套循环完成，而不需要多次。
//注意：当下请不要提取函数，就把所有代码都写在main函数里。
//*/
//#define N 10
//#define N1 5
//#define M 3
//int main()
//{
//	srand(1);
//	//1：给定一个宏定义N的值为10，声明一个长度为N的int数组，然后将数组元素初始化为它下标的平方，最后将数组元素全部累加到一起求和，并输出打印这个和。
//	int arr[N] = { 0 };
//	int sum = 0;
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i * i;
//		sum += arr[i];
//	}
//	printf("数组元素的和为：%d。\n", sum);
//
//	//2：给定两个宏定义N的值为5，M的值是3，声明一个N * M的二维数组，然后生成伪随机数将该二维数组初始化，要求随机数的范围在 1 到 100 之间。
//	int arr1[N1][M] = { 0 };
//	printf("该二维数组的元素打印效果如下：\n");
//	for (int i = 0; i < N1; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			arr1[i][j] = rand() % 100 + 1;
//			printf("%d\t", arr1[i][j]);
//		}
//		putchar('\n');
//	}
//
//	int sum_of_row = 0;
//	int sum_of_column = 0;
//	
//	printf("每行的和：\n");
//	for (int i = 0; i < N1; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			sum_of_row += arr1[i][j];
//		}
//		printf("第%d行的和：%d\n", i+1, sum_of_row);
//		sum_of_row = 0;
//	}
//
//	printf("每列的和：\n");
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N1; j++)
//		{
//			sum_of_column += arr1[j][i];
//		}
//		printf("第%d列的和：%d\n", i+1, sum_of_column);
//		sum_of_column = 0;
//	}
//
//
//	return 0;
//}


///*
//杨辉三角（YangHui Triangle）指的是南宋时期数学家杨辉，根据北宋时期的数学家贾宪的作品（现已遗失），发现的一种几何排列规律，在数学中，它是二项式系数在三角形中的一种几何排列。
//杨辉三角的大致图案如下：
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//........
//
//在欧洲，这个表叫做帕斯卡三角形（Pascal's Triangle），法国数学家布莱士·帕斯卡（Blaise Pascal ）在1654年发现这一规律，相比于中国，比杨辉要迟393年，比贾宪迟600年。
//杨辉三角从纯粹数字规律上来说，就是：
//每一行的元素和行数一样，即行数等于列数。第一行有一列，第二行有两列....
//第一行的元素从1开始，且之后每个元素的值，都是上一行同列元素和上一行左边列的元素之和。
//前两行的元素和每一行的首尾元素由于没有上一行同列元素或上一行左列元素，默认都是1。
//现在请你用二维数组来存储杨辉三角的前十行(每一行就是一个一维数组)，并以杨辉三角的打印格式来最终打印杨辉三角。
//
//注意：C语言的二维数组列长是一致的，所以实际上只能用二维数组的一半空间来存储元素，这一点要特别注意。
//*/
//int main()
//{
//	int arr[10][10] = { 0 };
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i][0] = 1;
//	}
//
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i-1][j] + arr[i - 1][j - 1];
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf(" %d", arr[i][j]);
//		}
//		putchar('\n');
//	}
//
//	return 0;
//}
//

///*
//现在有一副扑克牌，去掉大小王。请你写一个随机发牌程序，由用户指定发几张票，然后打印用户得到的手牌。
//
//注：
//	扑克牌的花色（suit）有四种：梅花（Club）、方块（Diamond）、红心（Heart）、黑桃（Spade）
//	扑克牌的点数（point）有13种，2~10，J，Q，K，A
//*/
//int main()
//{
//	srand(time(NULL));																				//设置时间种子。
//
//	char suit_of_card[4] = { 'C','D','H','S' };
//	char point_of_card[13] = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };
//
//	int hand_card_count = 0;
//	printf("请输入您需要的手牌数量：");
//	scanf(" %d", &hand_card_count);
//
//	if (hand_card_count > 52|| hand_card_count<=0)
//	{
//		printf("输入手牌数量错误！\n");
//		exit(EXIT_FAILURE);
//	}
//
//	bool arr[4][13] = { 0 };
//
//	printf("您的手牌是：\n");
//	int count = 0;
//	while (count < hand_card_count)
//	{
//		int random_of_suit = rand() % 4;
//		int random_of_point = rand() % 13;
//
//		if (arr[random_of_suit][random_of_point] == true)
//			continue;
//
//		printf("%c%c\t", suit_of_card[random_of_suit], point_of_card[random_of_point]);
//		arr[random_of_suit][random_of_point] = true;
//		count++;
//	}
//
//	return 0;
//}

///*
//编写程序模拟掷骰子的游戏（每一次投掷，都投掷两个骰子）。每局游戏的规则如下：
//		1：第一次掷的时候：
//				如果点数之和为 7 或 11 则获胜；
//				如果点数之和为2、3或12则落败；
//				其他情况下的点数之和称为“目标”，继续投掷两个骰子。
//		2：在后续的投掷中：
//				如果玩家再次掷出“目标”点数则获胜；
//				如果掷出7则落败；
//				其他情况都忽略，继续投掷两个骰子。
//在每一局游戏结束时，程序都要询问用户是否再玩一次，如果用户输入的回答不是 y 或 Y ，那么就结束游戏，程序此时要打印显示胜败的次数。
//玩家游玩过程程序的输出，大体如下所示：
//
//You rolled: 5
//Your point is 5
//You rolled: 7
//You lose!
//
//Play again?(y/Y means continue) y
//You rolled: 5
//Your point is 5
//You rolled: 4
//You rolled: 4
//You rolled: 9
//You rolled: 2
//You rolled: 7
//You lose!
//
//Play again?(y/Y means continue) y
//You rolled: 4
//Your point is 4
//You rolled: 7
//You lose!
//
//Play again?(y/Y means continue) n
//
//Wins: 0 Losses: 3
//提示（请思考三个问题）：
//	1.肯定需要使用随机数，那么srand设置种子值，这个函数调用应该放在哪里呢？
//	2.在键盘录入是否继续游玩时，如果键盘输入的是"(空格)y"，会发生什么事情？怎么解决？
//	3.在键盘录入是否继续游玩时，如果键盘输入的是"yyy"，会发生什么事情？怎么解决？
//*/
//int main()
//{
//	srand(time(NULL));
//
//	int win_count = 0;
//	int lose_count = 0;
//
//	do
//	{
//		int first_sieve = rand() % 6 + 1;
//		int second_sieve = rand() % 6 + 1;
//		int target = first_sieve + second_sieve;
//		printf("you rolled:%d.\n", target);
//
//		if (target == 7 || target == 11)
//		{
//			printf("you win\n");
//			win_count++;
//		}
//		else if (target == 2 || target == 3 || target == 12)
//		{
//			printf("you lose!\n");
//			lose_count++;
//		}
//		else
//		{
//			printf("Your point is %d.\n", target);
//
//			while (1)
//			{
//				first_sieve = rand() % 6 + 1;
//				second_sieve = rand() % 6 + 1;
//
//				if (first_sieve + second_sieve == target)
//				{
//					printf("you rolled:%d.\n", first_sieve + second_sieve);
//					printf("you win\n");
//					win_count++;
//					break;
//				}
//				else if (first_sieve + second_sieve == 7)
//				{
//					printf("you rolled:%d.\n", first_sieve + second_sieve);
//					printf("you lose!\n");
//					lose_count++;
//					break;
//				}
//
//				printf("you rolled:%d.\n", first_sieve + second_sieve);
//			}
//		}
//
//		putchar('\n');
//
//		printf("Play again?(y/Y means continue):");
//		char ch;
//		scanf(" %c", &ch);
//		while (getchar() != '\n');
//		if (ch != 'y' && ch != 'Y')
//			break;
//
//	} while (1);
//
//	printf("Wins: %d Losses: %d", win_count, lose_count);
//
//	return 0;
//}





///*
//以下题目功能，都要求编写函数将数组作为参数传递来实现：
//	1.编写函数交换数组中两个下标的元素。函数声明如下：void swap(int *arr, int i, int j) 。要求不使用[]运算符，将[]还原成解引用运算符和指针加法来完成。
//	2.数组元素的逆序。要求使用[]运算符以及纯粹指针操作两种方式来完成。
//	3.数组元素求和。要求使用"*p++"语法结构来完成数组元素的累加 。
//	4.给定一个int数组以及一个目标值target，请编写函数找到这个目标值的下标，要求该函数没有返回值。
//	5.编写一个函数，检查一个整数数组是否是回文，即正序与倒序相同。例如[1,2,3,2,1]就是回文的。要求使用指针的算术运算，不要使用取下标[]运算符。
//	6.给定一个非空整数数组src，再给定一个足够长的dest数组。编写一个函数 copy_array，使用 *p++ 复制src数组到dest数组。
//	注意：这道题目要把代码写得尽量简洁！！
//	7.给定一个整数数组，将该数组中所有奇数移到数组的前面，偶数移到数组的后面。（扩展题）
//*/
//#define ARR_LEN(arr) (sizeof(arr)/sizeof(arr[0])
////1.编写函数交换数组中两个下标的元素。函数声明如下：void swap(int *arr, int i, int j) 。要求不使用[]运算符，将[]还原成解引用运算符和指针加法来完成。
//void swap(int *arr, int i, int j)					//注意：指针的加法，会自动偏移对应的元素，不需要考虑对应的字节数。手动乘以 4 是画蛇添足，会导致访问到错误的内存地址（偏移了 4 倍）。
//{
//	int temp = *(arr + i);
//	*(arr + i) = *(arr + j);
//	*(arr + j) = temp;
//}
//
////2.数组元素的逆序。要求使用[]运算符以及纯粹指针操作两种方式来完成。
//void reverse_order1(int *arr, int len)
//{
//	for (int i = 0; i < len / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[len - i-1];
//		arr[len - i-1] = temp;
//	}
//}
//void reverse_order2(int *arr, int len)
//{
//	for (int i = 0; i < len / 2; i++)
//	{
//		int temp = *(arr + i);
//		*(arr + i) = *(arr + len - i - 1);
//		*(arr + len - i - 1) = temp;
//	}
//}
//
////3.数组元素求和。要求使用"*p++"语法结构来完成数组元素的累加 。
//int accumulate_arrary_element(int *arr,int len)
//{
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum += *arr++;
//	}
//	return sum;
//}
//
////4.给定一个int数组以及一个目标值target，请编写函数找到这个目标值的下标，要求该函数没有返回值。
//void find_target(int *p,int len,int target)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (p[i] == target)
//		{
//			printf("该数的下标为%d。\n", i);
//			return;
//		}
//	}
//}
//
////5.编写一个函数，检查一个整数数组是否是回文，即正序与倒序相同。例如[1, 2, 3, 2, 1]就是回文的。要求使用指针的算术运算，不要使用取下标[]运算符。
//bool isPalindrome(int *p,int len)
//{
//	for (int i = 0; i < (int)len / 2; i++)
//	{
//		if (*(p + i) != *(p + len - i-1))
//			return false;
//	}
//	return true;
//}
//
////6.给定一个非空整数数组src，再给定一个足够长的dest数组。编写一个函数 copy_array，使用 * p++ 复制src数组到dest数组。
//void copy_array(int *src, int len, int *dest)
//{
//	for (int i = 0; i < len; i++)
//	{
//		*dest++ = *src++;
//	}
//}
//
//7.给定一个整数数组，将该数组中所有奇数移到数组的前面，偶数移到数组的后面。（扩展题）
//{18,23,90,54,8,43,23,54,87,45}
//void move_odd(int *arr, int len)
//{
//	//统计奇数个数。
//	int odd_number = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] % 2 == 1)
//			odd_number++;
//	}
//
//	//移动奇数。
//	for (int i = 0; i < odd_number; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			for (int j = i+1; j < len; j++)
//			{
//				if (arr[j] % 2 == 1)
//				{
//					int temp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = temp;
//					break;
//				}
//			}
//		}
//	}
//}

////{18,23,90,54,8,43,23,54,87,45}
//void move_odd1(int *arr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)
//			left++;
//		while (left < right && arr[right] % 2 == 0)
//			right--;
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
// 
//int main()
//{
//	int shuzu[10] = {18,23,90,54,8,43,23,54,87,45};
//	//1.编写函数交换数组中两个下标的元素。函数声明如下：void swap(int *arr, int i, int j) 。要求不使用[]运算符，将[]还原成解引用运算符和指针加法来完成。
//
//	//2.数组元素的逆序。要求使用[]运算符以及纯粹指针操作两种方式来完成。
//
//	//3.数组元素求和。要求使用"*p++"语法结构来完成数组元素的累加 。
//
//	//4.给定一个int数组以及一个目标值target，请编写函数找到这个目标值的下标，要求该函数没有返回值。
//
//	//5.编写一个函数，检查一个整数数组是否是回文，即正序与倒序相同。例如[1, 2, 3, 2, 1]就是回文的。要求使用指针的算术运算，不要使用取下标[]运算符。
//
//	//6.给定一个非空整数数组src，再给定一个足够长的dest数组。编写一个函数 copy_array，使用 * p++ 复制src数组到dest数组。
//
//	//7.给定一个整数数组，将该数组中所有奇数移到数组的前面，偶数移到数组的后面。（扩展题）
//
//	move_odd1(shuzu, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		printf(" %d ", shuzu[i]);
//	}
//
//	return 0;
//}

///*
//第一题：
//	查找数组的最大值和最小值，但要将最大值作为返回值返回，最小值则依靠传入的指针完成赋值。
//	要求不能使用"[]"运算符。
//	函数的声明如下：
//	int max_min(int *arr, int len, int *pmin);
//第二题：
//	求平均值，给定一个double数组，求平均值，并且返回。
//	要求使用while循环遍历数组，然后配合"*p++"的语法实现。
//	函数的声明如下：
//	double get_ave(double *arr, int len);
//*/
//int max_min(int *arr, int len, int *pmin)
//{
//	int max = *arr;
//	int min = *arr;
//
//	for (int i = 0; i < len; i++)
//	{
//		if (*(arr+i) > max)
//		{
//			max = *(arr + i);
//		}
//
//		if (*(arr + i) < min)
//		{
//			min = *(arr + i);
//		}
//	}
//	*pmin = min;
//
//	return max;
//}
//
//double get_ave(double *arr, int len)
//{
//	double sum = 0;
//	int count = 0;
//	while (count<len)
//	{
//		sum += *arr++;
//		count++;
//	}
//
//	return sum / len;
//}
//
//int main()
//{
//
//
//
//
//	return 0;
//}


///*
//基于以下函数声明，实现函数：
//
//void split_time(long total_sec, int* hour, int* minute, int* second);
//
//形参中的 total_sec 表示从凌晨00:00:00开始，到现在时间的秒数。
//请将 total_sec 转化以时(0-23)、分(0-59)、秒(0-59)表示的时间，并存放到函数外部由指针 hour, minute, second 指向的变量中。
//并在函数调用的位置，打印出当前的时间。
//
//测试用例：
//total_sec = 0，表示时间 00:00:00
//total_sec = 9527，表示时间 02:38:47
//total_sec = 3001，表示时间 00:50:01
//*/
//void split_time(long total_sec, int *hour, int *minute, int *second)
//{
//	*hour = total_sec / (60 * 60);
//	*minute = (total_sec - *hour * 60 * 60) / 60;
//	*second = total_sec % 60;
//}
//
//int main()
//{
//
//
//
//
//
//	return 0;
//}

///*
//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
//你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
//你可以按任意顺序返回答案。
//
//示例 1：
//
//输入：nums = [2,7,11,15], target = 9
//输出：[0,1]
//解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。
//示例 2：
//
//输入：nums = [3,2,4], target = 6
//输出：[1,2]
//示例 3：
//
//输入：nums = [3,3], target = 6
//输出：[0,1]
//*/
//int main()
//{
//	int nums[6] = {8,3,5,2,4,7};
//	int target = 12;
//
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = i+1; j < 6; j++)
//		{
//			if (nums[i] + nums[j] == target)
//			{
//				printf("%d %d\n", i, j);
//			}
//		}
//	}
//
//	return 0;
//}

///*
//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//有效字符串需满足：
//	左括号必须用相同类型的右括号闭合。
//	左括号必须以正确的顺序闭合。
//	每个右括号都有一个对应的相同类型的左括号。
//
//示例 1：
//输入：s = "()"
//输出：true
//
//示例 2：
//输入：s = "()[]{}"
//输出：true
//
//示例 3：
//输入：s = "(]"
//输出：false
//
//示例 4：
//输入：s = "([])"
//输出：true
//*/
//int main()
//{
//	char ch;
//	char ch[] = "{[}({)]}";
//
//	while ((ch = getchar()) != NULL)
//	{
//		
//	}
//
//
//
//
//
//	return 0;
//}

///*
//给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
//请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
//注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
//
//示例 1：
//输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
//输出：[1,2,2,3,5,6]
//解释：需要合并 [1,2,3] 和 [2,5,6] 。
//合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
//
//示例 2：
//输入：nums1 = [1], m = 1, nums2 = [], n = 0
//输出：[1]
//解释：需要合并 [1] 和 [] 。
//合并结果是 [1] 。
//
//示例 3：
//输入：nums1 = [0], m = 0, nums2 = [1], n = 1
//输出：[1]
//解释：需要合并的数组是 [] 和 [1] 。
//合并结果是 [1] 。
//注意，因为 m = 0 ，所以 nums1 中没有元素。nums1 中仅存的 0 仅仅是为了确保合并结果可以顺利存放到 nums1 中。
//*/
//int main()
//{
//	int nums1[10] = { 1,2,2,4,9 };
//	int nums2[5] = { 3,5,6,8,10 };
//
//	int *n1 = nums1;
//	int *n2 = nums2;
//
//	while ()
//	{
//		if ((*n1 < *n2) && ((*n1 + 1) > *n2))
//		{
//
//		}
//
//
//
//	}
//
//
//
//
//
//	return 0;
//}

///*
//基于以下函数声明，实现函数：
//void split_time(long total_sec, int* hour, int* minute, int* second);
//形参中的 total_sec 表示从凌晨00:00:00开始，到现在时间的秒数。
//请将 total_sec 转化以时(0-23)、分(0-59)、秒(0-59)表示的时间，并存放到函数外部由指针 hour, minute, second 指向的变量中。
//并在函数调用的位置，打印出当前的时间。
//
//测试用例：
//total_sec = 0，表示时间 00:00:00
//total_sec = 9527，表示时间 02:38:47
//total_sec = 3001，表示时间 00:50:01
//*/
//
//void split_time(long total_sec, int *hour, int *minute, int *second)
//{
//	*hour = total_sec / (60 * 60);
//	*minute = (total_sec % (60 * 60)) / 60;
//	*second = total_sec % 60;
//}
//
//
//int main()
//{
//	long total_sec = 3001;
//	int hour_1 = 0;
//	int minute_1 = 0;
//	int second_1 = 0;
//
//	split_time(total_sec,&hour_1,&minute_1,&second_1);
//
//	printf("%02d:%02d:%02d\n", hour_1, minute_1, second_1);
//
//
//
//
//	return 0;
//}


///*
//第一题：
//查找数组的最大值和最小值，但要将最大值作为返回值返回，最小值则依靠传入的指针完成赋值。
//要求不能使用"[]"运算符。
//函数的声明如下：
//int max_min(int *arr, int len, int *pmin);
//
//第二题：
//求平均值，给定一个double数组，求平均值，并且返回。
//要求使用while循环遍历数组，然后配合"*p++"的语法实现。
//函数的声明如下：
//double get_ave(double *arr, int len);
//*/
//
//int max_min(int *arr, int len, int *pmin)
//{
//	int max = *arr;
//	int min = *arr;
//
//	for (int i = 1; i < len; i++)
//	{
//		if (max < *(arr + i))
//		{
//			max = *(arr + i);
//		}
//
//		if (min > *(arr + i))
//		{
//			min = *(arr + i);
//		}
//	}
//
//	*pmin = min;
//
//	return max;
//}
//
//double get_ave(double *arr, int len)
//{
//	double sum = 0;
//	int i = len;
//
//	while (i>0)
//	{
//		sum += *arr++;
//		i--;
//	}
//
//	return sum / len;
//}
//
//int main()
//{
//	return 0;
//}

///*
//以下题目功能，都要求编写函数将数组作为参数传递来实现：
//1.编写函数交换数组中两个下标的元素。函数声明如下：void swap(int *arr, int i, int j) 。要求不使用[]运算符，将[]还原成解引用运算符和指针加法来完成。
//2.数组元素的逆序。要求使用[]运算符以及纯粹指针操作两种方式来完成。
//3.数组元素求和。要求使用"*p++"语法结构来完成数组元素的累加 。
//4.给定一个int数组以及一个目标值target，请编写函数找到这个目标值的下标，要求该函数没有返回值。
//5.编写一个函数，检查一个整数数组是否是回文，即正序与倒序相同。例如[1,2,3,2,1]就是回文的。要求使用指针的算术运算，不要使用取下标[]运算符。
//6.给定一个非空整数数组src，再给定一个足够长的dest数组。编写一个函数 copy_array，使用 *p++ 复制src数组到dest数组。
//注意：这道题目要把代码写得尽量简洁！！
//7.给定一个整数数组，将该数组中所有奇数移到数组的前面，偶数移到数组的后面。（扩展题）
//*/
////1.编写函数交换数组中两个下标的元素。函数声明如下：void swap(int *arr, int i, int j) 。要求不使用[]运算符，将[]还原成解引用运算符和指针加法来完成。
//void swap(int *arr, int i, int j)
//{
//	int temp = *(arr + i);
//	*(arr + i) = *(arr + j);
//	*(arr + j) = temp;
//}
////2.数组元素的逆序。要求使用[]运算符以及纯粹指针操作两种方式来完成。
//void reverse_odd_1(int arr[], int len)
//{
//	for (int i = 0; i < (len / 2); i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = temp;
//	}
//}
//void reverse_odd_2(int *arr, int len)
//{
//	for (int i = 0; i < (len / 2); i++)
//	{
//		int temp = *(arr+i);
//		*(arr+i) = *(arr+len - 1 - i);
//		*(arr + len - 1 - i) = temp;
//	}
//}
////3.数组元素求和。要求使用"*p++"语法结构来完成数组元素的累加 。
//int accumulator_sum(int arr[], int len)
//{
//	int sum = 0;
//
//	for (int i = 0; i < len; i++)
//	{
//		sum += *arr++;
//	}
//
//	return sum;
//}
////4.给定一个int数组以及一个目标值target，请编写函数找到这个目标值的下标，要求该函数没有返回值。
//void find_target(int *arr,int len,int target)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == target)
//		{
//			printf("目标值的下标为：%d。\n", i);
//		}
//	}
//}
////5.编写一个函数，检查一个整数数组是否是回文，即正序与倒序相同。例如[1, 2, 3, 2, 1]就是回文的。要求使用指针的算术运算，不要使用取下标[]运算符。
//void Palindrome(int *arr, int len)
//{
//	int flag = 0;
//	for (int i = 0; i < len/2; i++)
//	{
//		if (*(arr + i) == *(arr + len - 1 - i))
//			continue;
//		flag = 1;
//	}
//
//	if (flag == 1)
//		printf("该数组不是回文。\n");
//	else
//		printf("该数组是回文。\n");
//}
////6.给定一个非空整数数组src，再给定一个足够长的dest数组。编写一个函数 copy_array，使用 * p++ 复制src数组到dest数组。
//void copy_array(int *src,int len,int *dest)
//{
//	for(int i=0;i<len;i++)
//		*dest++ = *src++;
//}
////7.给定一个整数数组，将该数组中所有奇数移到数组的前面，偶数移到数组的后面。（扩展题）
//void move_odd(int *arr,int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left<right)
//	{
//		while (left < right && arr[left] % 2 == 1) left++;
//		while (left < right && arr[right] % 2 == 0) right--;
//
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//
//int main()
//{
//	//1.编写函数交换数组中两个下标的元素。函数声明如下：void swap(int *arr, int i, int j) 。要求不使用[]运算符，将[]还原成解引用运算符和指针加法来完成。
//
//	//2.数组元素的逆序。要求使用[]运算符以及纯粹指针操作两种方式来完成。
//
//	//3.数组元素求和。要求使用"*p++"语法结构来完成数组元素的累加 。
//
//	//4.给定一个int数组以及一个目标值target，请编写函数找到这个目标值的下标，要求该函数没有返回值。
//
//	//5.编写一个函数，检查一个整数数组是否是回文，即正序与倒序相同。例如[1, 2, 3, 2, 1]就是回文的。要求使用指针的算术运算，不要使用取下标[]运算符。
//
//	//6.给定一个非空整数数组src，再给定一个足够长的dest数组。编写一个函数 copy_array，使用 * p++ 复制src数组到dest数组。
//
//	//7.给定一个整数数组，将该数组中所有奇数移到数组的前面，偶数移到数组的后面。（扩展题）
//
//	return 0;
//}

///*
//(1) 汉诺塔
//有三根杆子A，B，C。A杆上有 N 个 (N>1) 穿孔圆盘，盘的尺寸由下到上依次变小。要求按下列规则将所有圆盘移至 C 杆：
//	每次只能移动一个圆盘;
//	大盘不能叠在小盘上面。
//
//(2) 十进制转换成二进制
//给定任意一个非负十进制整数，请利用递归的方式，求解它的二进制表示方式
//基本的思路是：把该整数除以2得到余数，然后倒着输出余数。
//思考一下：如何实现倒着打印余数呢？
//*/
//void Tower_of_Hanoi(int N,char A,char B,char C)
//{
//	//终止条件：
//	if (N == 1)
//	{
//		printf("%c--->%c\n",A,C);
//	}
//	else
//	{
//		//第一步：将N-1个盘子从A借助C移动到B；
//		Tower_of_Hanoi(N - 1, A, C, B);
//		//第二步：将A最底层的大盘子移动到C；
//		printf("%c--->%c\n",A,C);
//		//第三步：将N-1个盘子从B借助A移动到C；
//		Tower_of_Hanoi(N - 1, B, A, C);
//	}
//}
//
//void convert(int n)
//{
//	if (n == 0)
//	{
//		return;
//	}
//	convert(n / 2);
//	printf("%d", n % 2);
//}
//
//
//int main()
//{
//	Tower_of_Hanoi(3,'A','B','C');
//
//
//
//
//	return 0;
//}

///*
//练习题：
//1.给一个字符数组，判断元音字母的个数。 aeiou
//2.给一个字符数组，将元音字母找到，拼接到这个数组的后面。假设数组够装这些元音（就是后面有空间）假设数组到了 0 这个字符，就结束了  {abcde0ae}
//3.给你一个字符数组，将其内容复制一份。 长度不会超过100。 直接使用 char dest[100];
//4.比较两个字符数组内容是否完全相同
//5.统计一个字符数组中，字母的个数
//6.删除一个字符数组中的空格。abcde ccdde aab
//7.将一个字符数组中，大写字母转换为小写，小写转换为大写，数字不动。没有其他的
//*/
////1.给一个字符数组，判断元音字母的个数。 aeiou
//int is_vowel_letters(char *arr, int n)
//{
//	int number = 0;
//	for (int i = 0; i < n&&arr[i]!=0; i++)
//	{
//		char c = tolower(arr[i]);
//		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//			number++;
//	}
//	return number;
//}
////2.给一个字符数组，将元音字母找到，拼接到这个数组的后面。假设数组够装这些元音（就是后面有空间）假设数组到了 0 这个字符，就结束了  {abcde0ae}
//void find_vowel_letters(char *arr, int n)
//{
//	int len = strlen(arr);
//	int count = len;
//	for (int i = 0; i < len; i++)
//	{
//		char c = tolower(arr[i]);
//		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//		{
//			arr[count++] = arr[i];
//		}
//	}
//
//	arr[count] = '\0';
//}
////3.给你一个字符数组，将其内容复制一份。 长度不会超过100。 直接使用 char dest[100];
//void copy_str(char *src, int len, char *dest)
//{
//	for (int i = 0; i < len; i++)
//	{
//		*(dest + i) = *(src + i);
//	}
//}
////4.比较两个字符数组内容是否完全相同
//bool comp_str_similar(char *arr1, int len1,char *arr2,int len2)
//{
//	if (len1 != len2)
//		return false;
//
//	for (int i = 0; i < len1; i++)
//	{
//		if (arr1[i] != arr2[i])
//			return false;
//	}
//
//	return true;
//}
////5.统计一个字符数组中，字母的个数
//int count_letters(char *arr, int len)
//{
//	int count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (isalpha(arr[i]))													//isalpha()函数在头文件ctype.h中。
//			count++;
//	}
//
//	return count;
//}
////6.删除一个字符数组中的空格。abcde ccdde aab
//void delete_space(char *arr, int len)
//{
//	int write = 0;
//	for (int read = 0; read < len && arr[read] != '\0'; read++)
//	{
//		if (arr[read] != '\0')
//		{
//			arr[write++] = arr[read];
//		}
//	}
//
//	arr[write] = '\0';
//}
////7.将一个字符数组中，大写字母转换为小写，小写转换为大写，数字不动。没有其他的
//void swap(char *arr, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (isupper(arr[i]))
//			arr[i] = tolower(arr[i]);
//		if (islower(arr[i]))
//			arr[i] = toupper(arr[i]);
//	}
//}
//int main()
//{
// 
//}








//字符串处理函数：对字符串进行操作的函数，常见的字符串处理函数有：puts, gets, strlen, strcpy, strcat, strcmp等。
//puts函数：输出字符串，遇到'\0'结束, 并且在字符串末尾自动添加换行符'\n', 即输出字符串后换行。
//gets函数：输入字符串，遇到'\n'结束，自动在字符串末尾添加'\0'。但是gets函数存在安全隐患，容易导致缓冲区溢出，不建议使用。可改为fgets函数。

//大小写字母转换。
//strlwr函数：将字符串中的大写字母转换为小写字母。但是该函数不是C标准库函数，在某些编译器中可能不可用。不建议用，会改变原字符串大小写。
//strupr函数：将字符串中的小写字母转换为大写字母。但是该函数不是C标准库函数，在某些编译器中可能不可用。不建议用，会改变原字符串大小写。

//isupper函数：判断一个字符是否是大写字母，如果是大写字母返回非0值，否则返回0。
//islower函数：判断一个字符是否是小写字母，如果是小写字母返回非0值，否则返回0。

//toupper函数：将一个字符转换为大写字母，如果该字符是小写字母，则返回对应的大写字母，否则返回该字符本身。
//tolower函数：将一个字符转换为小写字母，如果该字符是大写字母，则返回对应的小写字母，否则返回该字符本身。

//时间复杂度。
//空间复杂度。

//函数指针：int (*p_fun)(int,int)					定义了一个函数指针，函数名是p_fun，参数列表是(int ,int),返回值是int。

//qsort()函数的使用。

//		动态内存分配函数：malloc（）：创建内存，用于在堆上分配指定字节数的内存空间，并返回一个指向该内存空间的指针。如果分配失败，返回NULL。
//						calloc（）：创建内存，用于在堆上分配指定数量的内存块，并初始化为0，并返回一个指向该内存空间的指针。如果分配失败，返回NULL。
//						realloc（）：重新分配内存，用于在堆上重新分配指定字节数的内存空间，并返回一个指向该内存空间的指针。如果分配失败，返回NULL。
//						free（）：释放内存，用于释放之前分配的内存空间。

// isalpha()				//判断是否为字母。
// isupper()				//判断是否为大写字母。
// islower()				//判断是否为小写字母。
// isdigit()				//判断是否为数字。
// isalnum()				//是否为字母或数字。
// isspace()				//是否为空白（空格，换行，制表符等。）

/////*
////编写程序，从键盘输入输入中读取一个整数n，动态分配一个长度为n的整型数组。
////将数组元素初始化为1, 2, 3, ..., n，并输出打印数组内容，最后释放内存。
////	注意:
////		初始化内存块时可以直接使用下标来操作内存块。
////		遍历打印数组元素取值时，请使用指针来实现操作。
////*/
//int main()
//{
//	int n = 0;
//	int ret=scanf(" %d", &n);
//
//	if (ret != 1||n<=0)
//	{
//		printf("输入错误！\n");
//		return 0;
//	}
//
//	int *p = malloc(sizeof(int) * n);
//
//	if (p == NULL)
//	{
//		printf("point p is NULL!\n");
//		return 0;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		*(p + i) = i + 1;
//		printf("%d ", *(p + i));
//	}
//
//	free(p);
//
//	return 0;
//}

///*
//先在堆上申请创建一个长度为10的int数组，编写一个函数用于以"[xx, xx, ..., xx]"的格式打印这个int数组。
//紧接着执行以下操作：
//	1：在申请int数组成功后，直接调用函数打印这个int数组，思考一下：应该用哪个函数来申请创建这个数组？
//	2：截断这个int数组，将其变为长度为5的int数组，然后再打印这个数组。
//	3：将长度为5的int数组，再次扩容回10个元素，将最后五个元素初始化为888，最后再次打印这个数组。
//	4：最后不要忘记free释放内存块。
//重点需要注意realloc函数的调用格式！
//*/
//int main()
//{
//	//1：在申请int数组成功后，直接调用函数打印这个int数组，思考一下：应该用哪个函数来申请创建这个数组？
//	int n = 10;
//	int *p = calloc(10,sizeof(int));
//
//	if (p == NULL)
//	{
//		printf("申请失败！\n");
//		return 0;
//	}
//
//	printf("[");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", p[i]);
//		if (i != n - 1)
//			printf(" ");
//	}
//	printf("]");
//
//	//2：截断这个int数组，将其变为长度为5的int数组，然后再打印这个数组。
//	int *new_p = realloc(p, sizeof(int) * 5);
//	if (new_p == NULL)
//	{
//		printf("申请失败！\n");
//		return 0;
//	}
//	p = new_p;
//	printf("[");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", p[i]);
//		if (i != 5 - 1)
//			printf(" ");
//	}
//	printf("]");
//
//	//3：将长度为5的int数组，再次扩容回10个元素，将最后五个元素初始化为888，最后再次打印这个数组。
//	int *new_p_1 = realloc(p, sizeof(int) * 10);
//	if (new_p_1 == NULL)
//	{
//		printf("申请失败！\n");
//		return 0;
//	}
//	p = new_p_1;
//	for (int i = 5; i < 10; i++)
//	{
//		p[i] = 888;
//	}
//	printf("[");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", p[i]);
//		if (i != 10 - 1)
//			printf(" ");
//	}
//	printf("]");
//
//	//4：最后不要忘记free释放内存块。
//	free(p);
//	p = NULL;
//	return 0;
//}

///*
//标准库函数strcat会将一个字符串追加到另一个字符串的末尾。
//现在我们编写一个函数把两个字符串拼接起来，返回拼接的结果，但要求不改变其中任何一个字符串。其函数声明如下：
// char* my_strcat(const char* prefix, const char* suffix);
//形参prefix表示前缀，suffix表示后缀，拼接的结果是prefix + suffix
//比如：my_strcat("abc", "d")，拼接的结果是"abcd"。
//
//思路：
//	在堆上分配内存空间，用于存储结果字符串。
//	将prefix和suffix两个字符串的字符信息复制进去。
//*/
//char *my_strcat(const char *prefix, const char *suffix)
//{
//	int pre = strlen(prefix);
//	int suf = strlen(suffix);
//	if (prefix || suffix == NULL)
//	{
//		printf("输入错误！\n");
//		return NULL;
//	}
//
//	char *p = malloc(sizeof(*p) * (pre + suf) + 1);
//	if (p == NULL)
//	{
//		printf("申请失败！\n");
//		return NULL;
//	}
//
//	for (int i = 0; i < pre + suf; i++)
//	{
//		if (i < pre && i >= 0)
//			p[i] = prefix[i];
//
//		if (i >= pre && i < pre + suf)
//			p[i] = suffix[i-pre];
//	}
//
//	p[pre + suf] = 0;
//
//	return p;
//}
//
//
//int main()
//{
//	char *p = my_strcat("abc", "d");
//
//	printf("%s", p);
//	free(p);
//
//	return 0;
//}

///*
//动手自己实现动态数组Vector，基于以下结构体定义和函数声明：
//typedef int ElementType;
//
//typedef struct {
//	ElementType *data;   // 指向堆空间的数组
//	int size;	// 元素的个数
//	int capacity; // 数组的容量
//} Vector;
//
//// 请实现下面方法
//
//// 初始化一个Vector动态数组
//Vector *vector_create(void);
//
//// 销毁一个Vector动态数组，释放内存。
//void vector_destroy(Vector *v);
//
//// 向动态数组末尾添加一个元素
//void vector_push_back(Vector *v, ElementType val);
//
//// 在动态数组最前面添加元素，所有元素依次后移
//void vector_push_front(Vector *v, ElementType val);
//
//// 将元素val添加到索引为idx的位置，idx后面的元素依次后移
//void vector_insert(Vector *v, int idx, ElementType val);
//
//// 遍历打印整个Vector动态数组
//void vector_print(Vector *v);
//
//注意：
//	你应该将上述代码放在头文件中，并且自己添加头文件保护语法。
//	提交作业时，你应该提交头文件，实现Vector的源文件，测试源文件三个文件的代码
//*/
//
//typedef int ElementType;
//
//typedef struct {
//	ElementType *data;   // 指向堆空间的数组
//	int size;	// 元素的个数
//	int capacity; // 数组的容量
//} Vector;
//
//Vector *vector_create(void);
//void vector_destroy(Vector *v);
//void vector_push_back(Vector *v, ElementType val);
//void vector_push_front(Vector *v, ElementType val);
//void vector_insert(Vector *v, int idx, ElementType val);
//void vector_print(Vector *v);
//
//// 初始化一个Vector动态数组
//Vector *vector_create(void)
//{
//	Vector *p = malloc(sizeof(Vector));
//	if (p == NULL)
//	{
//		printf("申请失败！\n");
//		return NULL;
//	}
//
//	p->data = malloc(sizeof(ElementType)*10);						//注意：这里是结构体变量里面的元素赋值，不用重新创建一个新变量。
//	if (p->data == NULL)
//	{
//		printf("申请失败！\n");
//		free(p);
//		return NULL;
//	}
//
//	p->size = 0;
//	p->capacity = 10;
//
//	return p;
//}
//// 销毁一个Vector动态数组，释放内存。
//void vector_destroy(Vector *v)
//{
//	free(v->data);
//	free(v);
//}
//// 向动态数组末尾添加一个元素
//void vector_push_back(Vector *v, ElementType val)
//{
//	if (v->capacity == v->size)
//	{
//		int new_capacity = 2 * v->capacity;
//		ElementType *new_p = realloc(v->data, new_capacity*sizeof(ElementType));
//		if (new_p == NULL)
//		{
//			printf("扩容失败！\n");
//			return;
//		}
//		v->data = new_p;
//		v->capacity = new_capacity;
//	}
//
//	v->data[v->size] = val;
//	v->size++;
//}
//// 在动态数组最前面添加元素，所有元素依次后移
//void vector_push_front(Vector *v, ElementType val)
//{
//	if (v->capacity == v->size)
//	{
//		int new_capacity = 2 * v->capacity;
//		ElementType *new_p = realloc(v->data, new_capacity * sizeof(ElementType));
//		if (new_p == NULL)
//		{
//			printf("扩容失败！\n");
//			return;
//		}
//		v->data = new_p;
//	}
//
//	for (int i = v->size; i > 0; i--)
//	{
//		v->data[i] = v->data[i-1];
//	}
//
//	v->data[0] = val;
//	v->size++;
//}
//
//// 将元素val添加到索引为idx的位置，idx后面的元素依次后移
//void vector_insert(Vector *v, int idx, ElementType val)
//{
//	if (v->capacity == v->size)
//	{
//		int new_capacity = 2 * v->capacity;
//		ElementType *new_p = realloc(v->data, new_capacity * sizeof(ElementType));
//		if (new_p == NULL)
//		{
//			printf("扩容失败！\n");
//			return;
//		}
//		v->data = new_p;
//	}
//
//	for (int i = v->size; i > idx; i--)
//	{
//		v->data[i] = v->data[i - 1];
//	}
//
//	v->data[idx] = val;
//	v->size++;
//}
//
//// 遍历打印整个Vector动态数组
//void vector_print(Vector *v)
//{
//	printf("[");
//	for (int i = 0; i < v->size; i++)
//	{
//		printf("%d", v->data[i]);
//		if (i != v->size-1)
//		{
//			printf(" ");
//		}
//	}
//	printf("]\n");
//}
//
//int main()
//{
//	Vector *p_1 = vector_create();
//
//	for (int i = 0; i < p_1->capacity; i++)
//	{
//		p_1->data[i] = i;
//		p_1->size++;				
//		if (i != p_1->size-1)						//这里注意：是size-1，不是size。		
//			printf(" ");
//	}
//
//	vector_print(p_1);
//
//	vector_push_back(p_1, 888);
//
//	vector_push_front(p_1,111);
//
//	vector_insert(p_1,5,666);
//
//	vector_print(p_1);
//
//	vector_destroy(p_1);
//
//	return 0;
//}

///*
//下面结构体类型的变量的内存布局是怎样的？请使用VS的Debug模式查看它的内存布局
//
//typedef struct stundent_s {
//	int number;
//	char name[25];
//	char gender;
//	int chinese;
//	int math;
//	int english;
//} Student;
//
//// 结构体对象的声明和初始化
//Student s1 = { 1, "Jack", 'm', 100, 100, 100 };
//要求：截图展示内存窗口中的对齐填充，然后提交截图。
//
//第二题：
//基于上述的结构体类型的定义，实现以下功能：
//	1.从键盘输入5个学生的信息，将这些同学的信息采用结构体数组的方式存储起来。（代码直接写在main函数里）
//	2.编写一个函数，用于打印单个结构体信息。然后在main函数里调用该函数，打印这个结构体数组。
//	3.编写一个函数，用于求三个学科的平均分。然后在main函数里调用该函数，打印这三个学科的平均分。
//*/
//
//typedef struct student_s {
//	int number;
//	char name[25];
//	char gender;
//	int chinese;
//	int math;
//	int english;
//} Student;
//
//void my_print(Student st)
//{
//	printf("%d %s %c %d %d %d\n", st.number, st.name, st.gender, st.chinese, st.math, st.english);
//}
//
//double average(Student st)
//{
//	return (st.chinese + st.math + st.english) / 3.0;
//}
//
//int main()
//{
//	// 结构体对象的声明和初始化
//	Student s1 = { 1, "Jack", 'm', 100, 100, 100 };
//	Student arr[5];
//	for (int i = 0; i < 5; i++)
//	{
//		scanf(" %d %24s %c %d %d %d", &arr[i].number, arr[i].name, &arr[i].gender, &arr[i].chinese, &arr[i].math, &arr[i].english);
//		putchar('\n');
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		my_print(arr[i]);
//		printf("平均成绩为：%lf。\n", average(arr[i]));
//		putchar('\n');
//	}
//
//	return 0;
//}

///*
//定义一个Date结构体，包含年、月、日数据项。编写一个函数，计算两个日期之间的天数差。
//不考虑平年闰年，不考虑月份天数不同。
//假设每个月都是30天，每年是360天，以简化计算。
//*/
//typedef struct Data
//{
//	int year;
//	int month;
//	int day;
//}Data;
//int difference_of_day(Data d1, Data d2)
//{
//	int total_d1 = d1.year * 360 + d1.month * 30 + d1.day;
//	int total_d2 = d2.year * 360 + d2.month * 30 + d2.day;
//	return abs(total_d1 - total_d2);
//}
//
//int main()
//{
//
//
//	return 0;
//}

///*
//第一题：
//下面结构体类型的变量的内存布局是怎样的？请使用VS的Debug模式查看它的内存布局
//typedef struct stundent_s {
//	int number;
//	char name[25];
//	char gender;
//	int chinese;
//	int math;
//	int english;
//} Student;
//// 结构体对象的声明和初始化
//Student s1 = { 1, "Jack", 'm', 100, 100, 100 };
//要求：截图展示内存窗口中的对齐填充，然后提交截图。
//
//第二题：
//基于上述的结构体类型的定义，实现以下功能：
//	1.从键盘输入5个学生的信息，将这些同学的信息采用结构体数组的方式存储起来。（代码直接写在main函数里）
//	2.编写一个函数，用于打印单个结构体信息。然后在main函数里调用该函数，打印这个结构体数组。
//	3.编写一个函数，用于求三个学科的平均分。然后在main函数里调用该函数，打印这三个学科的平均分。
//*/
//typedef struct student_s {
//	int number;
//	char name[25];
//	char gender;
//	int chinese;
//	int math;
//	int english;
//} Student;
//// 结构体对象的声明和初始化
//
//void my_printf(Student s1)
//{
//	printf("%d %s %c %d %d %d\n",
//		s1.number,
//		s1.name,
//		s1.gender,
//		s1.chinese,
//		s1.math,
//		s1.english);
//}
//
//double average(Student s1)
//{
//	return (s1.chinese + s1.math + s1.english) / 3.0;
//}
//
//int main()
//{
//	Student s1 = { 1, "Jack", 'm', 100, 100, 100 };
//
//	Student *p_student = malloc(5 * sizeof(Student));
//	if (p_student == NULL)
//	{
//		printf("申请失败！\n");
//		return 0;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		scanf(" %d %24s %c %d %d %d", 
//			&p_student[i].number, 
//			p_student[i].name,							//对于字符串，输入的时候，一定要注意字符数组的容量，要用%24s来接受。
//			&p_student[i].gender, 
//			&p_student[i].chinese, 
//			&p_student[i].math, 
//			&p_student[i].english);
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		my_printf(p_student[i]);
//		printf("%d同学的平均成绩为：%lf。\n", i+1, average(p_student[i]));
//		putchar('\n');
//	}
//
//	free(p_student);
//	p_student = NULL;
//
//	return 0;
//}

///*
//定义一个枚举类型Month（别名），包含一年中12个月份的英文单词。并从一月份开始，为枚举成员分配一个从1开始的数字值。
//例如：JANUARY=1，FEBRUARY=2，依此类推....
//编写一个函数，接收Month类型的参数，返回该月份有多少天。
//
//注意：
//	不考虑平年闰年，2月份一律输出28天。
//	不要把12个case分支做12个处理，那也太笨了！
//	枚举值应当采用英文单词字母全部大写的命名风格，类似宏定义。
//*/
//typedef enum Month
//{
//	JANUARY=1,
//	FEBRUARY,
//	MARCH,
//	APRIL,
//	MAY,
//	JUNE,
//	JULY,
//	AUGUST,
//	SEPTEMBER,
//	OCTOBER,
//	NOVEMBER,
//	DECEMBER
//}Month;
//
//int day_of_month(Month m1)
//{
//	if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12)
//		return 31;
//	else if (m1 == 2)
//		return 28;
//	else
//		return 30;
//}
//int main()
//{
//	Month month = 9;
//	printf("%d月有%d天。\n", month, day_of_month(month));
//
//	return 0;
//}

///*
//编写一个程序，管理图书馆中的书籍信息。每本书籍的信息包含以下内容：
//	书籍编号（整型）
//	书籍名称（字符串）
//	书籍作者（字符串）
//	书籍类别（枚举类型）
//请定义一个Book书籍结构体类型来存储一本书的信息，以及Genre这个书籍类别枚举类型。
//	书籍类别的枚举类型包含以下类别：
//		科幻（SCIENCE_FICTION）
//		文学（LITERATURE）
//		历史（HISTORY）
//		科技（TECHNOLOGY）
//		其他（OTHER）
//现在给定你一个Book结构体对象数组的数据，一共十本书：
//		#define MAX_BOOKS 10
//		Book books[MAX_BOOKS] = {
//			{1, "三体", "刘慈欣", SCIENCE_FICTION},
//			{2, "红楼梦", "曹雪芹", LITERATURE},
//			{3, "中国通史", "吕思勉", HISTORY},
//			{4, "时间简史", "史蒂芬·霍金", TECHNOLOGY},
//			{5, "围城", "钱钟书", LITERATURE},
//			{6, "傲慢与偏见", "简·奥斯汀", LITERATURE},
//			{7, "呼啸山庄", "艾米莉·勃朗特", LITERATURE},
//			{8, "活着", "余华", LITERATURE},
//			{9, "明朝那些事儿", "当年明月", HISTORY},
//			{10, "乌合之众", "古斯塔夫·勒庞", OTHER}
//		};
//请实现以下功能：
//程序启动，即打印所有书籍的信息。
//根据用户输入的书籍类别编号，查找并输出该类别的所有书籍信息。
//
//
//提示，建议提取下列三个函数来实现整个程序的功能：
//void print_book_info(Book *books, int count);   // 打印所有书籍信息
//void find_books_by_genre(Book *books, int count, Genre genre);  // 根据书籍类别打印书籍
//char *get_genre_name(Genre genre);    // 将书籍类别的枚举值转换成中文表示的类别
//*/
//#define MAX_BOOKS 10
//typedef enum Genre
//{
//	SCIENCE_FICTION,
//	LITERATURE,
//	HISTORY,
//	TECHNOLOGY,
//	OTHER
//}Genre;
//
//typedef struct Book
//{
//	int num;
//	char book_name[25];
//	char author[25];														//注意：在UTF-8下，一个中文占3个字节。
//	Genre genre;
//}Book;
//
//char *get_genre_name(Genre genre)
//{
//	static char *transfrom[5] = { "科幻","文学","历史","科技","其他" };
//
//	for (int i = 0; i < 5; i++)
//	{
//		if (i == genre)
//			return transfrom[i];
//	}
//
//	return NULL;
//}
//
//void print_book_info(Book *books, int count)
//{
//	printf("-------------所有书籍的信息--------------\n");
//	for (int i = 0; i < count; i++)
//	{
//		printf("编号：%d，书名：%s，作者：%s，类别：%s\n", books[i].num, books[i].book_name, books[i].author, get_genre_name(books[i].genre));
//	}
//}
//
//void find_books_by_genre(Book *books, int count, Genre genre)
//{
//	printf("类别为 %s 的书籍有：\n", get_genre_name(genre));
//	for (int i = 0; i < count; i++)
//	{
//		if(genre==books[i].genre)
//			printf("编号：%d，书名：%s，作者：%s，类别：%s\n", books[i].num, books[i].book_name, books[i].author, get_genre_name(books[i].genre));
//	}
//}
//
//Book books[MAX_BOOKS] = 
//{
//	{1, "三体", "刘慈欣", SCIENCE_FICTION},
//	{2, "红楼梦", "曹雪芹", LITERATURE},
//	{3, "中国通史", "吕思勉", HISTORY},
//	{4, "时间简史", "史蒂芬·霍金", TECHNOLOGY},
//	{5, "围城", "钱钟书", LITERATURE},
//	{6, "傲慢与偏见", "简·奥斯汀", LITERATURE},
//	{7, "呼啸山庄", "艾米莉·勃朗特", LITERATURE},
//	{8, "活着", "余华", LITERATURE},
//	{9, "明朝那些事儿", "当年明月", HISTORY},
//	{10, "乌合之众", "古斯塔夫·勒庞", OTHER}
//};
//
//int main()
//{
//	print_book_info(books, MAX_BOOKS);
//	
//	putchar('\n');
//
//	int num = 0;
//	printf("请输入书记类别编号（0：科幻，1：文学，2：历史，3：科技，4：其他）查找：");
//	scanf(" %d", &num);
//	find_books_by_genre(books, MAX_BOOKS, (Genre)num);
//
//	return 0;
//}

///*
//编写程序，从键盘输入输入中读取一个整数n，动态分配一个长度为n的整型数组。
//将数组元素初始化为1, 2, 3, ..., n，并输出打印数组内容，最后释放内存。
//注意:
//	初始化内存块时可以直接使用下标来操作内存块。
//	遍历打印数组元素取值时，请使用指针来实现操作。
//*/
//int main()
//{
//	int n = 0;
//	int ret=scanf(" %d", &n);
//	if (ret == 0||n<=0)
//	{
//		printf("输入失败！\n");
//		return 1;	
//	}
//	int *p_arr = calloc(n, sizeof(int));
//	if (p_arr == NULL)
//	{
//		printf("申请失败！\n");
//		return 1;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		*(p_arr+i-1) = i;
//		printf("%d ", *(p_arr + i-1));
//	}
//
//	free(p_arr);
//	p_arr = NULL;
//
//	return 0;
//}

///*
//先在堆上申请创建一个长度为10的int数组，编写一个函数用于以"[xx, xx, ..., xx]"的格式打印这个int数组。
//紧接着执行以下操作：
//	在申请int数组成功后，直接调用函数打印这个int数组，思考一下：应该用哪个函数来申请创建这个数组？
//	截断这个int数组，将其变为长度为5的int数组，然后再打印这个数组。
//	将长度为5的int数组，再次扩容回10个元素，将最后五个元素初始化为888，最后再次打印这个数组。
//	最后不要忘记free释放内存块。
//重点需要注意realloc函数的调用格式！
//*/
//
//void my_printf(int *p, int n)
//{
//	printf("[");
//
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d", p[i]);
//		if (i != n - 1)
//			printf(", ");
//	}
//
//	printf("]");
//	putchar('\n');
//}
//
//
//int main()
//{
//	int *p_arr = calloc(10, sizeof(int));
//	if (p_arr == NULL)
//	{
//		printf("申请失败！\n");
//		return 1;
//	}
//
//	my_printf(p_arr, 10*4/ sizeof(int));
//
//	int *new_p = realloc(p_arr, 5 * sizeof(int));
//	if (new_p == NULL)
//	{
//		printf("申请失败！\n");
//		free(p_arr);
//		return 1;
//	}
//	p_arr = new_p;
//	my_printf(p_arr, 5 * 4 / sizeof(int));
//
//	new_p = realloc(p_arr, 10 * 4 / sizeof(int));
//	if (new_p == NULL)
//	{
//		printf("申请失败！\n");
//		free(p_arr);
//		return 1;
//	}
//	p_arr = new_p;
//	for (int i = 5; i < 10; i++)
//	{
//		p_arr[i] = 888;
//	}
//	my_printf(p_arr, 10 * 4 / sizeof(int));
//
//	free(p_arr);
//	p_arr = NULL;
//	new_p = NULL;
//
//	return 0;
//}

///*
//给你下面一个Student，学生结构体类型的定义:
//
//// Student学生结构体类型定义
//typedef struct {
//char name[25];
//int score;
//} Student;
//假设你有一个学生结构体对象数组，如下所示:
//
//Student stus[] = {
//{"Alice", 85},
//{"Bob", 92},
//{"Charlie", 85},
//{"David", 85},
//{"Eve", 92},
//{"Frank", 75},
//{"Grace", 85},
//{"Hannah", 95},
//{"Ivy", 78},
//{"Jack", 85}
//};
//你的任务是使用qsort函数对这个结构体数组进行排序：
//	规则1：将全体结构体对象，按照学生成绩从高到低进行排序。
//	规则2：先将全体结构体对象，按照学生成绩从低到高进行排序，如果成绩一致，则那么按照名字的字典顺序进行排序。
//最后，你还需要实现一个函数用于打印整个学生数组：
// void print_students(Student stus[], int size);
//*/
//
//// Student学生结构体类型定义
//typedef struct {
//	char name[25];
//	int score;
//} Student;
//
//int compare_score(const void *a, const void *b)
//{
//	Student s1 = *(Student *)a;
//	Student s2 = *(Student *)b;
//	return -(s1.score - s2.score);
//}
//
//int compare_score_and_name(const void *a, const void *b)
//{
//	Student s1 = *(Student *)a;
//	Student s2 = *(Student *)b;
//
//	if (s1.score != s2.score)
//	{
//		return s1.score - s2.score;
//	}
//
//	return strcmp(s1.name, s2.name);
//}
//
//void print_students(Student stus[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%s\t：%d\n", stus[i].name, stus[i].score);
//	}
//}
//
//int main()
//{
//	Student stus[] = 
//	{
//		{"Alice", 85},
//		{"Bob", 92},
//		{"Charlie", 85},
//		{"David", 85},
//		{"Eve", 92},
//		{"Frank", 75},
//		{"Grace", 85},
//		{"Hannah", 95},
//		{"Ivy", 78},
//		{"Jack", 85}
//	};
//	int len = sizeof(stus) / sizeof(stus[0]);
//
//	qsort(stus, len, sizeof(Student), compare_score);
//	print_students(stus, len);
//
//	putchar('\n');
//
//	qsort(stus, len, sizeof(Student), compare_score_and_name);
//	print_students(stus, len);
//
//	return 0;
//}

///*
//基于以下链表结点结构体类型的定义:
//typedef int ElementType;
//typedef struct node {
// int data;
// struct node* next;
//} Node;
//
//在main函数中定义一个head头指针等于NULL代表此时单链表为空：
//Node *head = NULL;
//
//利用二级指针语法实现以下函数：
//// 头插法新增一个结点
//void insert_head(Node** head, ElementType new_val);
//// 修改第一个结点的元素值，如果链表为空，则用new_val初始化第一个结点
//void modify_first_node(Node** head, int new_val);
//// 尾插法新增一个结点
//void insert_tail(Node** head, ElementType new_val);
//// 打印单链表 格式为：1 -> 2 -> 3 ->...
//void print_list(Node *head);
//注：尾插法会稍微麻烦一些，可以放在最后实现。
//*/
//typedef int ElementType;
//typedef struct node {
//	int data;
//	struct node *next;
//} Node;
//
//// 头插法新增一个结点
//void insert_head(Node **head, ElementType new_val)
//{
//	//先申请一个Node。
//	Node *new_node = malloc(sizeof(Node));
//	if (new_node == NULL)
//	{
//		printf("申请失败！\n");
//		return;
//	}
//
//	//如果原来里面一个Node都没有。
//	if (*head == NULL)
//	{
//		*head = new_node;
//		new_node->data = new_val;
//		new_node->next = NULL;
//
//		return;
//	}
//
//	//如果里面原来有Node。
//	new_node->data = new_val;
//	new_node->next = *head;
//	*head = new_node;
//}
//// 修改第一个结点的元素值，如果链表为空，则用new_val初始化第一个结点
//void modify_first_node(Node **head, ElementType new_val)
//{
//	//如果原来里面一个Node都没有。
//	if (*head == NULL)
//	{
//		//申请一个Node。
//		Node *new_node = malloc(sizeof(Node));
//		if (new_node == NULL)
//		{
//			printf("申请失败！\n");
//			return;
//		}
//
//		*head = new_node;
//		new_node->data = new_val;
//		new_node->next = NULL;
//
//		return;
//	}
//
//	//如果原来有Node。
//	(*head)->data = new_val;
//}
//// 尾插法新增一个结点
//void insert_tail(Node **head, ElementType new_val)
//{
//	//先申请一个Node。
//	Node *new_node = malloc(sizeof(Node));
//	if (new_node == NULL)
//	{
//		printf("申请失败！\n");
//		return;
//	}
//	new_node->data = new_val;
//	new_node->next = NULL;
//
//	//如果原来里面一个Node都没有。
//	if (*head == NULL)
//	{
//		*head = new_node;
//
//		return;
//	}
//
//	//如果里面有Node。
//	Node *curr = *head;
//	while (curr->next != NULL)
//	{
//		curr = curr->next;
//	}
//	curr->next = new_node;
//}
//// 打印单链表 格式为：1 -> 2 -> 3 ->...
//void print_list(Node *head)
//{
//	Node *curr = head;
//	while (curr!=NULL)
//	{
//		printf("%d", curr->data);
//		if (curr->next != NULL)
//			printf(" -> ");
//		curr = curr->next;
//	}
//	putchar('\n');
//}
//
//int main()
//{
//	Node *head = NULL;
//
//	// 头插法新增一个结点
//	insert_head(&head,10);
//	print_list(head);
//	// 修改第一个结点的元素值，如果链表为空，则用new_val初始化第一个结点
//	modify_first_node(&head,20);
//	print_list(head);
//	// 尾插法新增一个结点
//	insert_tail(&head,30);
//	print_list(head);
//	// 打印单链表 格式为：1 -> 2 -> 3 ->...
//	print_list(head);
//
//	return 0;
//}

/*
基于以下头文件，手动实现一条单链表：

// 头文件保护语法
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// 包含linked_list.h头文件也会同步包含它包含的其它头文件
// 根据这一特点, 可以选择将一些共用的头文件包含在此头文件中
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef int DataType;

// 定义链表结点结构
typedef struct node {
	DataType data;		// 数据域
	struct node *next;  // 指针域
} Node;

// 定义链表结构本身
typedef struct {
	Node *head;		// 头指针
	Node *tail;		// 尾结点指针
	int size;		// 用于记录链表的长度
} LinkedList;

// 创建一个空的链表
LinkedList *create_linked_list();
// 销毁链表
void destroy_linked_list(LinkedList *list);
// 头插法
bool add_before_head(LinkedList *list, DataType new_data);
// 尾插法
bool add_behind_tail(LinkedList *list, DataType new_data);
// 根据索引插入一个新结点
bool add_by_idx(LinkedList *list, int idx, DataType new_data);
// 根据索引搜索一个结点
Node *search_by_idx(LinkedList *list, int idx);
// 根据数据搜索一个结点
Node *search_by_data(LinkedList *list, DataType data);
// 根据数据删除一个结点
bool delete_by_data(LinkedList *list, DataType data);
// 扩展: 根据索引删除一个结点
bool delete_by_idx(LinkedList *list, int idx);
// 打印单链表 格式为：1 -> 2 -> 3 ->...
void print_list(LinkedList *list);

#endif // !LINKED_LIST_H
手动实现单链表是后续一切数据结构学习的前提和基础，所以一定要重视单链表的实现，一定要自己百分百手动将这里面的函数全部实现。
*/

////求链表中间结点的值。
//Node* value_of_middle_mode(Node *head)
//{
//	if (head == NULL)
//		return NULL;
//
//	Node *fast = head;
//	Node *slow = head;
//
//	//如果size为奇数来说。结束时，就是slow。
//	//如果size为偶数，分为上中位和下中位。
//	//上中位写法。
//	while (fast != NULL && fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//
//	//下中位写法：
//	//Node *fast = head->next;			快指针先走一步。
//	//Node *slow = head;
//	return slow;
//}
//
//
//bool has_circle(Node *head)
//{
//	if (head == NULL || head->next == NULL)					//如果没有结点，或者只有一个结点。直接判断无环，直接退出。
//		return false;
//
//	Node *slow = head;
//	Node *fast = head->next;
//
//	while (1)
//	{
//		if (fast == NULL || fast->next == NULL)				//如果快指针走到头了，那么说明无环。
//			return false;
//
//		if (fast == slow)										//如果快慢指针相遇了，那么说明有环。
//			return true;
//
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//}

///*
//给定一条单链表，请反转这条单链表。
//举例，
//输入: 1 --> 2 --> 3
//输出: 3 --> 2 --> 1
//基于以下函数的声明实现：
//Node* reverse(Node *list); // 反转当前单链表并返回新的头指针
//*/
//Node *reverse(Node *list)
//{
//	Node dummy = { 0,NULL };
//
//	while (list != NULL)
//	{
//		Node *new_next = list->next;
//
//		//第一次：将原来的头（list）的next指向dummy的next，第一次的时候，dummy.next为NULL，所以这时候list->next为NULL。
//		list->next = dummy.next;
//		dummy.next = list;
//
//		list = new_next;
//	}
//
//	return dummy.next;
//}

////链表反转：
//Node *reverse(Node *head)
//{
//	//首先创建一个哑结点。
//	Node dummppy = { 0,NULL };
//
//	while (head != NULL)
//	{
//		//用结点指针next，对head->next的地址进行备份，防止head->next数据丢失。
//		Node *next = head->next;
//
//		head->next = dummppy.next;
//		dummppy.next = head;
//
//		head = next;
//	}
//
//	return dummppy.next;
//}


/*
请手动实现一个固定长度，基于拉链法的哈希表。

可以基于以下头文件来实现：

#ifndef HASH_MAP_H
#define HASH_MAP_H

#include <stdint.h> // 包含它是为了使用别名uint32_t
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define HASHMAP_CAPACITY 10 // 哈希表中数组的长度固定是10

// 此时哈希表用于存储字符串类型的键值对
typedef char *KeyType;
typedef char *ValueType;

// 键值对结点
typedef struct node_s {
	KeyType key;
	ValueType val;
	struct node_s *next;
} KeyValueNode;

typedef struct {
	// 哈希桶
	KeyValueNode *buckets[HASHMAP_CAPACITY];    // 直接给定哈希桶的数量是10个
	// 哈希函数需要的种子值
	uint32_t hash_seed;
} HashMap;

// 创建一个固定容量的哈希表
HashMap *hashmap_create();
// 销毁一个哈希表
void hashmap_destroy(HashMap *map);
// 插入一个键值对
ValueType hashmap_put(HashMap *map, KeyType key, ValueType val);
// 查询一个键值对
ValueType hashmap_get(HashMap *map, KeyType key);
// 删除某个键值对
bool hashmap_remove(HashMap *map, KeyType key);

#endif // !HASH_MAP_H
注：此哈希表底层数组的长度是固定的，键值对元素的类型都是字符串类型。

*/


/*




*/

////链表反转：
//Node* reverse(Node *head)
//{
//	//首先，在栈上创建一个哑结点。
//	Node dummy = { 0,NULL };
//
//	while (head != NULL)
//	{
//		Node *next = head->next;
//
//		head->next = dummy.next;
//		dummy.next = head;
//
//		head = next;
//	}
//
//	return dummy.next;
//}

///*
//合并两条有序的单向链表，使得合并后的链表也是有序的 (要求: 不能额外申请堆内存空间)。
//输入：
//   list1: 1 --> 3 --> 5
//   list2: 2 --> 4 --> 6
//输出：
//   1 --> 2 --> 3 --> 4 --> 5 -->6
//函数声明可以直接写:
//Node* merge_two_lists(Node* list1, Node* list2);
//请采用循环迭代求解这个问题。递归可以看一下，可以选择不使用递归实现。
//
//注：循环实现时，可以思考一下加头结点的实现与不加的区别。
//不仅要定义函数实现对应功能，还需要编写测试用例，进行测试。
//*/
//Node *merge_two_lists(Node *list1, Node *list2)
//{
//	//首先创建一个哑结点。这个哑结点，先作为合并后的链表的头。
//	Node dummy = { 0,NULL };
//	//创建一个尾结点指针，指向最后面。
//	Node *tail = &dummy;
//
//	while (list1 != NULL && list2 != NULL)
//	{
//		if (list1->data <= list2->data)
//		{
//			tail->next = list1;
//			list1 = list1->next;
//		}
//		else
//		{
//			tail->next = list2;
//			list2 = list2->next;
//		}
//		tail = tail->next;
//	}
//	
//	//把剩余的部分接上。
//	if (list1 != NULL)
//	{
//		tail->next = list1;
//	}
//	if (list2 != NULL)
//	{
//		tail->next = list2;
//	}
//
//
//	return dummy.next;
//}

/*
基于以下头文件，手动实现一个链式栈：
#ifndef LINKED_STACK_H
#define LINKED_STACK_H
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

// 栈的一个结点栈帧,类型定义
typedef struct node_s {
	ElementType data;
	struct node_s *next;
}StackFrame;

typedef struct {
	StackFrame *top;	// 栈顶指针
}LinkedStack;

// 基本操作
// 创建链式栈
LinkedStack *stack_create();
// 销毁链式栈
void stack_destroy(LinkedStack *stack);
// 判空
bool is_empty(LinkedStack *stack);
// 入栈
void stack_push(LinkedStack *stack, ElementType data);
// 出栈并返回栈顶元素
ElementType stack_pop(LinkedStack *stack);
// 访问栈顶元素
ElementType stack_peek(LinkedStack *stack);

#endif // !LINKED_STACK_H
*/

///*
//合并两条有序的单向链表，使得合并后的链表也是有序的 (要求: 不能额外申请堆内存空间)。
//输入：
//   list1: 1 --> 3 --> 5
//   list2: 2 --> 4 --> 6
//输出：
//   1 --> 2 --> 3 --> 4 --> 5 -->6
//
//函数声明可以直接写:
//Node* merge_two_lists(Node* list1, Node* list2);
//
//*/
//Node *merge_two_lists(Node *list1, Node *list2)
//{
//	//首先创建一个哑结点。
//	Node dummy = { 0,NULL };
//	//定义一个尾指针。
//	Node *tail = &dummy;								//定义一个尾指针，指向最后。对于Node *类型的初始化，要给他一个地址。
//
//	while (list1 != NULL && list2 != NULL)				//当list1不为空，并且list2不为空的时候执行。
//	{
//		if (list1->data <= list2->data)
//		{
//			tail.next = list1;
//			list1 = list1->next;
//		}
//		else
//		{
//			tail.next = list2;
//			list2 = list2->next;
//		}
//		tail = tail->next;
//	}
//
//	//运行到这里，则说明list1或者list2有一个为空。
//	if (list1 == NULL)
//	{
//		tail->next = list2;
//	}
//	if (list2 == NULL)
//	{
//		tail->next = list1;
//	}
//
//	return dummy.next;
//}

/*
基于链表的结点定义：

typedef struct node {
	int data;
	struct node *next;
} Node;
以及相应的二级指针尾插法构建单链表：

// 实现尾插法构建链表
void insert_tail(Node **head, int new_data) {
	// 1.分配新结点，初始化它
	Node *new_node = malloc(sizeof(Node));
	if (new_node == NULL) {
		printf("error: malloc failed in insert_tail.\n");
		exit(1);
	}
	new_node->data = new_data;
	new_node->next = NULL;
	// 3.链表非空时,让原本最后一个结点指向新结点
	if (*head != NULL) {
		// 2.遍历找到最后一个结点
		Node *end = *head;
		while (end->next != NULL) {
			end = end->next;
		} // while循环结束时, end指向最后一个结点
		end->next = new_node;
		return;
	}
	// 链表尾插之前是空的,那就直接更新头指针就行了
	*head = new_node;
}
后续单链表的面试题，也请基于此链表结点的定义，以及尾插法构建链表实现。
利用快慢指针法，直接求解下列两个问题：
1.求链表中间结点的值
2.判断单链表是否有环
注意：
不仅要定义函数实现对应功能，还需要编写测试用例，进行测试。尤其是测试单链表有环，要自己构建出一条有环的单链表进行测试。
*/
//typedef struct node {
//	int data;
//	struct node *next;
//} Node;
//
//// 实现尾插法构建链表
//void insert_tail(Node **head, int new_data) 
//{
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
//	return;
//}
// 链表尾插之前是空的,那就直接更新头指针就行了

////1.求链表中间结点的值
//int get_value_of_mid(Node * head)
//{
//	//如果链表为奇数，则返回中间的值。
//	//如果链表为偶数，分为	返回中上结点，返回中下结点。
//
//	//若为偶然数，以下方法	返回中上节点。若为奇数，返回中间值。
//	if (head == NULL)
//		{
//			printf("输入错误！\n");
//			exit(EXIT_FAILURE);
//		}
//
//		Node *fast = head;
//		Node *slow = head;
//
//		while (fast != NULL && fast->next != NULL)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//		}
//
//		return slow->data;
//
//
//		//若为偶然数，以下方法	返回中下节点。若为奇数，返回中间值。
//		if (head == NULL)
//		{
//			printf("输入错误！\n");
//			exit(EXIT_FAILURE);
//		}
//
//		Node *fast = head->next;
//		Node *slow = head;
//
//		while (fast != NULL && fast->next != NULL)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//		}
//
//		return slow->data;
//
//	}
//
//	//2.使用双指针法，判断单链表是否有环
//	bool has_circle(Node *head)
//	{
//		if (head == NULL || head->next == NULL)			//如果head == NULL，则说明没有节点；如果head->next == NULL，则说明只有一个结点，这个节点的next指向空。
//			return false;
//
//		Node *fast = head	;
//		Node *slow = head;
//
//		while (fast!=NULL&&fast->next!=NULL)
//		{
//			fast = fast->next->next;
//			slow = slow->next;
//
//			if (fast == slow)				//快慢指针相同的时候，则说明有环。
//				return true;
//		}
//
//		//走到这里，则说明，快指针跳出来了。没有环。
//		return false;
//	}

/*

判断单链表有环的最佳实现是利用快慢指针法，但哈希表也是一个不算太差的求解方式。你可以在遍历链表的过程中，将链表的每一个结点存入哈希表，若发现有重复结点被存入哈希表，则确定单链表有环。

你可以基于下面头文件来实现哈希表：

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define CAPACITY 10  // 哈希表的底层数组长度是10

typedef struct node {
	int data;
	struct node *next;
}Node;	// 哈希表当中存储的链表结点类型

// 此哈希表只存储键,不存储value
// key值存储链表结点的指针
typedef Node *KeyType;

// 键值对结点，此时无需存储值了
typedef struct node_s {
	KeyType key;    // 键
	struct node_s *next;
} HashNode; // 键值对结点类型

typedef struct {
	HashNode *buckets[CAPACITY];
	uint32_t hash_seed;
} HashMap;    // 哈希表结构体类型

// 创建一个固定容量的哈希表
HashMap *hashmap_create();
// 销毁哈希表
void hashmap_destroy(HashMap *map);


尝试将链表结点的指针(地址)插入哈希表
若发现结点已存入哈希表, 则函数返回true
若结点未存入, 则将结点地址存入哈希表并返回false

bool hashmap_put(HashMap *map, KeyType key);
构建有环单链表的代码如下：

// 实现尾插法
void insert_behind_tail(Node **head, int data) {
	// 1.新建结点
	Node *new_node = malloc(sizeof(Node));
	if (new_node == NULL) {
		printf("malloc failed in insert_behind_tail.\n");
		exit(1);
	}
	// 初始化新结点
	new_node->next = NULL;
	new_node->data = data;

	// 2.判断尾插前链表是否为空
	if (*head == NULL) {
		// 链表尾插之前为空
		*head = new_node;
		return;
	}
	// 链表尾插时 不为空
	Node *tail = *head;
	while (tail->next != NULL) {
		tail = tail->next;
	}	// while循环结束时, curr指向当前的尾结点
	tail->next = new_node;
}

int main(void) {
	Node *head = NULL;	// 头指针是空指针, 表示链表为空
	insert_behind_tail(&head, 1);
	insert_behind_tail(&head, 2);
	insert_behind_tail(&head, 3);
	insert_behind_tail(&head, 4);
	insert_behind_tail(&head, 5);

	// 希望构建一个 8->3 的有环链表 希望尾结点指向链表的第三个结点, 第三个结点索引是2
	int count = 0;
	Node *third_node = NULL;
	Node *tail = head;
	while (tail->next != NULL) {
		count++;
		if (count == 3) {
			// tail就指向了第三个结点
			third_node = tail;
		}
		tail = tail->next;
	}	// 循环结束时, tail指向尾结点, third_node指向链表第三个结点
	tail->next = third_node;

	return 0;
}
请编写代码，检测单链表是否有环。

*/

/*
请自己手动实现两个基础, 但不常用的排序算法：
// 选择排序
void selection_sort(int arr[], int len);
// 冒泡排序
void bubble_sort(int arr[], int len);
然后给定一个int数组，实现将它从小到大进行排序。
*/
//void selection_sort(int arr[], int len)
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
//		int temp = arr[i];
//		arr[i] = arr[min_index];
//		arr[min_index] = temp;
//	}
//}
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
//			return;
//	}
//}

/*
请自己手动实现插入排序算法：

// 插入排序
void insertion_sort(int arr[], int len);
然后给定一个int数组，实现将它从小到大进行排序。
*/
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
//			arr[need_check_index + 1] = arr[need_check_index];								//如果进入循环，则说明当前下标的值大于要插入的值。把当前下标的值往后挪。
//			need_check_index--;														//下标-1，继续检查后一个下标的值。
//		}
//
//		arr[need_check_index + 1] = need_insert_value;									//如果出来了，说明当前下标的值比要插入值小。把值插入到下标的后一个数据上。
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
//			arr[need_check_index + gap] = need_insert_value;
//		}
//		gap /= 2;
//	}
//}

/*
请手动实现希尔排序算法:
void shell_sort(int arr[], int n);
*/
////希尔排序：插入排序的改进。
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
//			while (need_check_index>=0&&arr[need_check_index]>need_insert_value)
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

//int main(void) {
//	Node *head = NULL;	// 头指针是空指针, 表示链表为空
//	insert_behind_tail(&head, 1);
//	insert_behind_tail(&head, 2);
//	insert_behind_tail(&head, 3);
//	insert_behind_tail(&head, 4);
//	insert_behind_tail(&head, 5);
//	insert_behind_tail(&head, 6);
//	insert_behind_tail(&head, 7);
//	insert_behind_tail(&head, 8);
//
//	// 希望构建一个 8->3 的有环链表 希望尾结点指向链表的第三个结点, 第三个结点索引是2
//	int count = 0;
//	Node *third_node = NULL;
//	Node *tail = head;
//	while (tail->next != NULL) {
//		count++;
//		if (count == 3) {
//			// tail就指向了第三个结点
//			third_node = tail;
//		}
//		tail = tail->next;
//	}	// 循环结束时, tail指向尾结点, third_node指向链表第三个结点
//	tail->next = third_node;
//
//	//检查是否有环。
//	
//
//	HashMap *map = hashmap_create();
//	Node *curr = head;					//这个curr是指向外面的链表的，不是指向哈希表的。
//	bool has_loop = false;
//	while (curr != NULL)
//	{
//		if (hashmap_put(map, curr) == 1)					//如果返回的是1，进入if，说明之前存入过这个数据，说明有环。
//		{
//			has_loop = true;
//			break;
//		}
//
//		curr = curr->next;				//如果链表有环，则会进入if，如果没有环，运行到这最后，curr=NULL，跳出循环。
//	}
//
//	if (has_loop == true)
//		printf("该链表有环。\n");
//	else
//		printf("该链表无环。\n");
//
//	hashmap_destroy(map);
//
//	return 0;
//}

////冒泡排序：
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
//
//		}
//
//		if (flag == 0)
//			break;
//	}
//}

/*
//请自行熟悉文件流的操作函数，实现以下文件流基础操作：
//
//1.逐字符文本文件复制，函数声明是：
//void copy_file_char(const char* src_file, const char* dest_file);
//2.逐行文本文件复制，函数声明式：
//void copy_file_line(const char* src_file,const char* dest_file);
//3.用fread和fwrite函数实现二进制文件的复制, 函数声明如下：
//void binary_file_cpy(const char* src_file, const char* dest_file);
//4.用fread和fwrite函数实现二进制的序列化和反序列化操作。
//
//此操作可以不提取函数，直接在main函数中实现即可。但只允许使用一个FILE流。
//*/
////1.逐字符文本文件复制，函数声明是：
//void copy_file_char(const char *src_file, const char *dest_file)
//{
//	//第一步：打开文件。
//	FILE *fr_src = fopen(src_file, "r");
//	FILE *fw_dest = fopen(dest_file, "w");
//
//	//第二步：检查是否打开成功。
//	if (fr_src == NULL||fw_dest==NULL)
//	{
//		printf("打开文件失败！\n");
//		return;
//	}
//
//	//第三步：进行复制。
//	char ch;
//	while ((ch=fgetc(fr_src)) != EOF)
//	{
//		fputc(ch, fw_dest);
//	}
//
//	//第四步：关闭文件。
//	fclose(fr_src);
//	fclose(fw_dest);
//}
//
////2.逐行文本文件复制，函数声明式：
//#define MAX_CHARS  1024				//最大可读取1KB个字节。
//void copy_file_line(const char *src_file, const char *dest_file)
//{
//	//第一步：进行打开文件：
//	FILE *fr_src = fopen(src_file, "r");
//	FILE *fw_dest = fopen(dest_file, "w");
//
//	//第二步：进行检查。
//	if (fw_dest == NULL || fr_src == NULL)
//	{
//		printf("打开失败！\n");
//		exit(EXIT_FAILURE);
//	}
//
//	//第三步：进行操作。
//	char str[MAX_CHARS];
//	while (fgets(str,sizeof(str),fr_src) != NULL)
//	{
//		fputs(str, fw_dest);
//	}
//
//	//第四步：关闭文件。
//	fclose(fr_src);
//	fclose(fw_dest);
//
//}
//
////3.用fread和fwrite函数实现二进制文件的复制, 函数声明如下：
//#define MAX_CAPACITY  4096
//void binary_file_cpy(const char *src_file, const char *dest_file)
//{
//	//第一步：进行打开文件：
//	FILE *fr_src = fopen(src_file, "rb");
//	FILE *fw_dest = fopen(dest_file, "wb");
//
//	//第二步：进行检查。
//	if (fw_dest == NULL || fr_src == NULL)
//	{
//		printf("打开失败！\n");
//		exit(EXIT_FAILURE);
//	}
//
//	//第三步：进行操作。
//	char buffer[MAX_CAPACITY];
//	size_t bytes_read;
//
//	while ((bytes_read=fread(buffer, sizeof(char), MAX_CAPACITY, fr_src)) > 0)
//	{
//		fwrite(buffer, sizeof(char), bytes_read, fw_dest);
//	}
//
//	//第四步：关闭文件。
//	fclose(fr_src);
//	fclose(fw_dest);
//}
//
//
//int main()
//{
//	//copy_file_char("file_stream_homework.txt","file_stream_homework_of_write.txt");
//	//copy_file_line("file_stream_homework.txt", "file_stream_homework_of_write.txt");
//	binary_file_cpy("file_stream_homework.txt", "file_stream_homework_of_write.txt");
//
//
//
//	return 0;
//}
//


////请手动实现堆排序算法:
////void heap_sort(int arr[], int len);
////要有一个维护堆性质的函数：
//void swap(int arr[], int i, int j) 
//{
//	int tmp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = tmp;
//}
//void heapify(int arr[], int len, int i)
//{
//	int largest = i;
//
//	int lson = i * 2 + 1;
//	int rson = i * 2 + 2;
//
//	if (lson < len && arr[largest] < arr[lson])
//		largest = lson;
//	if (lson < len && arr[largest] < arr[rson])
//		largest = rson;
//
//	if (largest == i)
//		return;
//
//	swap(arr, largest, i);
//	heapify(arr, len, largest);
//}
//
//void heap_sort(int arr[], int len)
//{
//	//堆排序的第一步就是建堆。
//	for (int i = (len - 1) / 2; i >= 0; i--)		//这就是建堆的过程，从最后一元素（下标为len-1）开始，他的父节点是(len - 1) / 2。所以从(len - 1) / 2开始循环。
//	{
//		heapify(arr, len, i);
//	}
//	//舰队之后，数组元素就符合大顶堆的特点了。
//
//	//排序，维护。
//	for (int i = len - 1; i > 0; i--)
//	{
//		swap(arr, i, 0);
//		heapify(arr, i, 0);
//	}
//}
//
//
////堆排：
////首先创建一个辅助函数，主要是用来维护大顶堆。
//void heapify(int arr[], int len, int i)
//{
//	int largest = i;
//
//	int lson = i * 2 + 1;
//	int rson = i * 2 + 2;
//
//	if (lson < len && arr[largest] < arr[lson])
//		largest = lson;
//
//	if (rson < len && arr[largest] < arr[rson])
//		largest = rson;
//
//	if (largest == i)
//		return;
//
//	swap(arr, i, largest);
//
//	heapify(arr, len, largest);
//}
//void heap_sort(int arr[], int len)
//{
//	//第一步：建堆。(从最后一个非叶子节点到根节点。)
//	for (int i = len / 2 - 1; i >= 0; i--)
//		heapify(arr, len, i);
//
//	//第二步：对顶部的数（最大的数）放到数组最后面，还要维护大顶堆。
//	for (int i = len - 1; i > 0; i--)
//	{
//		swap(arr, 0, i);
//		heapify(arr, i, 0);
//	}
//}

////堆排序：时间复杂度O（nlogn），空间复杂度O（1）。
////需要创建一个辅助函数，这个辅助函数是用来维护数组的大顶堆的。
//void swap_by_point(int *p1, int *p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//void heapify(int arr[], int len, int i)
//{
//	int largest = i;					//假设，我要维护的顶点i就是最大的数。
//	int lson = i * 2 + 1;				//左孩子。
//	int rson = i * 2 + 2;				//右孩子。
//
//	if (lson < len && arr[largest] < arr[lson])
//		largest = lson;
//	if (rson < len && arr[largest] < arr[rson])
//		largest = rson;
//
//	if (largest == i)
//		return;
//
//	swap_by_point(&arr[i], &arr[largest]);
//
//	heapify(arr, len, largest);
//}
////堆排序：
//void heap_sort(int arr[], int len)
//{
//	//第一步：对传进来的数进行大顶堆排序。
//	for (int i = (len - 1 - 1) / 2; i >= 0; i--)
//		heapify(arr, len, i);
//
//	//第二步：下标0的数（最大的数）放最后，到下标为j的数。然后对这个大顶堆进行维护。
//	for (int j = len - 1; j > 0; j--)
//	{
//		swap_by_point(&arr[j], &arr[0]);			//首先对下标为0的数，和当前最后一个数进行交换。
//		heapify(arr, j, 0);
//	}
//}

///*
//请自行熟悉文件流的操作函数，实现以下文件流基础操作：
//1.逐字符文本文件复制，函数声明是：
//void copy_file_char(const char* src_file, const char* dest_file);
//2.逐行文本文件复制，函数声明式：
//void copy_file_line(const char* src_file,const char* dest_file);
//3.用fread和fwrite函数实现二进制文件的复制, 函数声明如下：
//void binary_file_cpy(const char* src_file, const char* dest_file);
//4.用fread和fwrite函数实现二进制的序列化和反序列化操作。
//
//此操作可以不提取函数，直接在main函数中实现即可。但只允许使用一个FILE流。
//*/
////1.逐字符文本文件复制，函数声明是：
//void copy_file_char(const char *src_file, const char *dest_file)
//{
//	//第一步：打开文件。
//	FILE *fr = fopen(src_file, "r");
//	FILE *fw = fopen(dest_file, "w");
//
//	//第二步：检查。
//	if (fr == NULL || fw == NULL)
//	{
//		printf("error code:%d\n", errno);
//		printf("error reason:%s\n", strerror(errno));
//		perror("fopen failed");
//		exit(EXIT_FAILURE);
//	}
//
//	//第三步：使用。
//	int ch;
//	while ((ch = fgetc(fr)) != EOF)
//	{
//		fputc(ch, fw);
//	}
//
//	//第四步：关闭。
//	fclose(fr);
//	fclose(fw);
//}
//
////2.逐行文本文件复制，函数声明式：
//#define MAX_CAPACITY 1024
//void copy_file_line(const char *src_file, const char *dest_file)
//{
//	//第一步：打开文件。
//	FILE *fr = fopen(src_file, "r");
//	FILE *fw = fopen(dest_file, "w");
//
//	//第二步：检查。
//	if (fr == NULL || fw == NULL)
//	{
//		printf("error code:%d\n", errno);
//		printf("error reason:%s\n", strerror(errno));
//		perror("fopen failed");
//		exit(EXIT_FAILURE);
//	}
//
//	//第三步：使用。
//	char arr[MAX_CAPACITY];
//	while (fgets(arr, sizeof(arr), fr) != NULL)				//fgets()函数复制文件，核心逻辑是“逐行读取，逐行写入”，因为fgets每次调用都会读一整行（直到遇到换行符\n，或者文件尾）。
//														//所以只需要放进一个while循环里面，就能完成文件的逐行复制。
//		fputs(arr, fw);
//
//	//第四步：关闭。
//	fclose(fr);
//	fclose(fw);
//}
//
////3.用fread和fwrite函数实现二进制文件的复制, 函数声明如下：
//#define MAX_CAPACITY 1024
//void binary_file_cpy(const char *src_file, const char *dest_file)
//{
//	//第一步：打开文件。
//	FILE *fr = fopen(src_file, "rb");			//使用fread和fwrite时，要用二进制方式打开，在模式后面加一个b。
//	FILE *fw = fopen(dest_file, "wb");			//使用fread和fwrite时，要用二进制方式打开，在模式后面加一个b。
//
//	//第二步：检查。
//	if (fr == NULL || fw == NULL)
//	{
//		printf("error code:%d\n", errno);
//		printf("error reason:%s\n", strerror(errno));
//		perror("fopen failed");
//		exit(EXIT_FAILURE);
//	}
//
//	//第三步：使用。
//	int arr[MAX_CAPACITY];
//	int element_read;						//我需要知道fread读取了多少个元素，在fwrite的时候我需要使用。
//	while ((element_read= fread(arr, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), fr)) > 0)				//fread函数，返回的是成功读写的个数。是实际读取的个数。
//	{
//		fwrite(arr, sizeof(arr[0]), element_read, fw);				//注意：fwrite的第三个参数是，要写入的元素个数。不是总字节数。
//	}
//
//	//第四步：关闭。
//	fclose(fr);
//	fclose(fw);
//}
//
////4.用fread和fwrite函数实现二进制的序列化和反序列化操作。
//typedef struct
//{
//	char name[20];
//	int score;
//	char gender;
//}student;
//
//int main()
//{
//	//1.逐字符文本文件复制，函数声明是：
//	//copy_file_char("file_stream_homework.txt","file_stream_homework_of_write.txt");
//
//	//2.逐行文本文件复制，函数声明式：
//	//copy_file_line("file_stream_homework.txt", "file_stream_homework_of_write.txt");
//
//	//3.用fread和fwrite函数实现二进制文件的复制, 函数声明如下：
//	binary_file_cpy("file_stream_homework.txt", "file_stream_homework_of_write.txt");
//
//	//4.用fread和fwrite函数实现二进制的序列化和反序列化操作。
//	//首先创建一个结构体变量：
//	student s1 = { "张三",18,'m'};
//
//	FILE *fp = fopen("struct_file_home.txt", "wb+");			//wb+：以二进制读写模式
//	if (fp == NULL)
//	{
//		printf("error code:%d\n", errno);
//		printf("error reason:%s\n", strerror(errno));
//		perror("error");
//		exit(EXIT_FAILURE);
//	}
//
//	//序列化：
//	fwrite(&s1, sizeof(student), 1, fp);				//把s1的数据写进fp里面。把内存中的东西写进硬盘。
//
//	//此时文件指针执行了文件的最后。要把这个指针拉回到开头。
//	rewind(fp);		//或者	fseek(fp,0,SEEK_SET);		反序列化准备。
//
//	//反序列化：把数据从硬盘读取到内存。
//	student s2 = { 0 };
//	fread(&s2, sizeof(student), 1, fp);
//
//	printf("%s\n%d\n%c\n", s2.name, s2.score, s2.gender);
//
//	fclose(fp);
//
//	return 0;
//}

///*
//用户输入文件名，将整个文件的内容读入到字符数组中，并在后面添加空字符'\0'。
// char* read_file(const char* path);
//分析思路：
//1.打开文件，以只读模式打开即可。不要忘记进行打开失败，错误处理。（在Windows平台下，应该以rb只读模式打开）
//2.此案例中文件的大小只能在运行时期确定，所以需要动态内存分配一个字符数组用于存储结果字符串。
//3.结果字符串的长度 = 文件字节大小 + 1
//4.文件字节大小怎么算？用ftell函数配合fseek函数即可计算。
//5.利用fread函数一次性将整个文件中的数据，全部读到结果字符数组中，然后自己在末尾加一个空字符。
//*/
//char *read_file(const char *path)
//{
//	FILE *fp_r = fopen(path, "rb");
//
//	if (fp_r == NULL)
//	{
//		printf("error code:%d\n", errno);
//		printf("error reason:%s\n", strerror(errno));
//		perror("fopen failed reason");
//		return NULL;
//	}
//
//	fseek(fp_r, 0, SEEK_END);
//	int byte_num1 = ftell(fp_r);								//该函数返回，当前文件位置指示器相对文件开头的偏移量（字节为单位）。
//	rewind(fp_r);	
//
//
//	char *arr = malloc(byte_num1 * sizeof(char)+1);
//	if (arr == NULL)
//	{
//		printf("error code:%d\n", errno);
//		printf("error reason:%s\n", strerror(errno));
//		perror("error");
//	}
//
//	fread(arr, sizeof(arr[0]), byte_num1, fp_r);
//	arr[byte_num1] = '\0';
//
//	printf("%s\n", arr);
//
//	fclose(fp_r);
//
//	return arr;
//}
//
//int main()
//{
//	read_file("file_stream_homework.txt");
//
//	return 0;
//}

////堆排序：
////首先需要一个辅助函数，用来维护大顶堆。
//void swap(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void heapify(int arr[], int len, int i)
//{
//	int largest = i;				//假设需要维护的顶堆的最大值就是为下标i的元素。
//
//	int lson = i * 2 + 1;
//	int rson = i * 2 + 2;
//
//	if(lson < len && arr[largest] < arr[lson])
//		largest = lson;
//	if(rson < len && arr[largest] < arr[rson])
//		largest = rson;
//
//	if (i == largest)
//		return;
//
//	swap(&arr[largest], &arr[i]);
//	heapify(arr, len, largest);
//}
//void heap_sort(int arr[], int len)
//{
//	//第一步：构建大顶堆。
//	for (int i = len / 2 - 1; i >= 0; i++)
//		heapify(arr, len, i);
//
//	//第二步：交换最大值。维护大顶堆。
//	for (int i = len - 1; i > 0; i--)
//	{
//		swap(&arr[i], &arr[0]);
//		heapify(arr, i, 0);
//	}
//}
//
////选择排序：
//void select_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int min_index = i;
//		for (int j = i+1; j < len; j++)
//		{
//			if (arr[min_index] > arr[j])
//				min_index = j;
//		}
//
//		if (i != min_index)
//			swap(&arr[i], &arr[min_index]);
//	}
//}
//
////冒泡排序：
//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int flag = 0;
//
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(&arr[j], &arr[j + 1]);
//				flag = 1;
//			}
//		}
//
//		if (flag == 0)
//			return;
//	}
//}
//
////插入排序：
//void insert_sort(int arr[], int len)
//{
//	for (int i = 1; i < len; i++)
//	{
//		int need_sert_valur = arr[i];
//		int need_check_index = i - 1;
//
//		while (need_check_index >= 0 && arr[need_check_index] > need_sert_valur)
//		{
//			arr[need_check_index + 1] = arr[need_check_index];
//			need_check_index--;
//		}
//
//		arr[need_check_index+1] = need_sert_valur;
//	}
//}
//
////希尔排序
//void shell_sort(int arr[], int len)
//{
//	int gap = len / 2;
//
//	while (gap > 0)
//	{
//		for (int i = gap; i < len; i++)
//		{
//			int need_sert_value = arr[i];
//			int need_check_index = i - gap;
//
//			while (need_check_index >= 0 && arr[need_check_index] > need_sert_value)
//			{
//				arr[need_check_index + gap] = arr[need_check_index];
//				need_check_index -= gap;
//			}
//
//			arr[need_check_index+gap] = need_sert_value;
//		}
//
//		gap /= 2;
//	}
//}

//void swap(int *a, int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
////冒泡排序：
//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(&arr[j], &arr[j + 1]);
//				flag = 1;
//			}
//		}
//
//		if (flag == 0)
//			return;
//	}
//
//	//时间复杂度：O（n^2）
//	//空间复杂度：O（1）
//	//稳定性：稳定。
//}
////选择排序：
//void select_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int min_index = i;
//
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[min_index] > arr[j])
//				min_index = j;
//		}
//
//		if (min_index != i)
//			swap(&arr[min_index], &arr[i]);
//	}
//
//	//时间复杂度：O（n^2）
//	//空间复杂度：O（1）
//	//稳定性：不稳定。
//}
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
//
//	//时间复杂度：O（n^2）
//	//空间复杂度：O（1）
//	//稳定性：不稳定。
//}
////希尔排序：是插入排序的优化，效率远高于普通的插入排序。
//void shell_sort(int arr[], int len)
//{
//	int gap = len / 2;
//
//	while (gap > 0)
//	{
//
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
//			arr[need_check_index + gap] = need_insert_value;
//		}
//
//		gap /= 2;
//	}
//
//	//时间复杂度：O（n^2）
//	//空间复杂度：O（1）
//	//稳定性：不稳定。
//}
////堆排序：
////堆排序需要一个辅助函数，该函数的主要作用是维护大顶堆。
//void heapify(int arr[], int len, int i)
//{
//	int largest = i;
//	int lson = i * 2 + 1;
//	int rson = i * 2 + 2;
//
//
//	if (lson < len && arr[largest] < arr[lson])
//		largest = lson;
//	if (rson < len && arr[largest] < arr[rson])
//		largest = rson;
//
//	if (largest == i)
//		return;
//
//	swap(&arr[largest], &arr[i]);
//	heapify(arr, len, largest);
//}
//void heap(int arr[], int len)
//{
//	//首先，把数组变为大顶堆。
//	for (int i = len / 2 - 1; i >= 0; i--)
//		heapify(arr, len, i);
//
//	//换最大值，维护大顶堆。
//	for (int i = len - 1; i > 0; i--)
//	{
//		swap(&arr[0], &arr[i]);
//		heapify(arr, i, 0);
//	}
//}

///*
//请自行熟悉文件流的操作函数，实现以下文件流基础操作：
//1.逐字符文本文件复制，函数声明是：
//void copy_file_char(const char* src_file, const char* dest_file);
//2.逐行文本文件复制，函数声明式：
//void copy_file_line(const char* src_file,const char* dest_file);
//3.用fread和fwrite函数实现二进制文件的复制, 函数声明如下：
//void binary_file_cpy(const char* src_file, const char* dest_file);
//4.用fread和fwrite函数实现二进制的序列化和反序列化操作。
//此操作可以不提取函数，直接在main函数中实现即可。但只允许使用一个FILE流。
//*/
////1.逐字符文本文件复制，函数声明是：
//void copy_file_char(const char *src_file, const char *dest_file)
//{
//	FILE *fr = fopen(src_file, "r");
//	FILE *fw = fopen(dest_file, "w");
//
//	if (fr == NULL || fw == NULL)
//	{
//		printf("error code:%d\n", errno);
//		printf("error reason:%s\n", strerror(errno));
//		perror("error reason:");
//
//		exit(EXIT_FAILURE);
//	}
//
//	int ch;
//	while ((ch = fgetc(fr)) != EOF)				//fgetc：输入文件指针，成功时返回读取的字符，失败时返回EOF(-1)。返回值需要用int接收。	
//	{
//		fputc(ch,fw);				//fput：输入要保存的字符，和输出文件指针。成功时返回输出的字符，失败时返回EOF(-1)。返回值需要用int接收。
//	}
//
//	fclose(fr);
//	fclose(fw);
//}
////2.逐行文本文件复制，函数声明式：
//#define MAX_CAPACITY (1024)
//void copy_file_line(const char *src_file, const char *dest_file)
//{
//	FILE *fr = fopen(src_file, "r");
//	FILE *fw = fopen(dest_file, "w");
//
//	if (fr == NULL || fw == NULL)
//	{
//		printf("error code:%d\n", errno);
//		printf("error reason:%s\n", strerror(errno));
//		perror("error reason");
//
//		exit(EXIT_FAILURE);
//	}
//
//	char arr[MAX_CAPACITY];
//	while (fgets(arr, sizeof(arr), fr)!=NULL)		
//		//fgets：输入指针，数组最大容量，文件指针。成功时返回指针，arr。失败时返回NUL。一次最多读MAX_CAPACITY-1个字符，最后一个为\0。
//		// 停止条件：
//		//		1：读到了换行符\n。				如果数组没有装满，剩余的部分不会变。还是原来的内容。
//		//		2：读到了文件末尾（EOF）。
//		//		3：已经读了size-1个字符。			如果这一行太长，没有读完，下一次会接着这一行继续读。不会直接读下一行。
//	{
//		fputs(arr, fw);
//		//fputs：成功时返回一个非负整数（通常是0）。失败时返回EOF（-1）。
//	}
//
//	fclose(fr);
//	fclose(fw);
//}
//
////3.用fread和fwrite函数实现二进制文件的复制, 函数声明如下：
//#define MAX_CAPACITY (1024)
//void binary_file_cpy(const char *src_file, const char *dest_file)
//{
//
//	FILE *fr = fopen(src_file, "rb");
//	FILE *fw = fopen(dest_file, "wb");
//
//	if (fr == NULL || fw == NULL)
//	{
//		printf("error code:%d\n", errno);
//		printf("error reason:%s\n", strerror(errno));
//		perror("error reason");
//
//		exit(EXIT_FAILURE);
//	}
//
//	char arr[MAX_CAPACITY];
//	size_t byte_num = 0;
//	while ((byte_num=fread(arr, sizeof(arr[0]), sizeof(arr)/ sizeof(arr[0]), fr)) > 0)	//fread：返回成功读取的数据单元个数。不是总字节数。
//	{
//		fwrite(arr, sizeof(arr[0]), byte_num, fw);		//fwrite：返回成功写入的数据单元个数。
//	}
//
//	fclose(fr);
//	fclose(fw);
//}

///*
//用户输入文件名，将整个文件的内容读入到字符数组中，并在后面添加空字符'\0'。
//
// char* read_file(const char* path);
//分析思路：
//1.打开文件，以只读模式打开即可。不要忘记进行打开失败，错误处理。（在Windows平台下，应该以rb只读模式打开）
//2.此案例中文件的大小只能在运行时期确定，所以需要动态内存分配一个字符数组用于存储结果字符串。
//3.结果字符串的长度 = 文件字节大小 + 1
//4.文件字节大小怎么算？用ftell函数配合fseek函数即可计算。
//5.利用fread函数一次性将整个文件中的数据，全部读到结果字符数组中，然后自己在末尾加一个空字符。
//*/
//char *read_file(const char *path)
//{
//	FILE *fr = fopen(path, "rb");				//凡是涉及到计算文件大小、随机定位的操作，务必使用二进制模式（"rb"）打开文件。
//	
//	if (fr == NULL)
//	{
//		printf("error code:%d.\n", errno);
//		printf("error reason:%s.\n", strerror(errno));
//		perror("error reason");
//
//		exit(EXIT_FAILURE);
//	}
//
//	fseek(fr, 0L, SEEK_END);			//将 读写位置指示器 偏移到fr指向的文件夹的最后。成功返回0，失败返回非零（通常为-1）。
//	long byte_num = ftell(fr);			//ftell函数，返回当前 读写位置指示器 相对于文件开头的偏移量。以字节为单位。
//	rewind(fr);
//	fseek(fr, 0, SEEK_SET);
//
//	char *p = malloc((byte_num+1) * sizeof(char));
//	if (p == NULL)
//	{
//		printf("error code:%d.\n", errno);
//		printf("error reason:%s.\n", strerror(errno));
//		perror("error reason");
//		exit(EXIT_FAILURE);
//	}
//
//	fread(p, sizeof(char), byte_num, fr);
//	p[byte_num] = '\0';
//
//	printf("%s\n", p);
//
//	fclose(fr);
//
//	return p;
//}

///*
//请自行熟悉文件流的操作函数，实现以下文件流基础操作：
//
//1.逐字符文本文件复制，函数声明是：
//void copy_file_char(const char* src_file, const char* dest_file);
//2.逐行文本文件复制，函数声明式：
//void copy_file_line(const char* src_file,const char* dest_file);
//3.用fread和fwrite函数实现二进制文件的复制, 函数声明如下：
//
//void binary_file_cpy(const char* src_file, const char* dest_file);
//4.用fread和fwrite函数实现二进制的序列化和反序列化操作。
//
//此操作可以不提取函数，直接在main函数中实现即可。但只允许使用一个FI
//*/
//
////1.逐字符文本文件复制，函数声明是：
//void copy_file_char(const char *src_file, const char *dest_file)
//{
//	FILE *fr = fopen(src_file, "r");
//	FILE *fw = fopen(dest_file, "w");
//
//	if (fr == NULL || fw == NULL)
//	{
//		printf("error code:%d.\n", errno);
//		printf("error reason:%s.\n", strerror(errno));
//		perror("error reason");
//
//		exit(EXIT_FAILURE);
//	}
//
//	int ch;
//	while ((ch=fgetc(fr)) != EOF)
//	{
//		fputc(ch, fw);
//	}
//
//	fclose(fr);
//	fclose(fw);
//}
////2.逐行文本文件复制，函数声明式：
//#define MAX_CAPACITY 1024
//void copy_file_line(const char *src_file, const char *dest_file)
//{
//	FILE *fr = fopen(src_file, "r");
//	FILE *fw = fopen(dest_file, "w");
//
//	if (fr == NULL || fw == NULL)
//	{
//		printf("error code:%d.\n", errno);
//		printf("error reason:%s.\n", strerror(errno));
//		perror("error reason");
//
//		exit(EXIT_FAILURE);
//	}
//
//	char str[MAX_CAPACITY];
//	while (fgets(str,MAX_CAPACITY,fr)!=NULL)
//	{
//		fputs(str,fw);
//	}
//
//	fclose(fr);
//	fclose(fw);
//
//}
////3.用fread和fwrite函数实现二进制文件的复制, 函数声明如下：
//#define MAX_CAPACITY 1024
//void binary_file_cpy(const char *src_file, const char *dest_file)
//{
//	FILE *fr = fopen(src_file, "rb");
//	FILE *fw = fopen(dest_file, "wb");
//
//	if (fr == NULL || fw == NULL)
//	{
//		printf("error code:%d.\n", errno);
//		printf("error reason:%s.\n", strerror(errno));
//		perror("error reason");
//
//		exit(EXIT_FAILURE);
//	}
//
//	char str[MAX_CAPACITY];
//	size_t byte_num;
//	while ((byte_num=fread(str,sizeof(str[0]),MAX_CAPACITY,fr))>0)
//	{
//		fwrite(str, sizeof(str[0]), byte_num, fw);
//	}
//
//	fclose(fr);
//	fclose(fw);
//}
////4.用fread和fwrite函数实现二进制的序列化和反序列化操作。
//typedef struct student
//{
//	char name[20];
//	int age;
//	char gender;
//}student;
//int main()
//{
//	student s1 = { "张三",18,'m'};
//
//	FILE *fw = fopen("homework_of_file_operations", "wb+");
//
//	if (fw == NULL)
//	{
//		printf("error code:%d.\n", errno);
//		printf("error reason:%s.\n", strerror(errno));
//		perror("error reason");
//
//		exit(EXIT_FAILURE);
//	}
//
//	//序列化。
//	fwrite(&s1, sizeof(s1), 1, fw);
//
//	//此时，读写位置指示器 指向了最后的位置。需要让他重新指向开头。
//	rewind(fw);
//
//	student s2;
//	fread(&s2, sizeof(student), 1, fw);
//
//	fclose(fw);
//
//	return 0;
//}

////堆排序：
////需要一个辅助函数：
//void swap(int *a,int *b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void heapify(int arr[], int len, int i)
//{
//	int largest = i;
//	int lson = 2 * i + 1;
//	int rson = 2 * i + 2;
//
//	if (lson < len && arr[largest] < arr[lson])
//		largest = lson;
//
//	if (rson < len && arr[largest] < arr[rson])
//		largest = rson;
//
//	if (largest == i)
//		return;
//
//	swap(&arr[largest], &arr[i]);
//
//	heapify(arr, len, largest);
//
//}
//void heap_sort(int arr[], int len)
//{
//	//首先对数组进行大顶堆排序。
//	for (int i = len / 2 - 1; i >= 0; i--)
//		heapify(arr, len, i);
//
//	//交换数据，维护大顶堆。
//	for (int i = len - 1; i > 0; i--)
//	{
//		swap(&arr[i], &arr[0]);
//		heapify(arr, len, 0);
//	}
//}

////冒泡排序：
//void bubble_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int flag = 0;
//
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
//			return;
//	}
//}

////选择排序：
//void select_sort(int arr[], int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		int min_index = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[min_index] > arr[j])
//				min_index = j;
//		}
//
//		if (min_index != i)
//		{
//			int temp = arr[i];
//			arr[i] = arr[min_index];
//			arr[min_index] = temp;
//		}
//	}
//}

//插入排序：
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
//
//	}
//}

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
//			arr[need_check_index + gap] = need_insert_value;
//		}
//
//		gap /= 2;
//	}
//
//}

////堆排序：
////辅助函数：
//void heapify(int arr[], int len, int i)
//{
//	int largest = i;
//	int lson = 2 * i + 1;
//	int rson = 2 * i + 2;
//
//	if (lson<len && arr[largest]<arr[lson])
//		largest = lson;
//	if (rson<len && arr[largest]<arr[rson])
//		largest = rson;
//
//	if (largest == i)
//		return;
//
//	int temp = arr[largest];
//	arr[largest] = arr[i];
//	arr[i] = temp;
//
//	heapify(arr, len, largest);
//}
//void heap_sort(int arr[], int len)
//{
//	for (int i = len / 2 - 1; i >= 0; i--)
//		heapify(arr, len, i);
//
//	for (int i = len - 1; i > 0; i--)
//	{
//		int temp = arr[i];
//		arr[i] = arr[0];
//		arr[0] = temp;
//
//		heapify(arr, i, 0);
//	}
//}




/*
用动态数组和链表，基于拉链法来设计哈希桶，实现一个动态哈希表。要求能够基于负载因子，进行自动扩容。

可以基于以下头文件来实现：

#ifndef DYNAMIC_HASHMAP_H
#define DYNAMIC_HASHMAP_H

typedef char *KeyType;
typedef char *ValueType;

#include <stdint.h>

typedef struct node_s {
	KeyType key;
 ValueType val;
 struct node_s *next;
} KeyValueNode;

typedef struct {
	KeyValueNode **buckets;		// 此时哈希桶是一个动态数组，指向char*元素的指针，所以是一个二级指针
	int size;				// 键值对的个数
 int capacity;			// 数组的长度
 uint32_t hash_seed;		// 哈希函数需要的种子值
} DynamicHashMap;

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

#endif // !DYNAMIC_HASHMAP_H
注意：该哈希表底层的数组是可以自动扩容的，键值对元素的类型是字符串类型。

*/

////快速排序：
////首先，快速排序需要一个辅助函数，用来找到基准点。
//int partition(int arr[], int start, int end)
//{
//	int pivot = arr[start];				//把第一个数，arr[start]当作基准点，比它小的放在它左边，比它大的放在它右边。
//
//	while (start < end)
//	{
//		//因为是start作为第一个基准点，所以从右边end开始比较。
//		while (start<end && arr[end]>pivot)
//			end--;
//		if (start < end)
//		{
//			arr[start] = arr[end];
//			start++;
//		}
//
//		while (start<end && arr[start]<pivot)
//			start++;
//		if (start < end)
//		{
//			arr[end] = arr[start];
//			end--;
//		}
//	}
//
//	//运行到这里，则说明start==end，这时候是相等的。他们指向的这个位置就是基准点的位置。
//	arr[start] = pivot;
//	return start;				//返回基准点的下标。
//}
//
//void quick_sort(int arr[],int start,int end)
//{
//	if (start < end)
//	{
//		int pivot_index = partition(arr,start,end);
//		quick_sort(arr, start, pivot_index - 1);
//		quick_sort(arr, pivot_index+1, end);
//	}
//}

////快速排序：
//void swap(int *arr, int left, int right)
//{
//	int temp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = temp;
//}
//void partition(int arr[],int left,int right)
//{
//	int cur_l = left;
//	int cur_r = right;
//
//	int pivot_index = rand() % (right - left + 1) + left;
//	int pivor_vlaue = arr[pivot_index];
//
//	swap(arr, left, pivot_index);
//
//	while (cur_l < cur_r)
//	{
//		while (cur_l<cur_r && arr[cur_r]>pivor_vlaue)
//			cur_r--;
//		if (cur_l < cur_r)
//		{
//			arr[cur_l] = arr[cur_r];
//			cur_l++;
//		}
//
//		while (cur_l<cur_r && arr[cur_l]<pivor_vlaue)
//			cur_l++;
//		if (cur_l < cur_r)
//		{
//			arr[cur_r] = arr[cur_l];
//			cur_r--;
//		}
//	}
//
//	//运行到这里说明，cur_l==cur_r。
//	arr[cur_l] = pivor_vlaue;
//
//	int pivot_final_index = cur_l;
//
//	partition(arr, left, pivot_final_index - 1);
//	partition(arr, pivot_final_index +1, right);
//}
//void quick_sort(int *arr, int len)
//{
//	srand(time(NULL));
//
//	partition(arr, 0, len - 1);
//}

////快速排序：
////需要构建一个辅助函数。函数名partition（分区），参数列表为数组名，左下标，右下标。返回值为基准点的下标。
//int partition(int arr[],int left,int right)				
//{
//	int pivot = arr[left];					//把第一个数作为基准数。
//
//	while (left < right)
//	{
//		while (left<right && arr[right]>pivot)			//基准点右边。
//			right--;
//		if (left < right)
//		{
//			arr[left] = arr[right];
//			left++;
//		}
//		while (left<right && arr[left]<pivot)			//基准点左边。
//			left++;
//		if (left < right)
//		{
//			arr[right] = arr[left];
//			right--;
//		}
//	}
//
//	//运行到这里，说明left==right，都指向了基准数下标
//	arr[left] = pivot;
//	return left;
//}
//void quick_sort(int arr[], int left,int right)
//{
//	if (left >= right)
//		return;
//
//	int pivot_index = partition(arr, left ,right);
//
//	quick_sort(arr, left, pivot_index - 1);
//	quick_sort(arr, pivot_index+1, right);
//}

////快速排序：
////首先需要一个辅助函数，这个函数是分区函数，需要返回基点的下标。
//int partition(int arr[], int left, int right)
//{
//	//假设第一个数是几点，就是下标为left的数为基点。
//	int pivot = arr[left];
//
//	int cur_l = left;
//	int cur_r = right;
//
//	while (cur_l < cur_r)
//	{
//
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
//
//	}
//
//	arr[cur_l] = pivot;
//
//	return cur_l;
//
//}
//void quick_sort(int arr[], int left, int right)
//{
//	if (left >= right)
//		return;
//
//	int pivot_index = partition(arr, left, right);
//
//	quick_sort(arr, left, pivot_index - 1);
//	quick_sort(arr, pivot_index + 1, right);
//
//	//时间复杂度：最好：n*logn			空间复杂度：logn
//	//时间复杂度：平均：n*logn			空间复杂度：logn
//	//时间复杂度：最坏：n^2			空间复杂度：n
//}

////快速排序：
////首先，需要一个辅助函数。
//int partition(int arr[], int left, int right)
//{
//	int pivot = arr[left];
//
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
//			cur_r++;
//		}
//	}
//
//	arr[left] = pivot;
//	return left;
//}
//void quick_sort(int arr[], int left, int right)
//{
//	if (left >= right)
//		return;
//
//	int pivot_index = partition(arr, left, right);
//
//	quick_sort(arr, left, pivot_index - 1);
//	quick_sort(arr, pivot_index+1, right);
//}

////快速排序：
//int partition(int arr[], int left, int right)
//{
//	int pivot = arr[left];
//
//	int cur_l = left;
//	int cur_r = right;
//
//	while (cur_l<cur_r)
//	{
//		while (cur_l<cur_r && arr[right]>pivot)
//			cur_r--;
//		if (cur_l < cur_r)
//		{
//			arr[cur_l] = arr[cur_r];
//			cur_l++;
//		}
//
//		while (cur_l < cur_r && arr[left]<pivot)
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
//	if (left >= right)
//		return;
//
//	int privot_index = partition(arr, left, right);
//
//	quick_sort(arr, left, privot_index-1);
//	quick_sort(arr, privot_index+1,right);
//}

////快速排序：
//int partition(int arr[], int left, int right)
//{
//	int pivot = arr[left];			//假设第一个元素为参考点。
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
//		while (cur_l < cur_r && arr[cur_l] < pivot)
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
//	if (left >= right)
//		return;
//
//	int pivot_indec = partition(arr, left, right);
//	quick_sort(arr, left, pivot_indec-1);
//	quick_sort(arr, pivot_indec+1, right);
//}

//堆排序：
void heapify(int arr[], int len,int i)
{

	int largest = arr[i];
	int lson = 2 * i + 1;
	int rson = 2 * i + 2;

	if (lson < len && arr[largest] < arr[lson])
		largest = lson;
	if (rson < len && arr[largest] < arr[rson])
		largest = rson;

	if (largest == i)
		return;

	int temp = arr[largest];
	arr[largest] = arr[i];
	arr[i] = temp;

	heapify(arr, len, largest);
}
void heap(int arr[], int len)
{
	for (int i = len / 2 - 1; i >= 0; i--)
		heapify(arr, len, i);

	for (int i = len - 1; i > 0; i--)
	{


	}
}
















