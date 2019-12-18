#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int a[]  = {47,31,19,13,2,1};
	
	int key = 0;
	
	int high = 5;
	int low = 0;
	int mid = floor((high+low)/2);
	int count = 0;
	
	
	while(low<=high){
		count++;
		if(key==a[mid]){
			cout << "After " << count << " comaparisons Element Found";
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
			cout << "After " << count << " comaparisons element Not found!";	
	}
	
	return 0;
}
