#include "game.h";

//游戏菜单
void menu()
{
	printf("**************************************\n");
	printf("********       1.play        *********\n");
	printf("********       0.exst        *********\n");
	printf("**************************************\n");
}

void game()
{
	char ret = '0';

	//三子棋棋盘需要3*3的二维数组储存
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	init_board(board, ROW, COL);
	display_board(board, ROW, COL);
	//游戏设置
	while (1)
	{
		player_move(board, ROW, COL);//玩家下棋
		display_board(board, ROW, COL);

		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;


		computer_move(board, ROW, COL);//电脑下棋
		display_board(board, ROW, COL);


		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢！\n");
	}
	else if (ret == '#')
	{
		printf("电脑玩家赢！\n");
	}
	else if (ret == 'Q')
	{
		printf("平局！\n");
	}
	display_board(board, ROW, COL);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}
