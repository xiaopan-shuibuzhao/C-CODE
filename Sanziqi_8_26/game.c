#include "game.h";
//���̳�ʼ��������ʵ��
void init_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//�������ϵ�Ԫ����Ϊ�ո�
			board[i][j] = ' ';
		}
	}
}

//���̴�ӡ������ʵ��
void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");  
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{                          
				printf("---"); 
				if (j < col - 1)    
					printf("|");
			}
			printf("\n");
		}
	}
}

//������庯����ʵ��
void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;

	printf("�������:>\n");

	while (1)
	{
		printf("������Ҫ��������꣺>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����ѱ�ռ�ã����������룡");
			}
		}
		else
		{
			printf("��������������������룡");
		}
	}
}

//����������庯����ʵ��
//������Ҳ���������巽ʽ
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("����������壺>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


// �������˷���1������δ������0
static int is_full(char board[ROW][COL], int row, int col)
{
	int count = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] != ' ')
			{
				count++;
			}
		}
	}
	if (count == row * col)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


//�ж���Ϸ��Ӯ������ʵ��
char is_win(char board[ROW][COL], int row, int col)
{
	//*******************************************************************************************
	//�ж��������������Ӯ���
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	for (int j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[0][2];
	}

//***************************************************************************************************

//*****************************************************
//�ж�ƽ�ֵ����
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}
//****************************************************

	//����δ��������Ϸ
	return 'C';
}





















