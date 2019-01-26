#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int x = 1;
	ofstream oFile;
	oFile.open("Numbers.txt");

	while(x <= 100){
		oFile<<x<<endl; // this is how to write to a file 
		x++;
	}
	
	oFile.close();
	return 0;
}