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
		printf("%d ", i+1);//打印行号
		for (j = 0; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;//设置雷的个数
	while (count)
	{
		int x = rand() % row+1;//取模保证在范围内
		int y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		else
			continue;
	}
}

int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	int count = 0;
	return board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y - 1] +
		board[x][y + 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
	    board[x + 1][y + 1] - 8 * '0';
}

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	printf("请输入排雷坐标\n");
	int x = 0;
	int y = 0;
	int count = 0;
	scanf("%d%d", x, y);
	while (1)
	{
		if (x >= 1 && x < col && y >= 1 && y < row)
		{
			if (mine[x][y] == '1')
			{
				printf("踩雷，游戏结束\n");
			}
			else
			{
				count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
				display(show, row, col);
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}