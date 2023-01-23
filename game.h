#define _CRT_SECURE_NO_WARNINGS
#define ROW 3//定义行数
#define COL 3//定义列数
//声明
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void initboard(char board[ROW][COL], int row, int col);
void display(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);
char iswin(char board[ROW][COL], int row, int col);
//*玩家赢
//#电脑赢
//q平局
//w继续