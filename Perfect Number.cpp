#include <iostream>
using namespace std;

int main(){
	int number;
	int var = 0;
	bool check = false;
	
	cout << "Enter a number: ";
	cin >> number;
	
	for(int i = 1; i<number; i++){
		if(number%i == 0){
			var += i;
//			check = true;	
		}
	}
	
	if(var == number){
		cout << "The number is perfect!";
	}
	else{
		cout << "The number is not perfect!";
	}

	return 0;
}

