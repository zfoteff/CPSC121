#ifndef TICTACTOEFUNC_H
#define TICTACTOEFUNC_H

void userMove(char[][3], int);
void playerMove(char[][3], int, char);
void comMove(char[][3], char);
void showBoard(char[][3], int);
void clearBoard(char[][3], int);
bool checkWinner(char[][3], int);

#endif