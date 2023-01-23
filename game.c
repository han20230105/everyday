#define _CRT_SECURE_NO_WARNINGS
#include  "game.h"

void initboard(char mine[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows;i++)
	{
		for (j = 0; j < cols; j++)
		{
			mine[i][j] = set;
		}
	}
}

void display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);//打印列号
	}
	printf("\n");
	for (i = 0; i < row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 0; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}