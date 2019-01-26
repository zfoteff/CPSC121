#include <iostream>
using namespace std;

void getScore(double &);
void calcAverage(double, double, double, double, double);
void findLowest(double[]);

int main(){
	double t1, t2, t3, t4, t5;
	cout<<"Enter 5 scores and get the average with the lowest score dropped"<<endl;
	getScore(t1);
	getScore(t2);
	getScore(t3);
	getScore(t4);
	getScore(t5);
	calcAverage(t1,t2,t3,t4,t5);
	
	return 0;
}
void getScore(double &score){
	cout<<"Enter Score: ";
	cin>> score;
	
	while(score < 0 || score > 100){
		cout<<"Enter a number between 0-100";
		cin>> score;
	}
}

void findLowest(double array[]){
	for(int i = 0; i< 4; i++){
		double dum = 0;
		if(array[i+1] > array[i]){
			dum = array[i];
			array[i] = array[i+1];
			array[i+1] = dum;
		}
	}
	array[4] = 0; //sets lowest = 0, making it not count to the average
}

void calcAverage(double n1, double n2, double n3, double n4, double n5){
	double numList[5] = {n1,n2,n3,n4,n5};
	double sum = 0;
	double average = 0;
	findLowest(numList);
	
	for(int n = 0; n<= 4; n++){
		sum += numList[n];
	}
	
	average = (sum)/(4);
	cout<<"The average of these scores is: "<<average<<endl;
}