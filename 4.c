#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*int a = 1;
	while (a < 100)
	{
		if (a % 2 == 1)//双=表示判断
			printf("%d ", a);
		a++;
	}*/
	/*int red = 0;
	int ch = 0;
	char mima[20] = {0};//[20]表示20个字符
	printf("请输入密码:");
	scanf("%s", mima);
	while ((ch = getchar()) != '\n')//死循环防止\n；
	{
		;
	}
		printf("请输入<Y/N>");
	red = getchar();

	if (red = 'Y')
	{
		printf("确认");
	}
	else
	{
		printf("放弃");
	}*/
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch > '9')//0-9可以输出，字母没反应
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