/*
 * function.c
 *
 *  Created on: Oct 3, 2022
 *      Author: ziadayman
 */
#include <stdio.h>
#include "function.h"

char playercounter =0;
char winnerchec =0;


char dis [10] = {0, '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9'};

void display (void)
{
	printf ("     |        |      \n");
	printf ("   %c |    %c   |  %c    \n" ,dis[1] , dis[2] , dis[3]);

	printf ("-----|--------|------\n");
	printf ("     |        |      \n");

	printf ("   %c |    %c   |  %c    \n" ,dis[4] , dis[5] , dis[6]);

	printf ("-----|--------|------\n");
	printf ("     |        |      \n");

	printf ("   %c |    %c   |  %c    \n" ,dis[7] , dis[8] , dis[9]);

	printf ("     |        |      \n\n");

}


void setWinner (void)
{
	if ((dis[1] == 'X') && (dis[2] == 'X') && (dis[3] == 'X'))
	{
		winnerchec = 1;
	}
	if ((dis[1] == 'O') && (dis[2] == 'O') && (dis[3] == 'O'))
	{
		winnerchec = 2;
	}

	if ((dis[4] == 'X') && (dis[5] == 'X') && (dis[6] == 'X'))
	{
		winnerchec = 1;
	}
	if ((dis[4] == 'O') && (dis[5] == 'O') && (dis[6] == 'O'))
	{
		winnerchec = 2;
	}

	if ((dis[7] == 'X') && (dis[8] == 'X') && (dis[9] == 'X'))
	{
		winnerchec = 1;
	}
	if ((dis[7] == 'O') && (dis[8] == 'O') && (dis[9] == 'O'))
	{
		winnerchec = 2;
	}




	if ((dis[1] == 'X') && (dis[4] == 'X') && (dis[7] == 'X'))
	{
		winnerchec = 1;
	}
	if ((dis[1] == 'O') && (dis[4] == 'O') && (dis[7] == 'O'))
	{
		winnerchec = 2;
	}

	if ((dis[2] == 'X') && (dis[5] == 'X') && (dis[8] == 'X'))
	{
		winnerchec = 1;
	}
	if ((dis[2] == 'O') && (dis[5] == 'O') && (dis[8] == 'O'))
	{
		winnerchec = 2;
	}

	if ((dis[3] == 'X') && (dis[6] == 'X') && (dis[9] == 'X'))
	{
		winnerchec = 1;
	}
	if ((dis[3] == 'O') && (dis[6] == 'O') && (dis[9] == 'O'))
	{
		winnerchec = 2;
	}





	if ((dis[3] == 'X') && (dis[5] == 'X') && (dis[7] == 'X'))
	{
		winnerchec = 1;
	}
	if ((dis[3] == 'O') && (dis[5] == 'O') && (dis[7] == 'O'))
	{
		winnerchec = 2;
	}

	if ((dis[1] == 'X') && (dis[5] == 'X') && (dis[9] == 'X'))
	{
		winnerchec = 1;
	}
	if ((dis[1] == 'O') && (dis[5] == 'O') && (dis[9] == 'O'))
	{
		winnerchec = 2;
	}
}




void player1 (void)
{
	printf ("Player 1 Turn \n");
	int num;
	scanf ("%d" , &num);

	if ((num >= 1) && (num <=9) && (dis[num] != 'X') && (dis[num] != 'O'))
	{
		dis[num] = 'X';
		display();
	}

	else
	{
		printf ("Invalid move , PLease enter valid move\n");
		display();
		player1();
	}
}


void player2 (void)
{
	printf ("Player 2 Turn \n");
	int num;
	scanf ("%d" , &num);

	if ((num >= 1) && (num <=9) && (dis[num] != 'X') && (dis[num] != 'O'))
	{
		dis[num] = 'O';
		display();
	}

	else
	{
		printf ("Invalid move , PLease enter valid move\n");
		display();
		player2();
	}
}
