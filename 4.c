#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*int a = 1;
	while (a < 100)
	{
		if (a % 2 == 1)//˫=��ʾ�ж�
			printf("%d ", a);
		a++;
	}*/
	/*int red = 0;
	int ch = 0;
	char mima[20] = {0};//[20]��ʾ20���ַ�
	printf("����������:");
	scanf("%s", mima);
	while ((ch = getchar()) != '\n')//��ѭ����ֹ\n��
	{
		;
	}
		printf("������<Y/N>");
	red = getchar();

	if (red = 'Y')
	{
		printf("ȷ��");
	}
	else
	{
		printf("����");
	}*/
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch > '9')//0-9�����������ĸû��Ӧ
	//		continue;
	//		putchar(ch);
	//}
	int a = 1;
	for (a = 1; a <= 10; a++)
	{
		if(a == 5)
		continue;
		printf("%d ", a);
	}
	return 0;
}