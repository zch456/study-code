#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("******** 1.play ******\n");
	printf("******** 0.exit ******\n");
	printf("**********************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ�����̵ĺ����������������Ԫ���޸ģ�
	InitBoard(board, ROW, COL);//Ϊʲô�Ǵ�дROW��COL
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}

int main()

{
	int input = 0;
	do
	{
		menu();//
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


