#include <iostream>
using namespace std;

int main(){
	int size = 11;
	int arr[size] = {2,2,2,4,6,8,8,9,9,9,9};
	int count1 = 0, count2 = 0;
	
	for(int i = 0; i<size; i++){
		if(arr[i] == arr[i+1]){
			count1++;
		}
		else{
			count2++;
		}
	}
	cout << count1 << " time occurs count1 and " << count2 << " times occurs count2." << endl;
	
	return 0;
}

