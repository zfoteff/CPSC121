#include <iostream>
using namespace std;
int main(){
	int calories = 3.6, cBurned, minutes = 5;
	while(minutes <= 30){
		cBurned = calories*minutes;
		cout<<"At minute "<<minutes<<" you have burned "<<cBurned<<" calories."<<endl;
		minutes += 5;
	}

	return 0;
}