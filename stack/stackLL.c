#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head,*newnode, *temp;

void push(){

	newnode = (struct node*) malloc(sizeof(struct node));

	int data;
	printf("Enter : ");
	scanf("%d",&data);

	newnode->data = data;
	newnode->next = 0;

	if(head == 0){
		temp = newnode;
		head = newnode;
	}
	else{
		temp->next = newnode;
		temp = newnode;
	}
}

void display(){
	while(head->next!=0){
		printf("%d",head->data);
		head = head->next;
	}
	printf("%d",head->data);
	head = head->next;
}

int main(){

	push();
	push();
	push();
	push();

	display();





	return 0;
}