#include <stdio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x){
	if(rear == N-1){
		printf("stackoverflow");
	}
	else if(front == -1 && rear == -1){
		rear = 0;
		front = 0;
		queue[front] = x;
	}
	else{
		rear ++;
		queue[rear] = x;
	}
}

void dequeue(){
	if (front == -1 && rear == -1){
		printf("underflow");
	}
	else if(front == rear){
		front = -1;
		rear = -1;
	}
	else{
		front ++;
	}
}

void display(){
	if(front == -1 && rear == -1){
		printf("Empty Queue");
	}
	else{
		for (int i = front; i < rear+1; ++i){
			printf("%d ",queue[i]);
		}
	}
}


int main(){

	enqueue(5);
	enqueue(4);
	enqueue(-3);
	dequeue();
	enqueue(6);
	display();

	return 0;
}