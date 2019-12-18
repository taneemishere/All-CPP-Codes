#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a[]  = {2,13,19,31,47};
	int key = 39;
	
	int high = 5;
	int low = 0;
	int mid = floor((high+low)/2);
	
	while(low<=high){
		if(key==a[mid]){
			cout << "Element Found";
			break;
		}
		else if(key>a[mid]){
			low = mid + 1;
			mid = (low+high)/2;
		}
		else{
			high = mid - 1;
			mid = (low+high)/2;
		}		
		
	}
	
	return 0;
}
