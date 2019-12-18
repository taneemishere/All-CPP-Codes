#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a[]  = {47,31,19,13,2,1};
	
	int key = 19;
	
	int high = 5;
	int low = 0;
	int mid = floor((high+low)/2);
	
	while(low<=high){
		
		if(key==a[mid]){
			cout << "Element Found";
			break;
		}
		else if(key<a[mid]){
			low = mid + 1;
			mid = (low+high)/2;
		}
		else{
			high = mid - 1;
			mid = (low+high)/2;
		}		
	}
	
	if(low>high){
			cout << "Not found!";	
	}
	
	return 0;
}
