#include<stdio.h>
#include<stdlib.h>

typedef struct nod
{
    int data;
    struct nod *next;
}node;

void deletion_from_starting(node *head);
void deletion_from_end(node *head);

int main()
{
    node *head,*newn,*temp;
    head=NULL;
    while(1)
    {
        newn=(node *)malloc(sizeof(node));
        if(newn==NULL)
        {
            printf("Memory Allocation Error.");
            break;
        }    
        printf("Enter elements or type \"-1\" to end the list :");
        scanf("%d",&newn->data);
        if(newn->data==-1)
        {
            break;
        }
        newn->next=NULL;
        if(head==NULL)
        {
            head=newn;
            temp=newn;
        }
        else
        {
            temp->next=newn;
            temp=newn;
        }
    }
    int i=1;
    temp=head;
    while(temp!=NULL)
    {
        printf("Node %d data = %d\n",i,temp->data);
        temp=temp->next;
        i++;
    }
    deletion_from_starting(head);
    deletion_from_end(head);
    return 0;
}

void deletion_from_starting(node *head)
{
    head = head->next;
    node *temp = head;
    int i=1;
    printf("After deletion from starting:\n");
    while(temp!=NULL)
    {
        printf("Node %d data = %d\n",i,temp->data);
        temp=temp->next;
        i++;
    }
}

void deletion_from_end(node *head)
{
    node *temp = head;
    node *temp1 = head;
    while(1)
    {
        if(temp->next->next==NULL)   
        {
            temp->next=NULL;
            break;
        }
        temp=temp->next;
    }
    printf("After deletion from end :\n");
    int  i=1;
    while(temp1!=NULL)
    {
        printf("Node %d data = %d\n",i,temp1->data);
        temp1=temp1->next;
        i++;
    }
}