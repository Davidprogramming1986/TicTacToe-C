#include <stdio.h>
#include <stdbool.h>

#define ARRAYLENGTH(x)  (sizeof(x) / sizeof((x)[0]))

#define GAMEPIECEX 'X'
#define GAMEPIECEO 'O'

char playerPiece = GAMEPIECEX;
char aiPiece = GAMEPIECEO;
char playerTurn = true;