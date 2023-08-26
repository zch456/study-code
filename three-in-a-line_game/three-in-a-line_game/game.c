#define _CRT_SECURE_NO_WARNINGS

void InitBoard(char board[3][3], int row, int col);
{//≥ı ºªØ
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}



