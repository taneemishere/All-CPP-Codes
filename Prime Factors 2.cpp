#include <iostream>
using namespace std;

int main(){
	int k;
	
	int list[] = {2,27,31,43,57,59};
	
	int key;
	bool prime = true;
	
	for(int i = 0; i<6; ++i){
		
//		cout << "Common factors of " << list[i] << " are: ";
//		
//		for(int j = 1; j<list[i]; ++j){
//			if(list[i]%j==0){
//				cout << j << " ";
//			}
//		}
		
		cout << endl;
		
		cout << "Prime factors of " << list[i] << " are: ";
		
		for(int k = 0; k < 6; k++){
			bool prime = true;
			
				for(int l = 2; l < list[k]/2; l++){
					if(list[k]%l == 0){
						prime = false;
					}
				}
				if(prime = true){
					cout << list[k] << " ";
				}
		}
		cout << "\n" << endl;
	}

	return 0;
}
