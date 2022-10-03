/*
 * Tic-tac-toe-Game.c
 *
 *  Created on: Oct 3, 2022
 *      Author: ziadayman
 */


#include <stdio.h>
#include "function.h"

extern char winnerchec;
extern char playercounter;

int main ()
{
	setvbuf (stdout  , NULL , _IONBF , 0);
	setvbuf (stderr  , NULL , _IONBF , 0);

	printf ("Tic-Tac-Toe-Game started\n");

	display();

	while (1)
	{
		player1();
		playercounter++;
		setWinner ();
		if ((playercounter == 9) || (winnerchec != 0))
		{
			break;
		}

		player2();
		playercounter++;
		setWinner ();
		if ((playercounter == 9) || (winnerchec != 0))
		{
			break;
		}

	}
		if (winnerchec == 0)
		{
			printf ("TIE \n");
		}

		else
		{
			printf ("\n Player %d won :)\n" , winnerchec);
		}
}

