#include <iostream>
using namespace std;

#define SIZE 10

class Queue{
	int a[SIZE];
	int rear;
	int front;
	
	public:
		Queue(){
			rear = front = -1;
		}
		
		void enqueue(int x);
		int dequeue();
		void display();
};

void Queue::enqueue(int x){
	if(front==-1){
		front++;
	}
	if(rear==SIZE-1){
		cout << "Queue is full";
	}
	else{
		a[++rear] = x;
	}
}

int Queue::dequeue(){
	return a[++front];
}

void Queue::display(){
	int i;
	for(i=front; i<=rear; i++){
		cout << a[i] << endl;
	}
}


int main(){
	
	Queue q;
	q.enqueue(10);
	q.enqueue(100);
	q.enqueue(1000);
	q.enqueue(0);
	q.enqueue(1001);
	q.enqueue(1002);
	q.enqueue(1003);
	
	q.display();

	return 0;
}

