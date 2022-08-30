#include "game.h";
//棋盘初始化函数的实现
void init_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//把棋盘上的元素置为空格
			board[i][j] = ' ';
		}
	}
}

//棋盘打印函数的实现
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

//玩家下棋函数的实现
void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;

	printf("玩家下棋:>\n");

	while (1)
	{
		printf("请输入要下棋的坐标：>");
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
				printf("坐标已被占用，请重新输入！");
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入！");
		}
	}
}

//电脑玩家下棋函数的实现
//电脑玩家采用随机下棋方式
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑玩家下棋：>\n");
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


// 棋盘满了返回1，棋盘未满返回0
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


//判断游戏输赢函数的实现
char is_win(char board[ROW][COL], int row, int col)
{
	//*******************************************************************************************
	//判断玩家与电脑玩家输赢情况
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
//判断平局的情况
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}
//****************************************************

	//棋盘未满继续游戏
	return 'C';
}





















