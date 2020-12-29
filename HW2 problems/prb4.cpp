#include <iostream>
using namespace std;
int main(){
	int x, y;
	
	cout<< "Give me a number"<<endl;
	cin>> x;
	cout<< "Give me another number"<<endl;
	cin>> y;
	
	if(x>y){
		cout<< "Your first number "<<x<<" is greater."<<endl;
	}
	else{
		cout<< "Your second number "<<y<<" is greater."<<endl;
	}
	return 0;
}