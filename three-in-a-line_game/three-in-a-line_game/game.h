#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>//因为game.c和test.c都包含这个头文件
//之间让stdio.h包含在这个文件就行
void InitBoard(char board[ROW][COL], int row, int col);
//初始化棋盘

void DisplayBoard(char board[ROW][COL], int row, int col);
//打印棋盘

void PlayerMove(char board[ROW][COL], int row, int col);
//玩家下棋

