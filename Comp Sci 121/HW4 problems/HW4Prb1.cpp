#include <iostream>
using namespace std;

int main(){
	int total = 0, choice;
	cout<< "Enter a number: "<<endl;
	cin>> choice;
	
	while(choice < 0){
		cout<<"Dont enter a negative number. Choose a different number: "<<endl;
		cin>> choice;
	}
	
	for(int x = 1; x<= choice; x++){
		total += x;
		cout<<total<<" ";
		
	}
	

	return 0;
}