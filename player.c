#include <stdio.h>
#include <stdbool.h>
#include "defs.h"
#include "board.c"

void playerCanWin() {
	int check, winCheck, m;

	for(check = 0; check < ARRAYLENGTH(board); i++)
	{
		winCheck = 0;
		
		for(m = 0; m < ARRAYLENGTH(check); m++) {

			if(board[check[m] - 1 == playerPiece]) 
			{
				winCheck++;
				if(winCheck == 3)
				{
					return true;
				}
			}
		}
	}

	return false;
}

