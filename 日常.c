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
	printf("��������������");
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
		printf("%d%d%d", a, b, c);*///�������Ӵ�С����

	/*int i = 1;
	while (i < 100)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
		i++;
//	}*///1-100�����ı�����
//
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	printf("�����������:");
//	scanf("%d%d", &a, &b);
//	while (a%b != 0)
//	{
//		i = a % b;
//		a = b;//���Ϊ��ı����
//		b = i;
//	}
//	printf("%d\n", b);
//	return 0;//������������Լ��
//}

//int main()
//{
//	int year = 0;
//	int sum = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 400 == 0)//�����жϷ�����1.�ܱ�400������2.�ܱ�4���� && ���ܱ�100������ 
//		{
//			printf("%d ", year);
//			sum = sum + 1;//����sum++��
//		}
//		else if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			sum = sum + 1;//����sum++��
//		}
//	}
//	printf("\n�ܹ�������Ϊ��%d\n", sum);
//	return 0;
//}//д��1000��2000�������������

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 100; i <= 200; i++)//for(i=101;i<200;i+=2)������ż���ų�
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//��2-i���������Գ�=foe(j=2;j<i;j++)
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
//	printf("\n�ܹ��������У�%d", sum);
//	return 0;
//}//�Գ���������

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
//		if (a / 10 == 9)//99Ϊ2��9��������
//		{
//			printf("%d ", a);
//			sum++;
//		}
//	}
//	printf("\n��9�������ܸ���Ϊ��%d", sum);
//	return 0;
//}//��1-100�а�������9 �ĸ����ͣ�

//int main()
//{
//	int a = 0;
//	double sum = 0.0;//��������С��
//	for (a = 1; a <= 100; a++)
//	{
//		sum += 1.0 / a;//ע��С��
//	}
//	printf("%lf", sum);//double�Ĵ�ӡ��ʽΪ%lf
//	return 0;
//}//1-100�������

//int main()
//{
//	int a = 0;
//	double sum = 0;
//	int flag = 1;
//	for (a = 1; a <= 100; a++)
//	{
//		sum += flag * 1.0 / a;
//		flag = -flag;//ͨ��flagʵ�ֱ�ţ�
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,16 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = arr[0];//maxȡarr���һ���ַ����Ա���ȫ�Ǹ�������0Ϊ���
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("������Ϊ��%d", max);
//	return 0;//10���ַ������ֵ��
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
//				printf("%d*%d=%-2d ", a, b, c);//2d�Ǵ�ӡ��λ��-2d��������룬û�д�ӡ�ո񣬱�֤����
//			}
//			printf("\n");//����֮�ؼ���
//		}
//	return 0;
//}//�˷��ھ���

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
//			printf("�ҵ������±����%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("δ�ҵ�");
//
//	
//	return 0;
//}//���ֲ��ҷ�
 
//int main()
//{
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");//60s��ػ�
//	again:
//	printf("��ĵ���һ����֮�󽫹ػ��������룺ȡ���ػ�\n�����룺");
//	scanf("%s ", arr,sizeof(arr));
//	if (strcmp(arr, "ȡ���ػ�") == 0)
//	{
//		system("shutdown -a");//ȡ���ػ�
//	}
//	else
//	{
//		printf("����������\n");
//		goto again;//gotu�������������ת���������ѭ��
//	}
//	return 0;//goto������ϵͳ�ػ�
//}

//int add(int x, int y)//���庯��
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
//strcpy��arr1��arr2������arr2�е��ַ�������arr1�У�����ͬ\0һ�𿽱��������ص�ַΪchar*�����ص�ַ��

//int main()
//{
//	char arr[] = { "hello world" };
//	memset(arr, '*', 5);//��arr���ǰ����ַ�����*�ţ�
//	printf("%s", arr);
//	return 0;
//}//memset����//��֤���������

