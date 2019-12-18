#include <iostream>
using namespace std;

void fun2(int n){
	if(n>0){
		cout << n << "\t"; // when the print statement is above the recursive call then it'll print in reverse 
		fun2(n-1);
	}
}


int main(){
	
	int x;
	cout << "Enter a number: ";
	cin >> x;
	fun2(x);

	return 0;
}
/*Using recursion print all the number upto n, where n is the entered number
by the user
*/
