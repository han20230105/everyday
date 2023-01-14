#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
	/*int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入三个数字");
	scanf("%d%d%d", &a,&b,&c);
	if (a > b && b > c)
	{
		printf("%d%d%d", a, b, c);
	}
	else if (a > c && c > b)
	{
		printf("%d%d%d", a, c, b);
	}
	else if (b > c && c > a)
	{
		printf("%d%d%d", b, c, a);
	}
	else if (b > a && a > c)
	{
		printf("%d%d%d", b, a, c);
	}
	else if (c > a && a > b)
	{
		printf("%d%d%d", c, a, b);
	}
	else if (c > b && b > a)
	{
		printf("%d%d%d", c, b, a);
	}
	else
		printf("%d%d%d", a, b, c);*///三个数从大到小排序；

	/*int i = 1;
	while (i < 100)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
		i++;
//	}*///1-100里三的倍数；
//
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	printf("请输入二个数:");
//	scanf("%d%d", &a, &b);
//	while (a%b != 0)
//	{
//		i = a % b;
//		a = b;//左边为需改变的量
//		b = i;
//	}
//	printf("%d\n", b);
//	return 0;//求二个数的最大公约数
//}

//int main()
//{
//	int year = 0;
//	int sum = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 400 == 0)//闰年判断方法：1.能被400整除；2.能被4整除 && 不能被100整除； 
//		{
//			printf("%d ", year);
//			sum = sum + 1;//或者sum++；
//		}
//		else if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			sum = sum + 1;//或者sum++；
//		}
//	}
//	printf("\n总共的闰年为：%d\n", sum);
//	return 0;
//}//写出1000到2000年的闰年且求总
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)//for(i=101;i<200;i+=2)把所有偶数排除
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//需2-i的所有数试除=foe(j=2;j<i;j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j>sqrt(i) )//if(i == j)
//		{
//			sum++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n总共的素数有：%d", sum);
//	return 0;
//}//试除法求素数

//int main()
//{
//	int a = 0;
//	int sum = 0;
//	for (a = 1; a <= 100; a++)
//	{
//		if (a % 10 == 9)
//		{
//			printf("%d ", a);
//				sum++;
//		}
//		if (a / 10 == 9)//99为2个9，均满足
//		{
//			printf("%d ", a);
//			sum++;
//		}
//	}
//	printf("\n含9的数字总个数为：%d", sum);
//	return 0;
//}//求1-100中包含数字9 的个数和；

//int main()
//{
//	int a = 0;
//	double sum = 0.0;//分数包含小数
//	for (a = 1; a <= 100; a++)
//	{
//		sum += 1.0 / a;//注意小数
//	}
//	printf("%lf", sum);//double的打印方式为%lf
//	return 0;
//}//1-100分数求和

//int main()
//{
//	int a = 0;
//	double sum = 0;
//	int flag = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		sum += flag * 1.0 / a;
//		flag = -flag;//通过flag实现变号；
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,16 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];//max取arr里第一个字符，以避免全是负数导致0为最大；
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("最大的数为：%d", max);
//	return 0;//10个字符求最大值；
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//		for (a = 1; a < 10; a++)
//		{
//		
//			for (b = 1; b <= a; b++)
//			{
//				c = a * b;
//				printf("%d*%d=%-2d ", a, b, c);//2d是打印二位（-2d）是左对齐，没有打印空格，保证对齐
//			}
//			printf("\n");//换行之关键；
//		}
//	return 0;
//}//乘法口诀表；

//int main()
//{
//	int a = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int k = 7;
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//	
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else 
//		 {
//			printf("找到了且下标等于%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("未找到");
//
//	
//	return 0;
//}//二分查找法
 
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");//60s后关机
//	again:
//	printf("你的电脑一分钟之后将关机，请输入：取消关机\n请输入：");
//	scanf("%s", arr,sizeof(arr));
//	if (strcmp(arr, "取消关机") == 0)
//	{
//		system("shutdown -a");//取消关机
//	}
//	else
//	{
//		printf("请重新输入\n");
//		goto again;//gotu语句用于随意跳转，跳出多个循环
//	}
//	return 0;//goto语句进行系统关机
//}

//int add(int x, int y)//定义函数
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}
//strcpy（arr1，arr2）；把arr2中的字符拷贝到arr1中；（连同\0一起拷贝），返回地址为char*（返回地址）

//int main()
//{
//	char arr[] = { "hello world" };
//	memset(arr, '*', 5);//吧arr里的前五个字符换成*号；
//	printf("%s", arr);
//	return 0;
//}//memset函数//保证不能溢出！

//int get_max(int x, int y)//int是返回类型；get_max是函数名称；int x，int y是输入类型
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}//定义函数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//调用get_max函数
//	printf("max=%d\n", max);
//	return 0;
//}//传值调用

//void pro(int* x,int* y)//void表示空（无返回值）；通过指针实现对a内存内实现转移改变
//{
//	int z = 0;
//	z = *x;//*x取x的地址
//	*x = *y;
//	*y = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	pro(&a,&b);//通过准确取地址实现对a，b内存处的准确转换
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;//传址调用用指针）
//}//当形参传给实参时，实际上形参只是对实参的一份临时拷贝（数值），对形参进行修改，实参不会改变（需用指针）

//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)//或i<x
//	{
//		if (x % i == 0)//存在一个数能把x整除，试除法；
//		{
//			return 0;
//
//		}
//	}
//	//放在循环外！！！
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		if (is_prime(a) == 1)//需求返回值
//			printf("%d ", a);
//	}
//	return 0;
//}//函数判断素数！