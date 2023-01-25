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
//	scanf("%s ", arr,sizeof(arr));
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

//int pd(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//
//	}
//}
//int main()
//{
//	int year = 0;
//	int sum = 1;
//	for(year =1000;year<=2000;year++)
//	{
//		if (pd(year) == 1)
//		{
//			printf("%d ", year);
//			sum++;
//		}
//	}
//	printf("sum=%d ", sum);
//	return 0;
//}函数求闰年

//int binary_search(int x, int k,int arr[])//直接将元素个数x外部求，带入函数，不能内部求！！！
//{
//	int right = x - 1;
//	int left = 0;
//	while(left <= right)//必须含有等于!
//	{	
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//外部求函数个数，传参数组只能传首元素地址
//	int ret = binary_search(sz, k,arr);//需要将arr带入，方便中间值
//	if (ret == -1)
//	{
//		printf("对不起，没找到该数字\n");
//	}
//	else
//	{
//		printf("找到了，该数字的下标为%d\n",ret);
//	}
//	return 0;
//}函数二分查找

//void add(int* p)//无需返回值，采用空地址void；
//{
//	(*p)++;//*p++是对p进行++，需要加（）表示对整体
//}
//int main()
//{
//	int num = 0;//若需对外部函数改变采用指针！
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d",printf("%d",43)));//链式访问，printf返回值为元素个数
//	return 0;
//}

//(.h）文件放函数声明；（.c）文件放函数定义；调用#include".h"；

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//简单递归（自己调用自己）

//void print(int x)//无需返回值
//{
//	if (x > 9)//找双位数
//	{
//		print(x/10);//反复相除是得x成为单数
//	}
//	printf("%d ", x % 10);//取模打印最后位数
//}
//int main()
//{
//	unsigned int num = 0;//numsigned 表示为无符号
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')//字符串结束的标志为\0；
//	{
//		return 1 + my_strlen(arr + 1);//如果不是，递归进行下一位的判断，但是需要加1
//	}
//	else
//		return 0;//如果上来就是\0直接返回
//}
//int main()
//{
//	char arr[] = "abc";
//	int ren = my_strlen(arr);//c传入的是arr的字符中的首位元素
//	printf("%d", ren);
//	return 0;
//}

//int fac(int x)
//{
//	if (x <= 1)// == 表示判断
//		return 1;
//	else
//		return x * fac(x - 1);//阶乘公式  n*fac（n-1）
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fac(a);
//	printf("%d", ret);
//	return 0;
//}//递归求阶乘


//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);
//}//递归求
//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//c=1以防止x=1||2是c=0；
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;//通过x——实现控制次数（x=5是循环只进行3次）
//	}
//	return c;
//}//迭代求
//int main()
//{
//	int n = 0l;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}//求斐波那契数（斐波那契数：第三个数等于前二个数字的和）

//strlen求字符串长度，只能求字符串，遇见\0停止，\0不算（遇见\0才停止！！！没有\0算随机值）;返回无符号整型
//sizeof计算所占空间的大小（变量，数组，类型），单位字节

//int main()
//{
//	char arr[] = { "abcdef" };
//	printf("%c", arr[3]);//[]小标引用操作符；
//	return 0;
//}

//int main()
//{
//	char arr[] = { "abcdef" };
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}//一维数组在内存中存放是连续的，由低地址向高地址

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//为初始化为0；
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//只能省略行不能省略列
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);//二位数列行与列的下标均是从0开始；
//		}
//		printf("\n");
//	}
//
//	return 0;
//}//二维数组内存存储也是连续的

//void maopao(int arr[], int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz-1; a++)//10个元素需要进行9此冒泡排序，
//	{
//		int b = 0;
//		int flag = 1;//假设已给数组有序化
//		for (b = 0; b < sz - 1 - a; b++)//每次冒泡排序需要对比次数减一
//		{
//			if (arr[b] > arr[b + 1])
//			{
//				int tmp = arr[b];
//				arr[b] = arr[b + 1];
//				arr[b + 1] = tmp;//通过中间值进行交换
//				flag = 0;//交换便无序，改变flag
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (flag == 1)//注意放的位置！
//		{
//			break;//flag未改变，已经有序化
//		}
//	}
//}
//int main() 
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组为传址参数，求数组个数应放函数外
//	int i = 0;
//	maopao(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//对数组重新打印
//	}
//	return 0;
//}//冒泡排序！

//数组名便是首元素地址，存在2个例外  1.sizeof（数组名）--数组名表示整个数组，是计算整个数组的大小
                                   //2.&数组名 --整个数组的地址，是数组的开始地址

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;// ^ 表示按位（二级制）异或，同为0，异为1；不会存在溢出问题
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n ", a, b);
//	return 0;
//}//不采用第三个变量交换变量（采用按位异或）

//int main()
//{
//	int arr[] = {0,0,1,1,2,2,3,3,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单独的数字为：%d\n ", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}//找出数组中单独的数字

//int main()
//{
//	int arr[] = { 1,2,3,4,5,4,3,2,1 };
//	int ret = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];//按位异或满足交换律，形同数字为0；
//	}
//	printf("单身狗：%d ", ret);
//	return 0;
//}采用按位异或找出单身狗；

//5%2取模为1；5/2取商为2；
//int main()
//{
//	double a = 5 / 2.0;取模只能都是整数，其余算数可以采用double浮点型，%lf打印
//	printf("%lf", a);
//	return 0;
//}

//<<左移操作符，左边丢弃，右边补零
//>>右移操作符；1.算术右移，右边丢弃，左边补原符号位（1为负，0为正）
               //2.逻辑右移，右边丢弃，左边补0；

//&按位与，一个为零则为零，均不为零则为1
//|按位与，有1则为1（>=1均为1）
//^ 按位异或，相同为0，相异为1；
//均按二进制位异或

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)//一个整数二进制占32个字节
	{
		if (1 == ((a >> i) & 1))//通过右移，来对比每一项，并通过与1按位与，均为1则为1，计数；
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}