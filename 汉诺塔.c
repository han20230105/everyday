#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void hannoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("%c -> %c\n", a, c);//���ϱߵĴ�a�Ƶ�c
	}
	else
	{
		hannoi(n - 1, a, c, b);//�ѻ�ľ��aͨ��c�Ƶ�b
		printf("%c -> %c\n", a, c);//a�Ƶ�c
		hannoi(n - 1, b, a, c);//��bͨ��a�Ƶ�c
	}
}
int main()
{
	int n = 0;
	printf("��������ٸ���ľ\n");
	scanf("%d", &n);
	char a= 'A';//��������
	char b = 'B';
	char c = 'C';
	hannoi(n, a, b, c);
	return 0;
}