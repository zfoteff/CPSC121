#include <iostream>
#include <ctime>
#include "TicTacToeFunc.h"
using namespace std;

const int NUM_ROWS = 3;

int main(){
	srand(time(NULL));
	
	int playType;
	char gameBoard[3][NUM_ROWS];
	
	cout<<"Do you want to play the computer(1) or another player(2)?: ";
	cin>> playType;
	while(playType != 1 && playType != 2){
		cout<<"Press 1 to play the computer and press 2 to play the computer: ";
		cin>>playType;
	}
	
	
	// play against another player
	if(playType == 2){
		bool play = true;
		clearBoard(gameBoard, NUM_ROWS);
		showBoard(gameBoard,NUM_ROWS);
		
		while(play){
			userMove(gameBoard, NUM_ROWS);
			
			showBoard(gameBoard, NUM_ROWS);
			userMove(gameBoard, NUM_ROWS);
			
			showBoard(gameBoard, NUM_ROWS);
			
			if(checkWinner(gameBoard, NUM_ROWS)){
				play = false;
			}
		}
	}
	
	
	// play against computer
	if(playType == 1){
		char playerSymbol;
		char comLetter;
		int playerChoice;
		
		cout<<"Do you want to be X(1) or O(2): ";
		cin>> playerChoice;
		while(playerChoice < 1 || playerChoice > 2){
			cout<< "Please enter 1 to be X and 2 to be O: ";
			cin>> playerChoice;
		}
		
		if (playerChoice == 1){
			playerSymbol = 'X';
			comLetter = 'O';
		}
		else if(playerChoice == 2){
			playerSymbol = 'O';
			comLetter = 'X';
		}
		
		
		bool play = true;
		clearBoard(gameBoard, NUM_ROWS);
		
		showBoard(gameBoard, NUM_ROWS);
		
		while(play){
			
			playerMove(gameBoard, NUM_ROWS, playerSymbol);
			comMove(gameBoard, comLetter);
			showBoard(gameBoard, NUM_ROWS);
			
			if(checkWinner(gameBoard, NUM_ROWS)){
				char keep;
				
				cout<<"\nPlay again? (Y)es or (N)o?: ";
				cin>> keep;
				while(keep != 'Y' && keep != 'N'){
					cout<<"Please enter Y for yes and N for no: ";
					cin>> keep;
				}
				
				if(keep == 'Y'){
					clearBoard(gameBoard, NUM_ROWS);
				}
				
				else{
					play = false;
				}
			}
		}
	}

	
	return 0;
}