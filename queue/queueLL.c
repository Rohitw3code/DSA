#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;	
};

struct node* front = 0;
struct node* rear = 0;

void enqueue(int x){
	struct node* newnode;
	newnode = (struct node*) malloc(sizeof(struct node));

	newnode->data = x;
	newnode->next = 0;

	if(front == 0 && rear == 0){
		front = newnode;
		rear = newnode;
	}
	else{
		rear->next = newnode;
		rear = newnode;
	}
}

void display(){
	struct node* temp;
	if (front == 0 && rear == 0){
		printf("Empty Queue");
	}
	else{
		temp = front;
		while(temp != 0){
			printf("%d",temp->data);
			temp = temp->next;
		}
	}
}

void dequeue(){
	struct node* temp;
	temp = front;
	if (front == 0 && rear == 0){
		printf("Empty Queue");
	}
	else{
		front = front->next;
		free(temp);
	}
}

void peek(){
	if(front == 0 && rear == 0){
		printf("Empty Queue");
	}
	else {
		printf("%d",front->data);
	}
}



int main(){

	enqueue(5);
	enqueue(6);
	enqueue(8);
	enqueue(7);

	dequeue();
	display();
	peek();


	return 0;
}