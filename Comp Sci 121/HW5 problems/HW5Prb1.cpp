#include <iostream>
#include <cmath>
using namespace std;
double fallingDistance(int t){
	double d = (9.8*pow(t,2))/2;
	return d;
	
}
int main(){
	int time;
	cout<<"How long did the object fall?"<<endl;
	cin>>time;
	
	for(int i = 1; i<= time; i++){
		int d = fallingDistance(i);
		cout<<"Time: "<<i<<"   Distance: "<<d<<" "<<endl;	
	}

	return 0;
}