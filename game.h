#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

void initboard(char mine[ROWS][COLS],int rows,int cols,char set);//��Сд��Ϊ�������ô�д���ǳ����������Ǳ���
void initboard(char show[ROW][COL], int rows, int cols, char set);

void display(char board[ROW][COL], int row, int col);

void setmine(char board[ROWS][COLS], int row, int col);

void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);