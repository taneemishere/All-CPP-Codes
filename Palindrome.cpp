#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char a[100], b[100];
	
	cout << "Enter a string: ";
	gets(a);

	strcpy(a,b);
	strrev(b);
	
	if(a != b){
		cout << "\nThe String is Palindrome\n";
	}
	else{
		cout << "\nThe String is not a Palindrome" << endl;
	}
	return 0;
}

