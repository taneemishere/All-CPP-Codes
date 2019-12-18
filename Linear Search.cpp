#include <iostream>
using namespace std;

int main(){
	int key;
	int arr[] = {1,5,6,9,11};
	bool check = false;
	cout << "Enter what you want to search: ";
	cin >> key;

	for(int i = 0; i<5; i++){
		if(arr[i] == key){
			cout << "Found!";
			check = true;
			break;
		}
	}
	if(check==false){
			cout << "Not Found!";
	}

	return 0;
}

