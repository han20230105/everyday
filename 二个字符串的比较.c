#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//二个字符串的比较用strcmp，相等返回0，大于返回大于0的数字，小于返回小于0的数字
		{
			printf("输入正确");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
	}
	if (i == 3)
		printf("连续输入错误，请返回");
	return 0;
}