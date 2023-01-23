#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*******************************************\n");
	printf("****************  1.play   ****************\n");
	printf("****************  0.exit   ****************\n");
	printf("*******************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//实际棋盘
	char show[ROW][COL] = { 0 };//展示棋盘
	initboard(mine, ROWS, COLS,'0');//初始化棋盘
	initboard(show, ROWS, COLS,'*');
	display(show, ROW, COL);//打印棋盘
}

void test()
{
	menu();
	int input = 0;
	do
	{
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
	} while (input);
}

int main()
{
	test();
	return 0;
}