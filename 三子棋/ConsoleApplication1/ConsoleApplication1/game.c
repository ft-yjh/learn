#include"game.h"
void Init_Board(char board[POW][COL], int pow, int col)
{
	memset(board, ' ', pow*col*sizeof(board[0][0]));
}

void Dis_Board(char board[POW][COL] , int pow, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < pow; i++)
	{
		for (j = 0; j < col; j++)
		{

			printf(" %c |",board[i][j]);
		}
		printf("\n");

		for (j = 0; j < col; j++)
		{

			printf("---|");
		}

		printf("\n");
		
	}
}

	void Play_Move(char board[POW][COL], int pow, int col)
	{
		int x = 0;
		int y = 0;

		while (1)
		{
			printf("��������Ҫ�ߵ�����->\n");
			scanf("%d%d", &x, &y);

			if (x >= 1 && x <= 3 && y>=1 && y <= 3)
			{
				if (board[x - 1][y - 1] != ' ')
				{
					printf("����ʧ�ܣ�������ѡ��\n");

				}
				else
				{
					board[x - 1][y - 1] = '*';
					//���ӳɹ�
					break;
				}
			}
			else
			{
				printf("\n����������곬����Χ!\n");
			}
		}
	}
	
	void Computer_Move(char board[POW][COL], int pow, int col)
	{
		int i = 0;
		int x = 0;
		int y = 0;

		srand((unsigned int )time(NULL));
		printf("������\n");

		for (i = 0; i <BOARD_NUM ; i++)
		{

			x = rand() % POW;
			y = rand() % COL;

			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				
				break;
			}
		}
	}

	int Is_Full(char board[POW][COL], int pow, int col)
	{
		int i = 0; 
		int j = 0;
		for (i = 0; i < pow; i++)
		{
			for (j = 0; j < col; j++)
			{
				if (board[i][j] == ' ')
					return 0;
			}
		}
	}
	char Is_Win(char board[POW][COL], int pow, int col)
	{

		int i = 0;
		int j = 0;

		for (i = 0; i < pow; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == '*')
			{
				return '*';
			}
			else if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] == '#')
			{
				return '#';
			}
		}
		for (j = 0; j < col; j++)
		{
			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == '*')
			{
				return '*';
			}

			if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[2][j] == '#')
			{
				return '#';
			}
		}
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == '*')
		{
			return '*';
		}
		else if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] == '#')
		{
			return '#';
		}
	
		//�ж���
		if (Is_Full(board, POW, COL))
		{
			//ƽ��
			return 'f';
		}
		//����
		return 'c';

			
	

		

	}

