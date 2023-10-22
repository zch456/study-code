#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘的函数（将数组里面的元素修改）
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


