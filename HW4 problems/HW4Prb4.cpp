#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream oFile;
	oFile.open("sales.txt");
	int s1,s2,s3,s4,s5;
	string str1, str2, str3, str4, str5;
	
	cout<< "Enter sales for store 1: "<<endl;
	cin>> s1;
	cout<< "Enter sales for store 2: "<<endl;
	cin>> s2;
	cout<< "Enter sales for store 3: "<<endl;
	cin>> s3;
	cout<< "Enter sales for store 4: "<<endl;
	cin>> s4;
	cout<< "Enter sales for store 5: "<<endl;
	cin>> s5;
	
	for(int i = 0; i< s1; i+= 100){
		str1.append("*");
		
	}
	
	for(int i = 0; i< s2; i+= 100){
		str2.append("*");
		
	}
	
	for(int i = 0; i< s3; i+= 100){
		str3.append("*");
		
	}
	
	for(int i = 0; i< s4; i+= 100){
		str4.append("*");
		
	}
	
	for(int i = 0; i< s5; i+= 100){
		str5.append("*");
		
	}
	
	oFile<<"Store 1: "<<str1<<endl;
	oFile<<"Store 2: "<<str2<<endl;
	oFile<<"Store 3: "<<str3<<endl;
	oFile<<"Store 4: "<<str4<<endl;
	oFile<<"Store 5: "<<str5<<endl;

	return 0;
}