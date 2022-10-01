#include <stdio.h>

//分支语句 - 选择语句、

//1.if语句

////判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	printf("请输入一个数：>");
//	scanf("%d", &num);
//	if (0 == num % 2)
//	{
//		printf("%d不是奇数", num);
//	}
//	else
//	{
//		printf("%d是奇数", num);
//	}
//	return 0;
//}

////输出1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////switch -case语句
//
//int main()
//{
//	int day = 0;
//	printf("你想查看星期几呢？>");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("今天是星期一哟！");
//		break;
//	case 2:
//		printf("今天是星期二哟！");
//		break;
//	case 3:
//		printf("今天是星期三哟！");
//		break;
//	case 4:
//		printf("今天是星期四哟！");
//		break;
//	case 5:
//		printf("今天是星期五哟！");
//		break;
//	case 6:
//		printf("今天是星期六哟！");
//		break;
//	case 7:
//		printf("今天是星期七哟！");
//		break;
//	default:
//		printf("没有这一天哟！");
//		break;
//	}
//	return 0;
//}

////switch -case语句
//// 输入1-5，输出的是“weekday”;
//// 输入6-7，输出“weekend”
//int main()
//{
//	int day = 0;
//	printf("你想查看星期几呢？>");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("今天是工作日哟！");
//		break;
//	case 6:
//	case 7:
//		printf("祝您有个愉快的假期");
//		break;
//	default:
//		printf("没有这一天哟！");
//		break;
//	}
//	return 0;
//}

////练习
//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//
//	case 4:
//		m++;
//		break;
//	case 5:
//		m++;
//		n++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	//m=5,n=3
//	return 0;
//}

//while循环

////在屏幕上打印1-10的数
//
//int main()
//{
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d ", i + 1);
//		i++;
//	}
//	return 0;
//}


////while语句中的break和continue
//
//int main()
//{
//	int i = 1;
//	//break
//	/*while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d ", i);   //结果 - 1 2 3 4
//		i++;
//	}*/
//	//continue
//	while (i <= 10)
//	{
//		i += 1;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}
//
////只打印数字字符，跳过其他字符的
//
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}

// break和continue在for循环中
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);     // 1 2 3 4
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;        //后面的语句快不执行
//		printf("%d ", i);   // 1 2 3 4 6 7 8 9 10
//	}
//	return 0;
//}

//for语句的循环控制变量
//1.不可在for循环体内修改循环变量，防止for循环失去控制
//2.建议采取 - 前闭后开

////一些for循环的变种
////1.
//int main()
//{
//	////for循环中的初始化部分，判断部分，调整部分是可以省略的
//	//for (;;)      
//	//{
//	//	printf("haha\n");
//	//}
//	
//	//int i = 0;
//	//int j = 0;
//	//int count = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	for (j = 0; j < 10; j++)
//	//	{
//	//		printf("hehe\n");     
//	//		count += 1;
//	//	}
//	//}
//	//printf("count=%d", count);      //10*10=100
//
//	//int i = 0;
//	//int j = 0;
//	//int count = 0;
//	//for (;i < 10; i++)
//	//{
//	//	for (; j < 10; j++)
//	//	{
//	//		printf("hehe\n");
//	//		count += 1;      //没有赋j的初始值为0的话，i=0循环完后再进j循环，j已经是10了
//	//	}
//	//}
//	//printf("count=%d", count);       // 10
//
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = 0; j = 0; i++, j++)
//	{
//		j++;
//	}
//	//这里一次都不执行，因为for的判断条件是一个赋值语句，j=0，条件为假，不进入循环
//	//循环0次
//	return 0;
//}

//// do while循环中的break和continue
//int main()
//{
//	int i = 10;
//	do
//	{
//		if (i == 5)
//		{
//			//break;  //结果是10
//			continue; // 结果也是10
//		}
//		printf("%d\n", i);
//	} while (i < 10);
//	return 0;
//}

////计算 n的阶乘
//
//int main()
//{
//	int num = 0;
//	printf("请输入需求阶乘的数:>");
//	scanf("%d", &num);
//	int i = 1;
//	int res = 1;
//	for (i = 1; i <= num; i++)
//	{
//		res *= i;
//	}
//	printf("%d\n", res);
//	return 0;
//}

////计算 1!+2!+3!+……+10!
//
//int main()
//{
//	int num = 0;
//	printf("请输入要计算阶乘和的数:>");
//	scanf("%d", &num);
//	int i = 1;
//	int sum = 0; 
//	for (i = 1; i <= num; i++)
//	{
//		int j = 1;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("1到%d的阶乘和为%d", num, sum);
//	return 0;
//}

//// 在一个有序数组中查找具体的某个数字n。
//
////折中查找算法   //二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int mid = 0;
//	int left = 0;
//	int key = 11;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (left <= right)
//	{
//		printf("找到了，下标为:%d\n", mid);
//	}
//	else
//	{
//		printf("没找到……");
//	}
//	return 0;
//}


////mid右移方法
//
//int bin_search(int* p, int left, int right,int key)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) >> 1;
//		if (p[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (p[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = 0;
//	int left = 0;
//	int key = 6;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int ret = bin_search(arr, left, right, key);
//	if (ret == -1)
//	{
//		printf("没找到……");
//	}
//	else
//	{
//		printf("找到了,且下标为%d\n", ret);
//	}
//	return 0;
//}


////猜数字游戏
////RAND_MAX--rand函数能返回随机数的最大值  (范围 0 - RAND_MAX)
//#include <stdlib.h>
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("**********   1. play   ***********\n");
//	printf("**********   2. exit   ***********\n");
//	printf("**********************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	ret = rand() % 100 - 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入1 - 100之间要抽的号：>");
//		scanf("%d", &input);
//		/*if (ret == input)
//		{
//			printf("恭喜您，中奖了！中奖号为%d\n", ret);
//			break;
//		}
//		else
//		{
//			printf("很遗憾，您未能中奖……中奖号为%d\n",ret);
//			break;
//		}*/
//		if (input > ret)
//		{
//			printf("ε=(´ο｀*)))唉，猜大了……\n");
//		}
//		else if (input < ret)
//		{
//			printf("ε=(´ο｀*)))唉，猜小了……\n");
//		}
//		else
//		{
//			printf("恭喜您，中奖了！中奖号为%d\n", ret);
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入……\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////关机程序
//
////法一;
////#include <time.h>
////#include <string.h>
////
////int main()
////{
////	char input[10] = { 0 };
////	system("shutdown -s -t 1000");
////again:
////	printf("电脑将在1000秒内关机，输入我是小可爱，取消关机……:>\n");
////	scanf("%s", input);
////	if (0 == strcmp(input, "我是小可爱"))
////	{
////		system("shutdown -a");
////	}
////	else
////	{
////		goto again;
////	}
////	return 0;
////}
//
////法二：
//#include <string.h>
//#include <time.h>
//#include <stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 1000");
//	while (1)
//	{
//		printf("电脑将在1000秒内关机，输入我是小可爱，取消关机:>\n");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是小可爱"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}

int func(int a)
{
	int b;
	switch (a)
	{
	case 1:
		b = 30;
	case 2:
		b = 20;
	case 3:
		b = 16;
	default:
		b = 0;
	}
	return b;
}
int main()
{
	printf("%d\n", func(1));
}