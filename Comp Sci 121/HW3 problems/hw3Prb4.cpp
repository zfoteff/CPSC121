#include <iostream>
using namespace std;
int main(){
	int side;
	cout<<"How long should the side of the square be?: "<<endl;
	cin>> side;
	
	while(side > 15){
		cout<< "Pick a smaller number"<< endl;
		cin>> side;
	}
	
	for(int r = 0; r<= side-1; r++){
		cout<<endl;
		for(int c = 0; c<= side-1; c++){
			cout<< "X";
		}
	}
	cout<<endl;
	
	return 0;
}