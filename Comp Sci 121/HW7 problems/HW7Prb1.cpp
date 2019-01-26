#include <iostream>
using namespace std;

int main(){
	int nums[10];

	for(int i = 0; i< 10; i++){
		cout<<"Enter a number: ";
		cin>> nums[i];
	}
	
	for(int i = 0; i< 9; i++){
		int dum = 0;
		if(nums[i]< nums[i+1]){
			dum = nums[i];
			nums[i] = nums[i+1];
			nums[i+1] = dum;
		}
	}
	
	cout<<"The highest number in the array is "<<nums[0]<<" and the lowest number is "<<nums[9]<<endl;
	return 0;
}