#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�������̺�������
void init_board(char board[ROW][COL], int row, int col);

//������Ϸ����չʾ
void display_board(char board[ROW][COL], int row, int col);

//������庯������
void player_move(char board[ROW][COL], int row, int col);

//����������庯������
void computer_move(char board[ROW][COL], int row, int col);

//��Ϸ����жϺ����Ķ���
char is_win(char board[ROW][COL], int row, int col);