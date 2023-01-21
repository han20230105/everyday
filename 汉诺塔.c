#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void hannoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		printf("%c -> %c\n", a, c);//最上边的从a移到c
	}
	else
	{
		hannoi(n - 1, a, c, b);//把积木从a通过c移到b
		printf("%c -> %c\n", a, c);//a移到c
		hannoi(n - 1, b, a, c);//把b通过a移到c
	}
}
int main()
{
	int n = 0;
	printf("请输入多少个积木\n");
	scanf("%d", &n);
	char a= 'A';//三根柱子
	char b = 'B';
	char c = 'C';
	hannoi(n, a, b, c);
	return 0;
}