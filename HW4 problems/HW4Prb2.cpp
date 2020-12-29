#include <iostream>
#include <fstream>

using namespace std;
int main(){
	int totalNum, sum, num;
	double ave;
	
	ifstream iFile;
	iFile.open("Random.txt");
	if (iFile){
		cout<<"File is open"<<endl;
		
		iFile >> num;
		while(iFile>> num){
			totalNum++;
			sum += num;
			
		}
		
		ave = sum/totalNum;
		
		cout<<"There are "<<totalNum+1<<" numbers in the file. The sum is "<<sum<<". The average is "<<ave<<endl; 
		
		iFile.close();
	}
	
	
	
	else{
		cout<<"Error"<<endl;
		return 0;
	}

	return 0;
}