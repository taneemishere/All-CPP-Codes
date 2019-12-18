#include <iostream>
#include<conio.h>
using namespace std;
	
	struct Node{
		int data;
		Node *link;
	};
	
	Node *start, *pre, *curr, *n, *temp;
	
void swap(struct Node* n1,struct Node* n2) {
    int temp = n1->data;
    n1->data = n2 -> data;
    n2->data = temp;

	cout<< "n1-> " << n1->data << " \n n2-> " << n2->data;

}

void display(){
	curr = start;
	while(curr!=NULL){
		cout<<curr->data<<endl;
		curr = curr->link;
	}
}

void search(){
	int value;
	cout<<"Enter value to search";
	cin>>value;
	curr = start;
	while(curr!=NULL){
		
		if(curr->data == value){ 
			cout<<"Found \n";
			break;
		} 
		
		else{
			curr = curr->link;
		}
	}
	if(curr==NULL){
		cout << "Not found!";
	}
}

void delNodeStart(){
	temp = start;
	start = start->link;
	delete temp;
}


void delNodeEnd(){
	pre = start;
	temp = start->link;
	
	if(temp->link!=NULL){
		pre = pre->link;
	}
	
	pre->link = NULL;
	delete temp;
}
int main(){
	
	curr = new Node;
	start = pre = curr;
	
	curr->data = 11;
	curr->link = NULL;
	
	
	curr = new Node;
	
	curr->data = 21;
	curr->link = NULL;
	
	pre->link = curr; 
	pre = curr;
	

	curr = new Node;
	
	curr->data = 31;
	curr->link = NULL;
	
	pre->link = curr;
	pre = curr;
	
	curr = new Node;
	
	curr->data = 41;
	curr->link = NULL;
	
	pre->link = curr;
	pre = curr;
	
	curr = new Node;
	
	curr->data = 51;
	curr->link = NULL;
	
	pre->link = curr;
	pre = curr;
	
	cout << "All Nodes data is: " << endl;
	display();
	
	char chs;
	int option;
	do{
	cout<<"\n\nNow choose any option \n\n" 
		<<"1. Delete a Node at the start \n"
		<<"2. Delete a Node at the end \n"
		<<"3. Search for a Node's data \n"
		<<"4. Display all Node's data \n"
		<<"5. Swap two Nodes \n\n";
		
		cin >> option;
	
	
	switch(option){
		
		case 1:
			delNodeStart();
			cout<<"Node deleted the at start!\n" << endl;
			break;
		
		case 2:
			delNodeEnd();
			cout<<"Node delete at end position!\n" << endl;
			break;
		
		case 3:
			search();
			cout<<"Searching for a Nodes's data.....\n" << endl;
			break;
		
		case 4:
			cout<<"Displaying all the Node's data.....\n" << endl;
			display();	
			break;
		
		case 5:
			cout << "Swapping two Nodes.....\n" << endl;
			swap(pre->data, curr->data); 
			break;
	}
	
		cout<<"Do you wish to continue? Y/N" <<endl;
		cin>>chs;
	} 
	while(chs != 'n');
	 
return 0;
}

