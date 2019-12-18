#include <iostream>
#include <string.h>
using namespace std;

int i = 0;
bool p1 = true;

char p(char text[], int length){
	if(i < length/2){
		if(text[i] != text[length-1]){
			p1 = false;
		}
		
		swap(text[i], text[length-i-1]);
		i++;
		return p(text, length);
	}
	else{
		return text[20];
	}
}


int main(){
	char text[20];
	int length;
	
	cout << "Enter a string: ";
	cin >> text;
	
	length = strlen(text);
	text[20] = p(text, length);
	
//	cout << text;
	
	if(p1){
		cout << "String is Palindrome!\n";
	}
	else{
		cout << "String is not Palindrome!\n";
	}

	return 0;
}

