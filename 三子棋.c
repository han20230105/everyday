#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

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
			printf("��������Ϸ��ʼ");
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
	test();
	return 0;
}