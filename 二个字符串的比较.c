#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("����������");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�����ַ����ıȽ���strcmp����ȷ���0�����ڷ��ش���0�����֣�С�ڷ���С��0������
		{
			printf("������ȷ");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
		printf("������������뷵��");
	return 0;
}