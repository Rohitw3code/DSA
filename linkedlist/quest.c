#include <stdio.h>
#include <stdlib.h>

struct node{
	char name[10];
	int roll;
	char subject[10];
	int marks;
	struct node *next;
};

 
void delete(struct node* *head,int *size,int pos){
    struct node *temp = *head;    
    int i;                    
    if(pos==0)    {
            printf("\nElement deleted is : %s\n",temp->name);
        	(*head) = (*head)->next;
        	free(temp);
      }
    else {
        for(i=0;i<pos-1;i++)
        {
            temp=temp->next;
        }
        struct node *del = temp->next;
        temp->next=temp->next->next;
        printf("\nElement Name deleted is : %s\n",del->name);      
        del->next=NULL;
        free(del);                          
    }
    (*size) = (*size) - 1;
}

void TraverseList(struct node* head,int size){
	for (int i = 0; i < size; ++i)	{
		printf("Name : %s\n",head->name);
		printf("Roll : %d\n",head->roll);
		printf("Subject : %s\n",head->subject);
		printf("Marks : %d\n\n",head->marks);
		head = head->next;
	}	
	printf("\n");
}


int main(){
	struct node *head,*newnode, *temp;
	head = 0;
	int size;

	printf("Enter the size of Linkedlist : ");
	scanf("%d",&size);

	for (int i = 0; i < size; ++i)
	{
		newnode = (struct node*) malloc(sizeof(struct node));
		printf("Enter a Name : ");
		scanf("%s",newnode->name);

		printf("Enter a Roll : ");
		scanf("%d",&newnode->roll);

		printf("Enter a Subject : ");
		scanf("%s",newnode->subject);

		printf("Enter a Marks : ");
		scanf("%d",&newnode->marks);

		printf("\n");
	
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

	delete(&head,&size,1); // To delete the node with index 1

	TraverseList(head,size);


	return 0;

}
