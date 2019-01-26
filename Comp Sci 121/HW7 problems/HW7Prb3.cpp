#include <iostream>
using namespace std;

void findBigger(int [],int, int);

int main(){
	const int ARRAY_SIZE = 20;
	int nums[ARRAY_SIZE];
	
	for(int i = 0; i< ARRAY_SIZE; i++){
		cout<<"Enter a number: ";
		cin>> nums[i];
	}
	
	findBigger(nums, ARRAY_SIZE, 7);
	
	return 0;
}

void findBigger(int array[], int size, int n){
	cout<<"These are all the numbers bigger than "<<n<<": "<<endl;
	for(int i = 0; i< size; i++){
		if(array[i]> n){
			cout<<array[i]<<" "<<endl;
		}
	}
}