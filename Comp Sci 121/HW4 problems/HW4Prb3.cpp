#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int startOrg, totalOrg, newOrg, days;
	double pChange;
	
	cout<<"How many organisms are you starting with? "<<endl;
	cin>> startOrg;
	totalOrg = startOrg;
	
	cout<<"What is percentage change?"<<endl;
	cin>> pChange;
	pChange *= .01; // change pChange from percentage to decimal number
	
	cout<<"How many days would you like to simulate?"<<endl;
	cin>> days;
	
	while(days < 1){
		cout<<"Please enter at least 2: "<<endl;
		cin>> days;
	}
	
	for(int x = 1; x <= days; x++){
		totalOrg = totalOrg+(totalOrg*pChange);
		
		cout<<"Day: "<<x<<" Population: "<<totalOrg<<endl;
	}
	
	return 0;
}