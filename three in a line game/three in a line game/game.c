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

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{//打印数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//	//打印分割信息
//		printf("---|---|---\n");
//	}
//}
//这样打印出来有三横行两竖行,并且修改不方便

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < col; i++)
	{//打印数据信息
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
	    printf("\n");
		if (i < row - 1)
		{//打印分割行
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		    printf("\n");//要保证正确的缩进，否则打印出来就会错位
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("玩家下棋\n");
	while (1)//判断坐标是否合法
	{
		printf("请输入坐标：\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;//不加break就无法打印棋盘
			}
			else
			{
				printf("坐标被占用，请重新输入：\n");
			}
		}
		else
		{
			printf("坐标错误，请重新输入：\n");
		}
	}
}

void ComputerMove(board, ROW, COL);
{



}







