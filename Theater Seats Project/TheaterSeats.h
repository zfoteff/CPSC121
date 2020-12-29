#ifndef THEATERSEATS_H
#define THEATERSEATS_H

void populate(char[][30], int);
void displaySeats(char[][30], int);
void enterPrice(double[], int);
void buyTickets(char[][30], double[], int, int, int);
bool checkSame(char[][30], int, int);

/*************************************
*			populate				 *
*************************************/
void populate(char array[][30], int numR){
	for(int r = 0; r< numR; r++){
		for(int c = 0; c< 30; c++){
			int num = rand()%2+1;
			
			if(num == 1){
				array[r][c] = '#';
			}
			else{
				array[r][c] = '*';
			}
		}
	}	
}


/*************************************
*			displaySeats			 *
*************************************/
void displaySeats(char array[][30], int numR){
	for(int r = 0; r< numR; r++){
		cout<<"Row "<<r+1<<":   ";
		
		for(int c = 0; c< 30; c++){
			cout<< array[r][c];
		}
		cout<<endl;
	}
}


/*************************************
*			enterPrice				 *
*************************************/
void enterPrice(double array[], int numR){
	for(int i = 0; i< numR; i++){
		cout<< "Enter price for row "<<i+1<<": ";
		cin>> array[i];
	}
}


/*************************************
*			buyTickets				 *
*************************************/
void buyTickets(char array[][30], double ticketP[], int row, int seat, int numR){
	double totalPrice = 0;
	
	char userChoice = array[row-1][seat-1];
	
	array[row-1][seat-1] = '*';
	totalPrice += ticketP[row-1];
	
	cout<<"The total price for this purchase is $"<<totalPrice<<endl;
}


/*************************************
*			checkSame				 *
*************************************/
bool checkSame(char array[][30], int uRow, int uSeat){
	bool r = false;
	if(array[uRow-1][uSeat-1] == '*'){
		r = true;
	}
	else{
		r = false;
	}
	return r;
}


#endif