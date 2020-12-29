#include <iostream>
using namespace std;

void sort(double []);
double findAve(double []);
double findTotal(double []);

int main(){
	double rain[12];
	for(int i = 0; i< 12; i++){
		cout<< "Enter rainfall for month "<<i+1<<": ";
		cin>> rain[i];
	}
	
	sort(rain);
	double average = findAve(rain);
	double total = findTotal(rain);
	
	
	cout<<"The average rainfall for the year was "<<average<<" inches. "<<endl;
	cout<<"The total rainfall for the year was "<<total<<" inches. "<<endl;
	cout<<"The month with the highest amount had "<<rain[0]<< " inches of rain and the lowest month had "<<rain[11]<<" inches. "<<endl;

	return 0;
}



void sort(double nums[]){
	for(int i = 0; i< 11; i++){
		int dum = 0;
		if(nums[i]< nums[i+1]){
			dum = nums[i];
			nums[i] = nums[i+1];
			nums[i+1] = dum;
		}
	}
}
double findAve(double nums[]){
	double average = 0;
	for(int i = 0; i< 12; i++){
		average += nums[i];
	}
	average /= 12;
	return average;
}
double findTotal(double nums[]){
	double total = 0;
	for(int i = 0; i< 12; i++){
		total += nums[i];
	}
	return total;
}


