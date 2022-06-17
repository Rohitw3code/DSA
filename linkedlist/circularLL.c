#include <stdio.h>
#include <stdlib.h>


struct node{
	struct node* previous;
	struct node* next;
	int data;
}


int main(){
	
	struct node *head,*newnode, *temp;
	int size = 5;


	for (int i = 0; i < size; ++i)
	{
		newnode = (struct node*) malloc(sizeof(struct node));
		printf("Enter a Data : ");
		scanf("%d",&newnode->data);
		newnode->next = 0;

		if (head == 0)
		{
			head = newnode;
			temp = newnode;
		}
		else{
			temp->next = newnode;
			temp = newnode;
		}

	}

	temp.next = head;




	return 0;
}