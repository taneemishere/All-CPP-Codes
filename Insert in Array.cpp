#include <iostream>
using namespace std;
// Insertion in array
int main(){
	int n = 5;
	int arr[n] = {5,9,6,7,1};
	int k = 3; // where to add the element (Position)
	int j = n;
	
	while(j>=k){
		arr[j+1] = arr[j];
		j--;
	}
	arr[k] = 11; // the element we add is 11
	n = n+1; // increase the size of array
	
	cout << "Now array is: " << endl;
	for(int i = 0; i<n; i++){
		cout << arr[i] << "\t";
	}
	return 0;
}

