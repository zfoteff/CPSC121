#include <iostream>
#include <cmath>
using namespace std;
double futureValue(double pValue, double iRate, double t){
	double fV = pValue*(pow((1+iRate),t));
	return fV;

}
int main(){
	double presentValue, interestRate, months, futureV;
	cout<< "What is the present value of the account: ";
	cin>> presentValue;
	cout<< "\nWhat is the interest rate percentage of the account: ";
	cin>> interestRate;
	interestRate = interestRate/100;
	cout<<"\nHow many months in the future would you like to see: ";
	cin>> months;
	
	futureV = futureValue(presentValue,interestRate,months);
	cout<< "The future value of your account in "<<months<<" months is "<<futureV<<endl; 


	return 0;
}
