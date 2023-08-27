#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("********* 1.play *********\n");
	printf("**********0.exit *********\n");
	printf("**************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };//创建一个棋盘
	InitBoard(board, ROW, COL); //初始化棋盘的函数
	DisplayBoard(board,ROW,COL);//不初始化棋盘会错位
	//下棋
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
	}
}

int main()
{
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重试！\n");
			break;
		}
	} while (input);
		return 0;
}























