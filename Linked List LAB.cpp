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
		
	} // originally there was no if cond. here but somehow it is not working so I add the if condition. That
		// if the condintion given to the while is false and it quits so check the if condition and print 
		// that the value is not found.
	if(curr==NULL){
		cout << "Not Found!";
	}
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

