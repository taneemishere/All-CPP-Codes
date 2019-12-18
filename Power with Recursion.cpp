#include <iostream>
using namespace std;

long power(int val, int pow){
	if(pow!=0){
		return (val * power(val, pow - 1));
	}
	
	return 1;
}


int main(){
	
	int value, po;
	long result;
	
	cout << "Enter a number: ";
	cin >> value;
	
	cout << "Enter to the power: ";
	cin >> po;
	
	result = power(value, po);
	cout << "\n" << value << " to the power " << po << " = " << result;

	return 0;
}