//int get_max(int x, int y)//int�Ƿ������ͣ�get_max�Ǻ������ƣ�int x��int y����������
//{
//	if (x < y)
//		return y;
//	else
//		return x;
//}//���庯��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//����get_max����
//	printf("max=%d\n", max);
//	return 0;
//}//��ֵ����

//void pro(int* x,int* y)//void��ʾ�գ��޷���ֵ����ͨ��ָ��ʵ�ֶ�a�ڴ���ʵ��ת�Ƹı�
//{
//	int z = 0;
//	z = *x;//*xȡx�ĵ�ַ
//	*x = *y;
//	*y = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	pro(&a,&b);//ͨ��׼ȷȡ��ַʵ�ֶ�a��b�ڴ洦��׼ȷת��
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;//��ַ������ָ�룩
//}//���βδ���ʵ��ʱ��ʵ�����β�ֻ�Ƕ�ʵ�ε�һ����ʱ��������ֵ�������βν����޸ģ�ʵ�β���ı䣨����ָ�룩

//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)//��i<x
//	{
//		if (x % i == 0)//����һ�����ܰ�x�������Գ�����
//		{
//			return 0;
//
//		}
//	}
//	//����ѭ���⣡����
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	for (a = 101; a <= 200; a+=2)
//	{
//		if (is_prime(a) == 1)//���󷵻�ֵ
//			printf("%d ", a);
//	}
//	return 0;
//}//�����ж�������

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
//}����������

//int binary_search(int x, int k,int arr[])//ֱ�ӽ�Ԫ�ظ���x�ⲿ�󣬴��뺯���������ڲ��󣡣���
//{
//	int right = x - 1;
//	int left = 0;
//	while(left <= right)//���뺬�е���!
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//�ⲿ������������������ֻ�ܴ���Ԫ�ص�ַ
//	int ret = binary_search(sz, k,arr);//��Ҫ��arr���룬�����м�ֵ
//	if (ret == -1)
//	{
//		printf("�Բ���û�ҵ�������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ������ֵ��±�Ϊ%d\n",ret);
//	}
//	return 0;
//}�������ֲ���

//void add(int* p)//���践��ֵ�����ÿյ�ַvoid��
//{
//	(*p)++;//*p++�Ƕ�p����++����Ҫ�ӣ�����ʾ������
//}
//int main()
//{
//	int num = 0;//������ⲿ�����ı����ָ�룡
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
//	printf("%d",printf("%d",printf("%d",43)));//��ʽ���ʣ�printf����ֵΪԪ�ظ���
//	return 0;
//}

//(.h���ļ��ź�����������.c���ļ��ź������壻����#include".h"��

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}//�򵥵ݹ飨�Լ������Լ���

//void print(int x)//���践��ֵ
//{
//	if (x > 9)//��˫λ��
//	{
//		print(x/10);//��������ǵ�x��Ϊ����
//	}
//	printf("%d ", x % 10);//ȡģ��ӡ���λ��
//}
//int main()
//{
//	unsigned int num = 0;//numsigned ��ʾΪ�޷���
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')//�ַ��������ı�־Ϊ\0��
//	{
//		return 1 + my_strlen(arr + 1);//������ǣ��ݹ������һλ���жϣ�������Ҫ��1
//	}
//	else
//		return 0;//�����������\0ֱ�ӷ���
//}
//int main()
//{
//	char arr[] = "abc";
//	int ren = my_strlen(arr);//c�������arr���ַ��е���λԪ��
//	printf("%d", ren);
//	return 0;
//}

//int fac(int x)
//{
//	if (x <= 1)// == ��ʾ�ж�
//		return 1;
//	else
//		return x * fac(x - 1);//�׳˹�ʽ  n*fac��n-1��
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = fac(a);
//	printf("%d", ret);
//	return 0;
//}//�ݹ���׳�


