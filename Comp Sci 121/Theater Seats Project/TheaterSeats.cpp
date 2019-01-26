#include <iostream>
#include <ctime>
#include "TheaterFunc.h"
using namespace std;

int main(){
	srand(time(NULL));
	
	const int NUM_ROWS = 15;
	int choice = 0;
	double prices[NUM_ROWS] = {};
	char seatingChart[NUM_ROWS][30];
	
	populate(seatingChart, NUM_ROWS);
	
	enterPrice(prices, NUM_ROWS);
	
	while(choice != 99){
		int userRow, userSeat;
		bool isSame = false;
		
		cout<<"Enter 1 to buy tickets\nEnter 2 to see seats \n(enter 99 to exit)"<<endl;
		cin>> choice;
		
		switch(choice){
			case 1: 
				cout<<"Enter the row you want and the seat you want: ";
				cin>>userRow>>userSeat;
				
				isSame = checkSame(seatingChart, userRow, userSeat);
				
				while(isSame){
					cout<<"The seat you chose is already taken. Pick another row and seat";
					cin>> userRow>>userSeat;
					
					isSame = checkSame(seatingChart, userRow, userSeat);
				}
			
				buyTickets(seatingChart, prices, userRow, userSeat, NUM_ROWS);
				cout<<"The total price is "<<totalSales<<endl;
				break;
			
			case 2: 
				displaySeats(seatingChart, NUM_ROWS);
				break;
		} 
	
	}
	
	
	return 0;
}