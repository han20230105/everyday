#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
typedef struct stu//����ṹ��
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
	printf("�������꼶:\n");
	scanf("%d", &a);
	printf("������༶��\n");
	scanf("%19s", arr1);
	printf("����������\n");
	scanf("%d", &c);
	printf("�������Ա�\n");//�������ռ���Ϣ
	scanf("%s", arr2);

	stu s1;//�ı�ṹ������
	s1.grade = a;
	strcpy(s1.cl, arr1);
	s1.alge = c;
	strcpy(s1.sex, arr2);

	printf("\n�����꼶�ǣ�%d\n", s1.grade);
	printf("���İ༶�ǣ�%s\n", s1.cl);
	printf("���������ǣ�%d\n", s1.alge);
	printf("�����Ա��ǣ�%s\n", s1.sex);//������
	return 0;
}