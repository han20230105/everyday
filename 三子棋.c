#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);//初始化数组，全为‘0’
	display(board, ROW, COL);//打印棋盘
	while (1)
	{
		playermove(board, ROW, COL);//玩家下棋
		display(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'w')
		{
			break;
		}
		computermove(board, ROW, COL);//电脑下棋
		display(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'w')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢");
	}
	else if (ret == '#')
	{
		printf("电脑赢");
	}
	else
	{
		printf("平局");
	}
}
void menu()
{
	printf("**********************\n");
	printf("****1.play 0.exit*****\n");
	printf("**********************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (input);

}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}