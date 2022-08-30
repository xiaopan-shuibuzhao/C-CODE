#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//内置棋盘函数定义
void init_board(char board[ROW][COL], int row, int col);

//整个游戏棋盘展示
void display_board(char board[ROW][COL], int row, int col);

//玩家下棋函数定义
void player_move(char board[ROW][COL], int row, int col);

//电脑玩家下棋函数定义
void computer_move(char board[ROW][COL], int row, int col);

//游戏结果判断函数的定义
char is_win(char board[ROW][COL], int row, int col);