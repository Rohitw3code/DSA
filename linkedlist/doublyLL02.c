#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *previous;
	int data;
	struct node *next;
};

int len(struct node* head){
	int size = 0;
	while(head!=0){
		head = head->next;
	}
	return size+1;
}

void addHeadNode(struct node* *head){
	struct node * newnode = (struct node*) malloc(sizeof(struct node));
	newnode->previous = 0;
	printf("Head Node : ");
	scanf("%d",&newnode->data);
	newnode->next = (*head)->next;
	(*head)->previous = newnode;
	(*head) = newnode;
}


int main(){

	struct node *head,*newnode,*temp;
	int size = 5;

	head = 0;

	for(int i=0;i<size;i++){
		newnode = (struct node*) malloc(sizeof(struct node));

		printf("Enter : ");
		scanf("%d",&newnode->data);

		newnode->previous = 0;
		newnode->next = 0;

		if(head == 0){
			head = newnode;
			temp = newnode;
		}
		else{
			temp->next = newnode;
			newnode->previous = temp;
			temp = newnode;
		}
	}

	addHeadNode(&head);


	printf("\nAll items size %d ",len(head));
	for(int i=0;i<len(head);i++){
		printf("\nitem : %d ",head->data);
		head = head->next;
	}





	return 0;
}