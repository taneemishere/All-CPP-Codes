#include <iostream>
using namespace std;

int main(){
	int k;
	
	int list[] = {15,27,31,45,50,59};
	
	int key;
	bool prime = true;
	
	for(int i = 0; i<6; ++i){
		
		cout << "Common factors of " << list[i] << " are: ";
		
		for(int j = 1; j<list[i]; ++j){
			if(list[i]%j==0){
				cout << j << " ";
			}
		}
		
		cout << endl;
		
		cout << "Prime factors of " << list[i] << " are: ";
		bool prime = true;
		
		for(int k = 2; k<=list[i]; k++){
			if(list[i] % k == 0){
				for(int l = 2; l<k; l++){
					if(k%l == 0){
						prime = false;
					}
				}
				if(prime = true){
					cout << k << " ";
				}
			}
		}
		cout << "\n" << endl;
	}

	return 0;
}

