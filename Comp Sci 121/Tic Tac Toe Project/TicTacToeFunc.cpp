#include <iostream>
#include <cmath>
#include "TicTacToeFunc.h"
using namespace std;


/*************************************
*			userMove				 *
*************************************/

void userMove(char array[][3], int numR){
	int userRow;
	int userCol;
	char userLetter;
	
	cout<<"\nEnter letter: ";
	cin>> userLetter;
	while(userLetter != 'X' && userLetter != 'O'){
		cout<<"Please enter X or O: ";
		cin>> userLetter;
		cout<< endl;
	}
	
	//row entry
	cout<<"Enter row: ";
	cin>> userRow;
	while(userRow < 1 || userRow > 3){
		cout<<"Please a row between 1 and 3: ";
		cin>> userRow;
		cout<< endl;
	}
	
	//column entry
	cout<<"Enter column: ";
	cin>> userCol;
	cout<<endl;
	while(userCol< 1 || userCol> 3){
		cout<< "Enter a column between 1 and 3: ";
		cin>> userCol;
		cout<< endl;
	}
	
	
	
	array[userRow-1][userCol-1] = userLetter;
	
}

/*************************************
*			playerMove				 *
*************************************/

void playerMove(char array[][3], int numR, char playerLetter){
	int userRow;
	int userCol;
	
	cout<<"\nEnter row: ";
	cin>> userRow;
	while(userRow < 1 || userRow > 3){
		cout<<"Please enter a row between 1 and 3: ";
		cin>> userRow;
		cout<< endl;
	}
	
	cout<<"\nEnter column: ";
	cin>> userCol;
	while(userCol < 1 || userCol> 3){
		cout<<"Please enter a row between 1 and 3: ";
		cin>> userCol;
		cout<< endl;
	}
	
	array[userRow-1][userCol-1] = playerLetter;
	
}

/*************************************
*			  comMove				 *
*************************************/

void comMove(char array[][3], char comLetter){
	int comRow = rand()%3+1;
	int comCol = rand()%3+1;
	array[comRow-1][comCol-1] = comLetter;
}

/*************************************
*			 showBoard				 *
*************************************/

void showBoard(char array[][3], int numR){
	cout<<"======================="<<endl;
	for(int r = 0; r< numR; r++){
		cout<<"||  ";
		for(int c = 0; c< 3; c++){
			cout<<array[r][c]<<"  ||  ";
		}
		cout<<endl;
		cout<<"======================="<<endl;
	}
}

/*************************************
*			  clearBoard		   	 *
*************************************/

void clearBoard(char array[][3], int numR){
	for(int r = 0; r< numR; r++){
		for(int c = 0; c< 3; c++){
			array[r][c] = '-';
		}
	}
}

/*************************************
*			checkWinner				 *
*************************************/

bool checkWinner(char array[][3], int numR){	
	//row check
	for(int r = 0; r< numR; r++){
		if(array[r][0] == array[r][1] && array[r][1] == array[r][2]){
			if(array[r][0] == '-' && array[r][1] == '-' && array[r][2] == '-'){
				return false;
			}	
			cout<<array[r][1]<<" wins!";
			return true;
		}
	}
	
	// column check
	for(int c = 0; c< numR; c++){
		if(array[0][c] == array[1][c] && array[1][c] == array[2][c]){
			if(array[0][c] == '-' && array[1][c] == '-' && array[2][c] == '-'){
				return false;
			}
			cout<<array[1][c]<<" wins!";
			return true;
		}
	}

	if(array[0][0] == array[1][1] && array[1][1] == array[2][2]){
		cout<<array[1][1]<<" wins!";
		return true;
	}
	else if(array[0][0] == array[2][0] && array[1][1] == array[0][2]){
		cout<<array[1][1]<<" wins!";
		return true;
	}
}