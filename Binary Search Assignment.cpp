#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int com = 0;
	int pos = 0;	
	
	int a[]  = {47,31,19,13,2,1};
	
	int key = 11;
	
	int high = 5;
	int low = 0;
	int mid = floor((high+low)/2);
	
	while(low<=high){
		
		com++;
		
		if(key==a[mid]){
			pos = mid+1;
			cout << "Element Found at position " << pos << endl;
			cout << "After " << com << " comparison(s).";
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
			cout << "Element Not found!" << endl;
			cout << "After " << com << " comparison(s).";	
	}
	
	return 0;
}
