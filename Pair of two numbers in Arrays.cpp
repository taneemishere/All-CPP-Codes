#include <iostream>
using namespace std;

int main(){
	
	int A[] = {-1,2,5,10,3,4};
	int B[] = {4,1,2,10,5,14};
	
	int target = 24;
	
	for(int i = 0; i<6; i++){
		for(int j = 0; j<6; j++){
			int sum = A[i]+B[j];
			if(sum == 24 || sum == target-1 || sum == target+1){
				cout << "Alright!!!!" << endl;
				cout << "The pair is: " << A[i] << " and " << B[j] << endl;
				break;
			}
		}
	}

	return 0;
}

