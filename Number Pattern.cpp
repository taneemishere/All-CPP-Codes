#include <iostream>
using namespace std;

int main(){
	int i, j, n;
	cout << "Enter number: ";
	cin >> n;
	for(i=1; i<=n; i++){
		for(j=i; j>1; j--){
			cout << " ";
		}
		for(j=i; j<=n; j++){
			cout << j << " ";
		}
		cout << endl;
	}
	
	for(i=n; i>=1; i--){
		for(j=i; j>1; j--){
			cout << " ";
		}
		for(j=i; j<=n; j++){
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}

