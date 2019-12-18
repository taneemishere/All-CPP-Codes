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
	// declare array to store the elements
	char arr[] = {'f','a','r','h','a','f'};
	// Second array for storing the original elements
	char arr2[6];
	int start = -1;
	int end = 6;
	
	// copying the arr elements to arr2 for later comparisons
	for(int i = 0; i<6; i++){
		arr2[i] = arr[i];
	}
	
	// dispalying original elements at original position
	cout << "The string is: " << endl;
	for(int k = 0; k<6; k++){
		cout << arr2[k];
	}
	
	// calling the recursive function to reverse the string
	revString(arr, start, end);
	
	// displaying the string in reverse order after the recursive fucntion make it in reverse			
	cout << "\n\nIn reverse the string is: " << endl;
	for(int i = 0; i<6; i++){
		cout << arr[i];
	}
	
	// checking whether the string is palindrome or not
	cout << endl;
	bool check = false;
	// looping through and comparing both array's elements at the same j's index, where j>=0 and <6
	for(int j = 0; j<6; j++){
		if(arr[j] == arr2[j]){
			check = true; 		// if the element at the same index are equal in both arrays, check = true
		}
		else{
			check = false;		// otherwise, check = false
			break;
			/*
			the break is for when any of the element at the same index in both
			arrays are not equal so we should quit the loop, without using the 
			break, if in the array, the first and last elements are equal then 
			at the last the check will be true and in below if condition it 
			will say the string is palindorme
			*/				
		}
	}
	if(check == true){
		cout << "\n\nString is palindrome" << endl;
	}
	else if(check == false){
		cout << "\n\nString is not palindrome" << endl;
	}
	
	return 0;
}

