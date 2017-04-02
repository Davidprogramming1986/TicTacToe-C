#include <stdio.h>
#include <stdbool.h>
#include "defs.h"

int board[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int win[8][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 4, 7}, {2, 5, 8}, {3, 6, 9}, {1, 5, 9}, {3, 5, 7}};

void printBoard() 
{
	int i, j, boardSquare;
	printf("\n");
	for(i = 0; i < ARRAYLENGTH(board); i++) 
	{
		boardSquare = board[i];
		if((i + 1) % 3 == 0)
		{
			printf("%d\n", boardSquare);
			if(i < 6) 
			{
				printf("__|___|__\n");
			}
		}
		else 
		{
			printf("%d | ", boardSquare);
		}
			
	}
	printf("\n");

}

void * freeSpaces()
{
	int i;
	int counter = 0;
	static int freeSpaces[] = {};

	for(i = 0; i < ARRAYLENGTH(board); i++) 
	{
		if(board[i] != GAMEPIECEX && board[i] != GAMEPIECEO)
		{
			freeSpaces[counter] = board[i];
			counter++;
		}
	}

	return freeSpaces;
}

//void spacesLeft() {}

/*
int main() {
	printBoard();

	int i;
	int *p;
	p = freeSpaces();

	for(i = 0; i < 9; i++)
	{
		printf("%d, ", *(p + i));
	}

	return 0;
}

*/


