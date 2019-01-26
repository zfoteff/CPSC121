#include <iostream>
using namespace std;

void isPrime(int x){
	bool prime = true;
	for(int i = x-1; i>=2; i--){
		if(x % i == 0){
			prime = false;
		}
	}
	if(prime){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}

int main(){
	int user;
	do{
		cout<<"Is this prime? (-99 to exit): ";
		cin>> user;
	
		isPrime(user);
	}
	while(user != -99);
	
	return 0;
}