#include <iostream>
#include <ctime>
using namespace std;


void userMove(char[][3], int);
void playerMove(char[][3], int, char);
void comMove(char[][3], char);
void showBoard(char[][3], int);
void clearBoard(char[][3], int);
bool checkWinner(char[][3], int);

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


