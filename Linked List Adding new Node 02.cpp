#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};

Node *start, *curr, *pre;

void display(){
	cout << endl;
	curr = start;
	while(curr != NULL){
		cout << curr->data << endl;
		curr =  curr->link;
	}
}


int main(){
	
	curr = new Node;
	start = pre = curr;
	curr->data = 11;
	curr->link = NULL;
	
	//Second Row	
	
	curr = new Node;
	curr->data = 12;
	curr->link = NULL;
	
	pre->link = curr; // this is link part
	pre = curr;
	
	//Third Row
	curr = new Node;
	curr->data = 13;
	curr->link = NULL;
	
	pre->link = curr;
	pre = curr;
	
	cout << "All Node's data is: ";
	display();
	
	char option;
	cout << "\nDo you want to add another Node (y/n): ";
	cin >> option;
	if(option == 'y' || option == 'Y'){
		
		curr = new Node; // if user want to add a new node and enter yes, allocate the memory 
		
		cout << "\nEnter data for new Node: "; // Enter the data for the new Node so that we won't need to enter the data after asking about where to add the new Node
		cin >> curr->data;
		
		char choice;
		cout << "\nWhere do you want to add the new Node\nat s (Start), m (Middle) or at e (End): ";
		cin >> choice;
		
		switch(choice){
			// adding new Node at start
			case 's':
			case 'S': 
//				cout << "\nEnter data for new Node: ";
//				cin >> curr->data;
		
				curr->link = start;
				start = curr;
				break;
			
			// adding new Node at the end
			case 'e':
			case 'E':
//				cout << "\nEnter data for new Node: ";
//				cin >> curr->data;
				curr->link = NULL;
				
				pre->link = curr;
				pre = curr;
				break;
			
			// adding new Node at the middle
			case 'm':
			case 'M':
				Node *temp;
				temp = new Node;
				temp = curr;
				
//				cout << "\nEnter data for new Node: ";
//				cin >> curr->data;
				
				curr = start;
				
				int position;
				cout << "\nEnter position you want to add: ";
				cin >> position;
				
				int i = 1;
				while(i != position){
					i = i+1;
					pre = curr;
					curr = curr->link;
				}
				
				temp->link = curr;
				pre->link = temp;
		}
		
	}
	
	else {
		return 0;
	}
	
	cout << "Now all the Node's data is: ";
	display();
	return 0;
}


