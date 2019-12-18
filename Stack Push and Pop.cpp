#include <iostream>
using namespace std;

int n = 10, stack[10], top = -1;

void push(int value){
	if(top > n-1){
		cout << "Stack Overflow" << endl;
	}
	else{
		top++;
		stack[top] = value;
	}
}

void pop(){
	if(top <= -1){
		cout << "Stack Underflow" << endl;
	}
	else{
		cout << "The popped element is " << stack[top] << endl;
		top--;
	}
}

void display(){
	if(top >= 0){
		cout << "Stack elements are: ";
		for(int i = 0; i <= top; ++i){
			cout << stack[i] << " ";
		}
		cout << endl;
	}
	else{
		cout << "Stack is empty!" << endl;
	}
}

int main(){
	int choice, value;
	
	cout << "1. Push in Stack " << endl;
	cout << "2. Pop from Stack " << endl;
	cout << "3. Display Stack elements " << endl;
	cout << "4. Exit " << endl;

	do{
		cout << "\nEnter any choice: ";
		cin >> choice;
		switch(choice){
			case 1: {
				cout << "Enter value to be pushed: ";
				cin >> value;
				push(value);
				break;
			}
			case 2: {
				pop();
				break;
			}
			case 3: {
				display();
				break;
			}
			case 4: {
				cout << "Exit" << endl;
				break;
			}
			default: {
				cout << "Invalid choice ;-)" << endl;
				break;
			}
		}
		
	} while(choice != 4);
	
	return 0;
}

