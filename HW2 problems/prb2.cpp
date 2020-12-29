#include <iostream>
using namespace std;
int main(){
	double value, assesValue,propTax;
	
	cout<< "What is the value of your property?"<<endl;
	cin>> value;
	
	assesValue = value*.6;
	propTax = assesValue*.0075;
	
	cout<< "The assessment value of your property is $"<<assesValue<< " and the property tax you must pay is $"<<propTax<<endl;
	return 0;
}