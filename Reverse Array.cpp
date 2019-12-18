#include <iostream>
using namespace std;

int main(){
	const int SIZE = 8;
	int arr[SIZE] = {9,8,7,6,5,4,3,2};
	int left = 0;
	int right = SIZE-1;
	
	cout << "Before: " << endl;
	for(int i = 0; i<SIZE; i++){
		cout << arr[i] << "\t";
	}
	
	while(left < right){
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	
	cout << "\n\nAfter: " << endl;
	for(int i = 0; i<SIZE; i++){
		cout << arr[i] << "\t";
	}
	

	return 0;
}

