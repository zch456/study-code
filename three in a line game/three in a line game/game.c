#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{//void函数后面不能加;否则会报错
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{//打印数据
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	//打印分割信息
		printf("---|---|---\n");
	}
}


