#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main(){
	struct node *head,*newnode, *temp;
	head = 0;
	for (int i = 0; i < 3; ++i)
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
	for (int i = 0; i < 3; ++i)
	{
		printf("%d\n",head->data);
		head = head->next;
	}
	return 0;
}