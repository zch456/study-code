#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>//��Ϊgame.c��test.c���������ͷ�ļ�
//֮����stdio.h����������ļ�����
void InitBoard(char board[ROW][COL], int row, int col);
//��ʼ������

void DisplayBoard(char board[ROW][COL], int row, int col);
//��ӡ����

void PlayerMove(char board[ROW][COL], int row, int col);
//�������

