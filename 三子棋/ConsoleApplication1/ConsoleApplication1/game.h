#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//  *  玩家赢
//  #  电脑赢
//  f  平局
//  c  继续
#define POW 3
#define COL 3
#define BOARD_NUM 9
void Init_Board(char board[POW][COL], int pow, int col);
void Dis_Board(char board[POW][COL], int pow, int col);
void Play_Move(char board[POW][COL], int pow, int col);
void Computer_Move(char board[POW][COL], int pow, int col);
void Computer_Move(char board[POW][COL], int pow, int col);
char Is_Win(char board[POW][COL], int pow, int col);



