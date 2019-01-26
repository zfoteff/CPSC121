#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double ts1, ts2, ts3, ts4, ts5, average;
	cout<< "Enter test score 1\n"; cin>> ts1;
	cout<< "Enter test score 2\n"; cin>> ts2;
	cout<< "Enter test score 3\n"; cin>> ts3;
	cout<< "Enter test score 4\n"; cin>> ts4;
	cout<< "Enter test score 5\n"; cin>> ts5;
	
	average = (ts1+ts2+ts3+ts3+ts4+ts5)/5;
	cout<< "Your average test score is "<<setprecision(3) <<average;
	return 0;
	
}