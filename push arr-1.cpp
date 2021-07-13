#include <iostream>
using namespace std;

void push(int);

int pop();

const int size=5;

int stack[size], top=-1;

int main(){
	int op = 0;
//	push(3);
//	push(5);
//	push(34);
//	push(56);
//	push(11);
	cout << "Want to pop all!";
	cin >> op;
	if(op == 1){
		cout<<pop()<<endl;
//		cout<<pop()<<endl;
//		cout<<pop()<<endl;
//		cout<<pop()<<endl;
//		cout<<pop()<<endl;
//		cout<<pop()<<endl;	
	}
	
	return 0;
}

void push(int a)
{
	bool isfull;
	if(top==size-1)
	{
	isfull=true;
	goto y;
	//cout<<"stack is full";
	//break;
	}
	else
	{
	top++;
	stack[top]=a;
	}

	y:if(isfull == true)
	{
		cout<<"stack is full\n";
	}
}	


int pop(){
	//bool isempty;
	if(top==-1){
	cout<<"stack empty";
	//goto x;
	//isempty=true;
	//goto x;
	}
	
	else{
		int t;
		t = stack[top];
		top--;
	   
		return t;
	}
//x:cout<<"stack is empty"<<endl;
}
