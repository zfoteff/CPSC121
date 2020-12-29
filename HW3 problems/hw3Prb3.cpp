#include <iostream>
using namespace std;
int main(){
	int user, bigNum = 0, smallNum = 98;
	cout<<"Enter a number: "<<endl;
	cin>> user;
	
	while(user != 99){
		if(user > bigNum){
			bigNum = user;
		}
		else if(user < smallNum){
			smallNum = user;
		}
		
		cout<<"Enter another number: (enter 99 to exit)"<<endl;
		cin>> user;
	}
	
	cout<<"The biggest number you entered was "<<bigNum<< " the smallest number you entered was "<<smallNum<<endl;
	


	return 0;
}