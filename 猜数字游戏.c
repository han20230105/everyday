#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void game()
{
	printf("游戏开始\n");
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//取模是随机数在1-100之间（模在1-99之间）;
	while (1)
	{
		printf("请输入数字:\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜猜对了\n");
			break;
		}
	}

}
void menu()//定义菜单
{
	printf("****************************\n");
	printf("**1.开始游戏 0.退出游戏*****\n");
	printf("****************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));//通过时间戳生成随机数，NULL是空指针， unsigned常应用于无符号数的表示；
	int input = 0;
	do
	{
		menu();//生成菜单
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);//通过0为真非，0为假实现循环
	return 0;
}