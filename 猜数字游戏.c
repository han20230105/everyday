#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void game()
{
	printf("��Ϸ��ʼ\n");
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//ȡģ���������1-100֮�䣨ģ��1-99֮�䣩;
	while (1)
	{
		printf("����������:\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�¶���\n");
			break;
		}
	}

}
void menu()//����˵�
{
	printf("****************************\n");
	printf("**1.��ʼ��Ϸ 0.�˳���Ϸ*****\n");
	printf("****************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));//ͨ��ʱ��������������NULL�ǿ�ָ�룬 unsigned��Ӧ�����޷������ı�ʾ��
	int input = 0;
	do
	{
		menu();//���ɲ˵�
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
	} while (input);//ͨ��0Ϊ��ǣ�0Ϊ��ʵ��ѭ��
	return 0;
}