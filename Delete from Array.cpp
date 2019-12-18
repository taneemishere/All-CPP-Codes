#include <iostream>
using namespace std;
// Insertion in array
int main(){
	int n = 5;
	int arr[n] = {5,9,6,7,1};
	int k = 2; // where to delete the element (Position)
	
	for(int j = k; j<n-1; j++){
		arr[j] = arr[j+1];
	}
	n = n-1; // decrease the size of the array
	
	cout << "Now array is: " << endl;
	for(int i = 0; i<n; i++){
		cout << arr[i] << "\t";
	}
	return 0;
}

