#include <iostream>
using namespace std;

struct Node{
	int rollNo;
	string name;
	float cgpa;
	
	Node *link;
};

Node *start, *curr, *pre;

void display(){
	curr = start;
	while(curr != NULL){
		cout << "Roll No:  " << curr->rollNo << endl;
		cout << "Name: \t  " << curr->name << endl;
		cout << "CGPA: \t  " << curr->cgpa << endl;
		cout << endl;
		
		curr =  curr->link;
	}
}

//void search(){
//	int key;
//	cout << "Enter value you want to find: ";
//	cin >> key;
//	
//	curr = start;
//	while(curr!=NULL){
//		if(curr->data==key){
//			cout << "FOUND!";
//			break;
//		}
//		else{
//			curr = curr->link;
//		}
//		
//	}
//	if(curr==NULL){
//		cout << "Not Found!";
//	}
//}

void createNode(char query){
	
	if(query == 'y' || query == 'Y'){
		
		curr = new Node; 
		
		cout << "\nEnter data for new student record" << endl;
		cout << "Enter Roll No: ";
		cin >> curr->rollNo;
		
		cout << "Enter Name: ";
		cin >> curr->name;
		
		cout << "Enter CGPA: ";
		cin >> curr->cgpa;
		
		char choice;
		cout << "\nWhere do you want to add the new Node\nat s (Start), m (Middle) or at e (End): ";
		cin >> choice;
		
		switch(choice){
			// adding new Node at start
			case 's':
			case 'S': 
		
				curr->link = start;
				start = curr;
				break;
			
			// adding new Node at the end
			case 'e':
			case 'E':

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
	cout << endl;
}

int main(){
	
	curr = new Node;
	start = pre = curr;
	
	curr->rollNo = 1100;
	curr->name = "Muhammad Khalid";
	curr->cgpa = 3.02;
	curr->link = NULL;
	
	/////////////////	
	
	curr = new Node;
	
	curr->rollNo = 2100;
	curr->name = "Arshad Kamal";
	curr->cgpa = 2.89;
	curr->link = NULL;
	
	pre->link = curr; 
	pre = curr;
	
	////////////////
	curr = new Node;
	
	curr->rollNo = 3100;
	curr->name = "Bilal Khan";
	curr->cgpa = 3.89;
	curr->link = NULL;
	
	pre->link = curr; 
	pre = curr;

	display();
	cout << endl;
	
	char option;
	cout << "\nDo you want to add another record (y/n): ";
	cin >> option;
	
	createNode(option);
	
	cout << "Record Updated!" << endl << endl;
	display();	
//	search();


	return 0;
}

