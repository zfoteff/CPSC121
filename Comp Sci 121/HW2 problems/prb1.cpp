#include <iostream>
using namespace std;
int main(){
	double i1 = 15.95, i2 = 24.95, i3 = 6.95, i4 = 12.95, i5 = 3.95;
	double subTotal = i1+i2+i3+i4+i5;
	double newTotal = subTotal+(subTotal*0.07);
	
	cout<< "The price of item one is $"<<i1<<endl;
	cout<< "The price of item two is $"<<i2<<endl;
	cout<< "The price of item three is $"<<i3<<endl;
	cout<< "The price of item four is $"<<i4<<endl;
	cout<< "The price of item five is $"<<i5<<endl;
	cout<< "The total sale is $"<<subTotal<<endl;
	cout<< "The total sale plus the 7% sales tax is $"<<newTotal;
	
	return 0;
}