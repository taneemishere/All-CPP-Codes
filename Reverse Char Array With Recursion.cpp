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
	int start = -1;
	int end = 6;
	
	revString(arr, start, end);
				
	cout << "In reverse the array is: " << endl;
	for(int i = 0; i<6; i++){
		cout << arr[i] << "\t";
	}
	

	return 0;
}

