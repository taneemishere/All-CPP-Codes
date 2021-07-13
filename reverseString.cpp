#include<iostream>

using namespace std;

bool isPalindrome(string str);
bool isStringPalindrome(string str, int first, int last);
bool recIsStringPalindrome(string str, int first, int last);


bool recIsStringPalindome(string str, int first, int last){
	if(str.length() == 1) return true;
	
	if(first == last) return true;	
	
	if(str[first] != str[last])
		return false;
return recIsStringPalindome(str,first +1,last -1);

}
bool isPalindrome(string str){
	return recIsStringPalindome(str,0,str.length()-1);
}



int main(){
	string str;
	cout<<"Enter a string";
	getline(cin,str);
	cout<<endl;
	
	if(isPalindrome(str)){	cout<<" "<<str<< " is a palindrome(via recursion) "<<endl;} else{
	
							cout<<" "<<str<< " is a not palindrome(via recursion) "<<endl;
}
}

