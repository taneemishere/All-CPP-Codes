#include <iostream>
using namespace std;

int reverseArray(int arr[], int start, int end){
	if(start >= end){
		return 0;
	}	
		
	int temp = arr[start];  
    arr[start] = arr[end]; 
    arr[end] = temp; 
      
    // Recursive Function calling 
    reverseArray(arr, start + 1, end - 1); 
}


int main(){
	
	int arr[] = {1,2,3,4};

	reverseArray(arr, 0, 4);
		
	cout << "In reverse the array is: " << endl;
	for(int i = 0; i<4; i++){
		cout << arr[i] << "\t";
	}
	

	return 0;
}

