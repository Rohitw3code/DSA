#include<stdio.h>
#include<stdlib.h>

typedef struct nod
{
    int data;
    struct nod *next;
}node;


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
    return 0;
}