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

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{//��ӡ����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//	//��ӡ�ָ���Ϣ
//		printf("---|---|---\n");
//	}
//}
//������ӡ������������������,�����޸Ĳ�����

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < col; i++)
	{//��ӡ������Ϣ
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
	    printf("\n");
		if (i < row - 1)
		{//��ӡ�ָ���
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		    printf("\n");//Ҫ��֤��ȷ�������������ӡ�����ͻ��λ
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("�������\n");
	while (1)//�ж������Ƿ�Ϸ�
	{
		printf("���������꣺\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;//����break���޷��˳�ѭ��
			}
			else
			{
				printf("���걻ռ�ã����������룺\n");
			}
		}
		else
		{
			printf("����������������룺\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("�������壺\n");
	int x, y;
	while (1)
	{
		x = rand() % row;//ʹ�������Ϊ0~2
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//��
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)//��
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
			return board[0][i];
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[2][2] != ' ')
	{//�Խ���
		return board[0][0];
	}
	//ƽ��
	if (IsFull(board, row, col))
	{
		return 'q';
	}
	return 'c';//�����ַ�Ҫ�� ''
}





