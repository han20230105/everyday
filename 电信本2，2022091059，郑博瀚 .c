#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
typedef struct stu//定义结构体
{
	int grade;
	char cl[20];
	int alge;
	char sex[10];
}stu;

int main()
{
	int a = 0;
	char arr1[20] = { 0 };
	int c = 0;
	char arr2[10] = { 0 };
	printf("请输入年级:\n");
	scanf("%d", &a);
	printf("请输入班级：\n");
	scanf("%19s", arr1);
	printf("请输入年龄\n");
	scanf("%d", &c);
	printf("请输入性别\n");//输入与收集信息
	scanf("%s", arr2);

	stu s1;//改变结构体内容
	s1.grade = a;
	strcpy(s1.cl, arr1);
	s1.alge = c;
	strcpy(s1.sex, arr2);

	printf("\n您的年级是：%d\n", s1.grade);
	printf("您的班级是：%s\n", s1.cl);
	printf("您的年龄是：%d\n", s1.alge);
	printf("您的性别是：%s\n", s1.sex);//输出检查
	return 0;
}