#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
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