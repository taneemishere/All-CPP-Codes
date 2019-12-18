#include <iostream>
using namespace std;

int main(){
	string arr[] = {"a","b","b","b","a","a","a","a","c","c"};
	
	for(int i = 0; i<11; ++i){
		if(arr[i-1] < arr[i]){
			string temp = arr[i-1];
			arr[i-1] = arr[i];
			arr[i] = temp;
		}
	}
	
	for(int k = 0; k<11; ++k){
		cout << arr[k] << "\t";
	}

	return 0;
}

