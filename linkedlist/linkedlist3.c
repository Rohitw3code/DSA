#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

void TraverseList(struct node* head,int size){
	for (int i = 0; i < size; ++i)
	{
		printf("value : %d\n",head->data);
		head = head->next;
	}	
	printf("\n");
}

void addNodeAtPos(struct node*head,int size){
	int pos;
	printf("Enter Pos : ");
	scanf("%d",&pos);
	for(int i=0;i<size;i++){
		head = head->next;
		if(i == pos-2){
			struct node* newnode = (struct node*) malloc(sizeof(struct node));		
			printf("Pos(%d) Enter Data : ",pos);
			scanf("%d",&newnode->data);
			newnode->next = head->next;
			head->next = newnode;			
		}
	}
}


void addNewNodeInStart(struct node* *head){
		struct node* newnode = (struct node*) malloc(sizeof(struct node));		
		printf("\nNew Start Node Data : ");
		scanf("%d",&newnode->data);

		newnode->next = *head;
		*head = newnode;
}

void addNewNodeInEnd(struct node* head,int size){
		struct node* newnode = (struct node*) malloc(sizeof(struct node));		
		printf("\nNew End Node Data : ");
		scanf("%d",&newnode->data);
		newnode->next = 0;

		for(int i=0;i<size-1;i++){
			head= head->next;
		}
		head->next = newnode;
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


	TraverseList(head,size);
	// addNewNodeInStart(&head);
	// addNewNodeInEnd(head,4);
	addNodeAtPos(head,size);
	TraverseList(head,size+1);		

	return 0;
}