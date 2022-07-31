#include<stdio.h>
#include<stdlib.h>

typedef struct nod
{
    int data;
    struct nod *next;
}node;

void insertion_from_starting(node *head);
void insertion_from_end(node *head);

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
    insertion_from_starting(head);
    return 0;
}

void insertion_from_starting(node *head)
{
    node *new;
    new=(node *)malloc(sizeof(node));
    printf("Enter element to add as a first node:");
    scanf("%d",&new->data);
    new->next=head;
    head=new;
    node *temp=new;
    int i=1;
    while(temp!=NULL)
    {
        printf("Node %d data = %d\n",i,temp->data);
        temp=temp->next;
        i++;
    }

    insertion_from_end(head);
}

void insertion_from_end(node *head)
{
    node *new;
    node *temp=head;
    new=(node *)malloc(sizeof(node));
    printf("Enter element to add as a last node:");
    scanf("%d",&new->data);
    new->next=NULL;
    while (1)
    {
        if(temp->next==NULL)
        {
            temp->next=new;
            temp=new;
            break;
        }
        temp=temp->next;
    }
    node *temp1=head;

    int i=1;
    while(temp1!=NULL)
    {
        printf("Node %d data = %d\n",i,temp1->data);
        temp1=temp1->next;
        i++;
    }
}