#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
};

int main()
{

	struct node *head,*newnode1,*newnode2,*newnode3,*temp;

	newnode1 = (struct node*) malloc(sizeof(struct node));
	newnode2 = (struct node*) malloc(sizeof(struct node));
	newnode3 = (struct node*) malloc(sizeof(struct node));

	head = newnode1;
	printf("Enter a Data 1 : ");
	scanf("%d",&newnode1->data);
	newnode1->next = newnode2;

	printf("Enter a Data 2 : ");
	scanf("%d",&newnode2->data);
	newnode2->next = newnode3;

	printf("Enter a Data 3 : ");
	scanf("%d",&newnode3->data);
	newnode3->next = NULL;

	printf("node1 \nvalue : %d \nCA : %p \nNA : %p \n",newnode1->data,head,newnode1->next);
	printf("\nnode2 \nvalue : %d \nCA : %p \nNA : %p \n",newnode2->data,newnode2,newnode2->next);
	printf("\nnode3 \nvalue : %d \nCA : %p \nNA : %p \n",newnode3->data,newnode3,newnode3->next);
	


	return 0;
}