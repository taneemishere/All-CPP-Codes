#include <iostream>
using namespace std;

int main(){
	const int size = 5;
	int arr[size] = {5,6,7,1,2};
	
	cout << "Before sorting!" << endl;
	for(int i = 0; i<size; i++){
		cout << arr[i] << "\t";
	}	
	// < descending order and 
	// > ascending order
	for(int p = 0; p<size-1; p++){
		for(int c = 0; c<size-1-p; c++){
			if(arr[c] < arr[c+1]){
				int temp = arr[c];
				arr[c] = arr[c+1];
				arr[c+1] = temp;
			}
		}
	}
	cout << "\nAfter sorting!" << endl;
	for(int i = 0; i<size; i++){
		cout << arr[i] << "\t";
	}
	
	return 0;
}