//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//		return Fib(x - 1) + Fib(x - 2);
//}//�ݹ���
//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//c=1�Է�ֹx=1||2��c=0��
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;//ͨ��x����ʵ�ֿ��ƴ�����x=5��ѭ��ֻ����3�Σ�
//	}
//	return c;
//}//������
//int main()
//{
//	int n = 0l;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}//��쳲���������쳲���������������������ǰ�������ֵĺͣ�

//strlen���ַ������ȣ�ֻ�����ַ���������\0ֹͣ��\0���㣨����\0��ֹͣ������û��\0�����ֵ��;�����޷�������
//sizeof������ռ�ռ�Ĵ�С�����������飬���ͣ�����λ�ֽ�

//int main()
//{
//	char arr[] = { "abcdef" };
//	printf("%c", arr[3]);//[]С�����ò�������
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
//}//һά�������ڴ��д���������ģ��ɵ͵�ַ��ߵ�ַ

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//Ϊ��ʼ��Ϊ0��
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };//ֻ��ʡ���в���ʡ����
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);//��λ���������е��±���Ǵ�0��ʼ��
//		}
//		printf("\n");
//	}
//
//	return 0;
//}//��ά�����ڴ�洢Ҳ��������

//void maopao(int arr[], int sz)
//{
//	int a = 0;
//	for (a = 0; a < sz-1; a++)//10��Ԫ����Ҫ����9��ð������
//	{
//		int b = 0;
//		int flag = 1;//�����Ѹ���������
//		for (b = 0; b < sz - 1 - a; b++)//ÿ��ð��������Ҫ�Աȴ�����һ
//		{
//			if (arr[b] > arr[b + 1])
//			{
//				int tmp = arr[b];
//				arr[b] = arr[b + 1];
//				arr[b + 1] = tmp;//ͨ���м�ֵ���н���
//				flag = 0;//���������򣬸ı�flag
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (flag == 1)//ע��ŵ�λ�ã�
//		{
//			break;//flagδ�ı䣬�Ѿ�����
//		}
//	}
//}
//int main() 
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ϊ��ַ���������������Ӧ�ź�����
//	int i = 0;
//	maopao(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//���������´�ӡ
//	}
//	return 0;
//}//ð������

//������������Ԫ�ص�ַ������2������  1.sizeof����������--��������ʾ�������飬�Ǽ�����������Ĵ�С
                                   //2.&������ --��������ĵ�ַ��������Ŀ�ʼ��ַ

//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;// ^ ��ʾ��λ�������ƣ����ͬΪ0����Ϊ1����������������
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n ", a, b);
//	return 0;
//}//�����õ����������������������ð�λ���

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
//			printf("����������Ϊ��%d\n ", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}//�ҳ������е���������

//int main()
//{
//	int arr[] = { 1,2,3,4,5,4,3,2,1 };
//	int ret = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];//��λ������㽻���ɣ���ͬ����Ϊ0��
//	}
//	printf("������%d ", ret);
//	return 0;
//}���ð�λ����ҳ�������

//5%2ȡģΪ1��5/2ȡ��Ϊ2��
//int main()
//{
//	double a = 5 / 2.0;ȡģֻ�ܶ��������������������Բ���double�����ͣ�%lf��ӡ
//	printf("%lf", a);
//	return 0;
//}

//<<���Ʋ���������߶������ұ߲���
//>>���Ʋ�������1.�������ƣ��ұ߶�������߲�ԭ����λ��1Ϊ����0Ϊ����
               //2.�߼����ƣ��ұ߶�������߲�0��

//&��λ�룬һ��Ϊ����Ϊ�㣬����Ϊ����Ϊ1
//|��λ�룬��1��Ϊ1��>=1��Ϊ1��
//^ ��λ�����ͬΪ0������Ϊ1��
//����������λ���

int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)//һ������������ռ32���ֽ�
	{
		if (1 == ((a >> i) & 1))//ͨ�����ƣ����Ա�ÿһ���ͨ����1��λ�룬��Ϊ1��Ϊ1��������
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}