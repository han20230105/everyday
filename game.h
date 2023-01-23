#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

void initboard(char mine[ROWS][COLS],int rows,int cols,char set);//用小写作为变量，用大写便是常量，不再是变量
void initboard(char show[ROW][COL], int rows, int cols, char set);

void display(char board[ROW][COL], int row, int col);