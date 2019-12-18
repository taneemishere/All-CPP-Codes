#include <iostream>
using namespace std;

// Doubly linked list
struct NodeD{
	int data;
	NodeD *left;
	NodeD *right;
};

NodeD *start, *curr, *pre;

void display(){
	cout << "\nIn forward direction: " << endl;
	curr = start;
	while(curr != NULL){
		cout << curr->data << endl;
		curr =  curr->right; // go from start that is our curr from the statement curr = start, to the right side of the nodes so in forward direction
	}
	
	cout << "\nIn backward direction: " << endl;
	curr = pre;
	while(curr != NULL){
		cout << curr->data << endl;
		curr =  curr->left; // go from pre that is our curr from the statement curr = pre, to the left side of the nodes so in backward direction
	}
}

int main(){

	curr = new NodeD;
	start = pre = curr;
	curr->data = 11;
	curr->left = NULL;
	curr->right = NULL;
	
	
	curr = new NodeD;
	curr->data = 12;
	curr->left = pre;
	curr->right = NULL;
	
	pre->right = curr;
	pre = curr;
	
	curr = new NodeD;
	curr->data = 13;
	curr->left = pre;
	curr->right = NULL;
	
	pre->right = curr;
	pre = curr; 

	cout << "All Node's data is" << endl;
	display();
	
//	char option;
//	cout << "\nWant to add another Node: ";
//	cin >> option;
//	if(option == 'y'){
		
		// adding a new node
		
		curr = new NodeD;
		cout << "\nAdding new Node at the start..." << endl;
		cout << "Enter data for the new Node: ";
		cin >> curr->data;
		
		// adding a new node at the start
		
		curr->right = start; // curr is our new node and start is the first node
		start->left = curr;	
		curr->left = NULL;
		start = curr;		// now our curr, that is our new node, is now our first node	

		cout << "\nNow all Node's data is" << endl;
		display();
		

		curr = new NodeD;
		cout << "\nAdding Node at the end..." << endl;
		cout << "Enter data for the new Node: ";
		cin >> curr->data;

		// adding node at the end
		pre->right = curr;
		
		curr->left = pre;
		pre->right = curr;
		curr->right = NULL;

//	}
	
	cout << "\nNow all Node's data is" << endl;
	display();
	

	return 0;
}

