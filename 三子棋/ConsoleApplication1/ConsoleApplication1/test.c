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
		printf("��ѡ��->\n");
		scanf("%d",&input);
        
		switch (input)
		{
		case 1: //����Ϸ
			printf("��ӭ������������Ϸ\n");

			Init_Board(board, POW, COL);

			Dis_Board(board, POW, COL);
			//����
			while (1)
			{
				Play_Move(board, POW, COL);//�����
				//�ж���ying

				Dis_Board(board, POW, COL);

				ret = Is_Win(board, POW, COL);
				if (ret != 'c')
					break;

				Computer_Move(board, POW, COL);//������

				//�ж���Ӯ
				Dis_Board(board, POW, COL);

				ret = Is_Win(board, POW, COL);
				if (ret != 'c')
					break;
			}
			if (ret == '*')
			{
				printf("���Ӯ\n");
			}
			else if (ret == '#')
			{
				printf("����Ӯ\n");
			}
			else if (ret == 'f')
			{
				printf("ƽ��\n");
			}

		case 0: //�˳�
			
			break;

		default: printf("�����������������\n");
		}

	} while (input);
	
	return 0;
}