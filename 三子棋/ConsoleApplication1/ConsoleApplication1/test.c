#include"game.h"
void menu()
{
	printf("***********************************\n");
	printf("********       1.paly     *********\n");
	printf("********       0.exit     *********\n");
	printf("***********************************\n");
}



int main()
{
	int input = 0;
	char board[POW][COL] = { 0 };
	char ret = 0;
	
	menu();
	
	do
	{
		printf("请选择->\n");
		scanf("%d",&input);
        
		switch (input)
		{
		case 1: //玩游戏
			printf("欢迎进入三子棋游戏\n");

			Init_Board(board, POW, COL);

			Dis_Board(board, POW, COL);
			//下棋
			while (1)
			{
				Play_Move(board, POW, COL);//玩家走
				//判断输ying

				Dis_Board(board, POW, COL);

				ret = Is_Win(board, POW, COL);
				if (ret != 'c')
					break;

				Computer_Move(board, POW, COL);//电脑走

				//判断输赢
				Dis_Board(board, POW, COL);

				ret = Is_Win(board, POW, COL);
				if (ret != 'c')
					break;
			}
			if (ret == '*')
			{
				printf("玩家赢\n");
			}
			else if (ret == '#')
			{
				printf("电脑赢\n");
			}
			else if (ret == 'f')
			{
				printf("平局\n");
			}

		case 0: //退出
			
			break;

		default: printf("输入错误，请重新输入\n");
		}

	} while (input);
	
	return 0;
}