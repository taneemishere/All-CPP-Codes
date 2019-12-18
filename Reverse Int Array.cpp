#include <iostream>
using namespace std;

int main(){
	
	const int n = 4;
	int arr[n] = {1,2,3,4};
	int start = 0, end = n-1;
	
	int temp;
	while(start < end){
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		start++;
		end--;
	}
	cout << "In reverse the array is: " << endl;
	for(int i = 0; i<n; i++){
		cout << arr[i] << "\t";
	}
	

	return 0;
}

