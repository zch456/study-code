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
	//初始化棋盘的函数（将数组里面的元素修改）
	InitBoard(board, ROW, COL);//为什么是大写ROW和COL
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
		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);//这里必须是input，不能是0
	return 0;
}


