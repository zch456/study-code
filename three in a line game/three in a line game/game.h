#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW 3
#define COL 3//�����޸����̵�����
#include<time.h>
#include<stdlib.h>

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//ÿ��һ����Ҫ�ж�һ����Ӯ
//�����������
//���Ӯ������Ӯ��ƽ�֣����̣����ˣ���������û����Ӯ������û����
char Iswin(char board[ROW][COL], int row, int col);
//���Ӯ��*
//����Ӯ��#
//ƽ�֣�q
//������c

