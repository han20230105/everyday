#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void initboard(char mine[ROWS][COLS],int rows,int cols,char set);//��Сд��Ϊ�������ô�д���ǳ����������Ǳ���
void initboard(char show[ROW][COL], int rows, int cols, char set);

void display(char board[ROW][COL], int row, int col);