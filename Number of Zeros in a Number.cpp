#include <iostream>
using namespace std;

int main(){
	int number;
	int tP, hP, thP;
	int rem;
	int tZeros = 0;
	
	
	cout << "Enter a number: ";
	cin >> number;
	
	
	rem = number%1000;
	thP = number/1000;
	cout << "The digit at Thousand place is: " << thP << endl;
	
	hP = rem/100;
	rem = rem%100;
	cout << "The digit at Hundred place is: " << hP << endl;

	tP = rem/10;
	rem = rem%10;
	cout << "The digit at Ten place is: " << tP << endl;
	
	
	cout << "The digit at Unit place is: " << rem << endl;
	
	if(rem==0){
		tZeros++;
	}
	else if(tP==0){
		tZeros++;
	}
	else if(hP==0){
		tZeros++;
	}
	else if(thP==0){
		tZeros++;
	}
	
	cout << "\nTotal number of zeros is: " << tZeros;

	return 0;
}

