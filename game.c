#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//初始化数组数据均为空格
		}
	}
}

void display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//打印分割列
		for (j = 0; j < COL-1; j++)
		{
			printf(" %c |", board[i][j]);
			
		}
		if (j == COL - 1)
		{
			printf("%c\n", board[i][j]);
		}
		//打印分割行
		if (i < row - 1)//判断打印分割行行数
		{
			for (j = 0; j < col - 1; j++)
			{
				printf("---|");
			}
			if (j == COL - 1)
			{
				printf("---\n");
			}
		}
	}
}

void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("开始游戏，玩家请下棋\n请输入坐标：\n");
	while (1)
	{
		scanf("%d%d", &x, &y);//输入时需要中间空格确定
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("输入坐标不合理\n");
				break;
			}
		}
		else
		{
			printf("请重新输入\n");
		}
	}
}

void computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;//通过取模使得x，y只能为0，1，2
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0;i<row;i++)//三横
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
		{
			return board[0][i];
		}
	}
	for (i = 0; i < col; i++)//三列
	{

		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[1][1];//交叉
	if (1 == isfull(board,ROW,COL))
	{
		return  'q';
	}//平局
	return 'w';
}