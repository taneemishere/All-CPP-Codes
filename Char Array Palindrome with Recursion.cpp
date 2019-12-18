#include <iostream>
using namespace std;

bool revString(char chArr[], int first, int last){
	if(first >= last){
		return false;
	}
	else{
		char temp = chArr[first];  
    	chArr[first] = chArr[last]; 
    	chArr[last] = temp;
    	
    	return revString(chArr, first+1, last-1);
	}
}


int main(){
	char arr[] = {'f','a','r','h','a','n'};
	char arr2[3];
	int start = -1;
	int end = 6;
	
	for(int i = 0; i<6; i++){
		arr2[i] = arr[i];
	}
	
	revString(arr, start, end);
				
	cout << "In reverse the array is: " << endl;
	for(int i = 0; i<6; i++){
		cout << arr[i];
	}
	
	cout << "\n\nSecond array is: " << endl;
	for(int k = 0; k<6; k++){
		cout << arr2[k];
	}
	
	cout << endl;
	bool check = false;
	for(int j = 0; j<6; j++){
		if(arr[j] == arr2[j]){
			check = true;
		}
		else{
			check = false;
		}
	}
	if(check == true){
		cout << "\nString is palindromyyuyyyyyy" << endl;
	}
	else if(check == false){
		cout << "String is not palindromyyyyy" << endl;
	}
	

	return 0;
}

