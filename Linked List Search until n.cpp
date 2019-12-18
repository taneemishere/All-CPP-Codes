#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};

Node *start, *curr, *pre;

void display(){
	curr = start;
	while(curr != NULL){
		cout << curr->data << endl;
		curr =  curr->link;
	}
}

void search(){

	int key;
	char ch;
	
	do{
		cout << "Enter value you want to find: ";
		cin >> key;
		
		curr = start;
		while(curr!=NULL){
			if(curr->data==key){
				cout << "FOUND!";
				break;
			}
			else{
				curr = curr->link;
			}
		
		}	 
		if(curr==NULL){
			cout << "Not Found!";
		}
		
		cout << "\nWant to search again (y/n): ";
		cin >> ch;
	} while(ch != 'n');
}

int main(){
	
	curr = new Node;
	start = pre = curr;
	
	curr->data = 11;
	curr->link = NULL;
	
	//Second Row	
	
	curr = new Node;
	
	curr->data = 21;
	curr->link = NULL;
	
	pre->link = curr; // this is link part
	pre = curr;
	
	//Third Row
	curr = new Node;
	
	curr->data = 31;
	curr->link = NULL;
	
	pre->link = curr;
	pre = curr;

	display();
	cout << endl;
	search();


	return 0;
}

