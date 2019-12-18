#include <iostream>
using namespace std;

int main(){
	char arr[] = {'t','a','n','e','e','m'};
	int start = -1;
	int end = 6;
		
	while(start < end){
		char temp = arr[start];  
    	arr[start] = arr[end]; 
    	arr[end] = temp;
		
		start++;
		end--;
	}
			
	cout << "In reverse the array is: " << endl;
	for(int i = 0; i<6; i++){
		cout << arr[i] << "\t";
	}
	

	return 0;
}

