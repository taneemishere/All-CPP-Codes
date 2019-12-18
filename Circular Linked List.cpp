#include <iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};

Node *start, *curr, *pre;

void display(){
	
	curr = start;
	if(start != NULL){
		do{
			cout << curr->data << endl;
			curr = curr->link;
		} while(curr != start);
	}
}

void search(){
	bool check = false;
	int key;
	cout << "Enter value you want to find: ";
	cin >> key;
	
	curr = start;
	while(curr!=NULL){
		if(curr->data==key){
			cout << "FOUND!";
			check = true;
			break;
		}
		else{
			curr = curr->link;
		}
		
	}
	if(check == false){
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

	//Fourth Row
	curr = new Node;
	
	curr->data = 41;
	curr->link = start; // for circular this statement creates the circle as it links to the start and in other nodes this was to be NULL
	
	pre->link = curr;
	pre = curr;

	display();
	cout << endl;
	search();


	return 0;
}

