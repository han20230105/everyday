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
	char mine[ROWS][COLS] = { 0 };//ʵ������
	char show[ROW][COL] = { 0 };//չʾ����
	initboard(mine, ROWS, COLS,'0');//��ʼ������,�����ַ����Ա���ж�����̳�ʼ��
	initboard(show, ROWS, COLS,'*');
	display(show, ROW, COL);//��ӡ����
	setmine(mine, ROW, COL);//������
	display(mine, ROW, COL);//��ӡ����
	findmine(mine, show, ROW, COL);//����
}

void test()
{
	menu();
	int input = 0;
	do
	{
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
					printf("�˳���Ϸ\n");
					break;
			default:
				printf("ѡ�����������ѡ��\n");
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