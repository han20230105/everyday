#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
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