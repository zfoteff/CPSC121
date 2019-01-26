#include <iostream>
using namespace std;

double getSales(double name){
	int sales = 0;
	cout<<"Enter in the division's quarterly sales: ";
	cin>> sales;
	while(sales < 0){
		cout<<"Dont use a negative number. Enter in the division's quarterly sales: ";
		cin>> sales;
	}
	return sales;
}

void findHighest(double a, double b, double c, double d){
	double numList[4] = {a,b,c,d};
	double first = 0, second = 0, third = 0, fourth = 0;
	for (int g = 0; g < 4; g++){ // first for loop allows the sorter loop multiple chances to sort through
		for (int i = 0; i< 4; i++){ // second for loop reads through list multiple times to sort placement of values
			double dummy;
			if (numList[i+1] > numList[i]){
				dummy = numList[i+1];
				numList[i+1] = numList[i];
				numList[i] = dummy;
			}
		}
	}
	first = numList[0]; second = numList[1]; third = numList[2]; fourth = numList[3];
	
	cout<<"The earnings for the leading quadrent is $"<<first<<endl;
}

int main(){
	double NE = 0, NW = 0, SE = 0, SW = 0;
	NE = getSales(NE);
	NW = getSales(NW);
	SE = getSales(SE);
	SW = getSales(SW);
	 
	findHighest(NE, NW, SE, SW);
	
	return 0;
}