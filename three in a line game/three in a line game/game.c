#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{//void�������治�ܼ�;����ᱨ��
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
	{//��ӡ����
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
	//��ӡ�ָ���Ϣ
		printf("---|---|---\n");
	}
}


