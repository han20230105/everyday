#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	initboard(board, ROW, COL);//��ʼ�����飬ȫΪ��0��
	display(board, ROW, COL);//��ӡ����
	while (1)
	{
		playermove(board, ROW, COL);//�������
		display(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'w')
		{
			break;
		}
		computermove(board, ROW, COL);//��������
		display(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'w')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ");
	}
	else if (ret == '#')
	{
		printf("����Ӯ");
	}
	else
	{
		printf("ƽ��");
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
		printf("���������ѡ��\n");
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