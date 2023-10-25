#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW 3
#define COL 3//方便修改棋盘的行列
#include<time.h>
#include<stdlib.h>

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//每走一步就要判断一次输赢
//有四种情况：
//玩家赢，电脑赢，平局（棋盘，满了），继续（没有人赢且棋盘没满）
char Iswin(char board[ROW][COL], int row, int col);
//玩家赢：*
//电脑赢：#
//平局：q
//继续：c

