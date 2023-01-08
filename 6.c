#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//int i = 1;
	//	do
	//	{
	//		/*if (i == 5)
	//			break;*/
	//		if (i == 5)
	//			continue;
	//		printf("%d ", i);
	//		i++;
	//	}
	//while (i <= 10);//do...while循环；

	/*int i = 0;
	int n = 0;
	int z = 1;
	scanf("%d", &n);
	for (i = 1; i < n + 1; i++)
	{
		z = i * z;
	}
			printf("%d", z);*///n的阶乘；

	//int i = 0;
	//int n = 0;
	//int z = 1;
	//int a = 0;
	//int b = 0;
	//for (n = 1; n < 4; n++)
	//{
	//	z = 1;//每次循环重新赋值，以避免上次结果对z*i产生影响
	//	for (i = 1; i <= n; i++)
	//	{
	//		z = z * i;
	//	}
	//	b = b + z;
	//}
	//printf("b=%d", b);//1-3的阶乘和
	// 
	//int i = 0;
	//int n = 0;
	//int z = 1;
	//int a = 0;
	//int b = 0;
	//for (n = 1; n < 11; n++)
	//{
	//
	//		z = z * n;
	//	   b = b + z;
	//}
	//printf("b=%d", b);//1-10的阶乘和优化

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] == k)
		{
			printf("找到了，且下标等于%d\n", i);
			break;//if循环切记加break；
		}
	}
	if (i == sz)
	{
		printf("未找到\n");
	}
	else//数列找查找
	return 0;
}