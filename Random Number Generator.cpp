#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(NULL));
	
	cout << (rand()%10 +1);

	return 0;
}

