#include <iostream>
using namespace std;

int numberSame(char[], char[]);

int main(){
	char answers[20] = {'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B'};
	char user[20];
	int total = 0;
	
	for(int i = 0; i< 20; i++){
		char answer;
		cout<< "Enter the answer for question "<<i+1<<": ";
		cin>> answer;
		
		user[i] = answer;
	}
	
	total = numberSame(answers, user);
	
	if(total >= 15){
		cout<<"You passed!"<<endl;
	}
	else{
		cout<<"You failed."<<endl;
	}
	
	return 0;
}

int numberSame(char a1[], char a2[]){
	int total = 0;
	for(int i = 0; i< 20; i++){
		if(a1[i] == a2[i]){
			total++;
		}
	}
	cout<<"You got "<<total<<" correct"<<endl;
	return total;
}