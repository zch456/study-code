#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ�����̵ĺ����������������Ԫ���޸ģ�
	InitBoard(board,3,3);
	DisplayBoard(board, ROW, COL);


}

void menu()
{
	printf("**********************\n");
	printf("*********1.play*******\n");
	printf("*********0.exit*******\n");
	printf("**********************\n");
}

int main()
{
	int input = 0;
	do
	{
		menu;
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);//���������input��������0
	return 0;
}


