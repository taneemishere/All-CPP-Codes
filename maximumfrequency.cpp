#include<iostream>
using namespace std;


int main()
{
    int counter[201] = {0}, n, i, input, maximum = 0;
    cout << "Enter n: ";
	cin >> n;
    
    for(i = 1; i <= n; i++) {
        cout << "Enter inputs: ";
		cin >> input;
        
		if(input < 100 && input > 0)
            ++counter[input + 100];
        else
            ++counter[input];
    }
    
    maximum = counter[0];
    
    for (i = 0; i < 201; i++) {
        if (counter[i] > maximum) {
            maximum = i - 100;
        }
    }
    cout << "The element that is occuring maximum time is: " << maximum;

    return 0;
}
