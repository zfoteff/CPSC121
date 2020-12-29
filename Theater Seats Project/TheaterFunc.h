#ifndef THEATERFUNC_H
#define THEATERFUNC_H

extern double totalSales;

void populate(char[][30], int);
void displaySeats(char[][30], int);
void enterPrice(double[], int);
void buyTickets(char[][30], double[], int, int, int);
bool checkSame(char[][30], int, int);


#endif