#include <iostream>
using namespace std;
int main(){
	int pennies, nickels, dimes, quarters, total;
	cout<< "How many pennies do you have?"<<endl;
	cin>> pennies;
	
	cout<< "How many nickels do you have?"<<endl;
	cin>> nickels;
	nickels *= 5;
	
	cout<< "How many dimes do you have?"<<endl;
	cin>> dimes;
	dimes *= 10;
	
	cout<< "How many quarters do you have?"<<endl;
	cin>> quarters;
	quarters *= 25;
	
	total = pennies+nickels+dimes+quarters;
	
	if(total == 100){
		cout<<"The amount you entered is equal to a dollar";
	}
	else if(total < 100){
		cout<<"The amount you entered is less than a dollar";
	}
	else if(total > 100){
		cout<<"The amount you entered is greater than a dollar";
	}
	return 0;
}