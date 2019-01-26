#include <iostream>
using namespace std;

int main(){
	int hours, speed, time = 1, distance = 0;
	cout<< "How fast were you going? "<<endl;
	cin>> speed;
	cout<< "How long did you travel at this speed? "<<endl;
	cin>> hours;
	
	while(time <= hours){
		distance += speed;
		distance += speed;
		cout<<"Hour: "<<time<<" Distance traveled: "<<distance<<endl;
		time++;
	}

	return 0;
}