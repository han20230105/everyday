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
			board[i][j] = ' ';//��ʼ���������ݾ�Ϊ�ո�
		}
	}
}

void display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ�ָ���
		for (j = 0; j < COL-1; j++)
		{
			printf(" %c |", board[i][j]);
			
		}
		if (j == COL - 1)
		{
			printf("%c\n", board[i][j]);
		}
		//��ӡ�ָ���
		if (i < row - 1)//�жϴ�ӡ�ָ�������
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
	printf("��ʼ��Ϸ�����������\n���������꣺\n");
	while (1)
	{
		scanf("%d%d", &x, &y);//����ʱ��Ҫ�м�ո�ȷ��
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�������겻����\n");
				break;
			}
		}
		else
		{
			printf("����������\n");
		}
	}
}

void computermove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;//ͨ��ȡģʹ��x��yֻ��Ϊ0��1��2
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
	for(i=0;i<row;i++)//����
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
		{
			return board[0][i];
		}
	}
	for (i = 0; i < col; i++)//����
	{

		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[1][1];//����
	if (1 == isfull(board,ROW,COL))
	{
		return  'q';
	}//ƽ��
	return 'w';
}