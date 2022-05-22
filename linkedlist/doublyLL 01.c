#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *previous;
	int data;
	struct node *next;
};


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

	printf("\nAll items ");
	for(int i=0;i<size;i++){
		printf("\nitem : %d ",head->data);
		head = head->next;
	}





	return 0;
}