#include<stdio.h>
#include<stdlib.h>

typedef struct nod
{
    int data;
    struct nod *next;
    struct nod *prev;
}node;

int main()
{
    node *head,*newn,*temp;
    head=NULL;
    while(1)
    {
        newn=(node *)malloc(sizeof(node));
        if (newn==NULL)
            break;
        printf("Enter elements or type \"-1\" to end the list:");
        scanf("%d",&newn->data);
        if(newn->data==-1)
            break;
        
        if(head==NULL)
        {
            head=newn;
            temp=newn;
            newn->prev=NULL;
            newn->next=NULL;
        }
        else
        {
            temp->next=newn;
            newn->prev=temp;
            newn->next=NULL;
            temp=newn;
        }
    }
        int i=1;
        temp=head;
        while (temp!=NULL)
        {
            printf("Node %d element = %d , Previous Address = %d , Current Address = %d and Next Address = %d\n",i,temp->data,temp->prev,temp,temp->next);
            temp=temp->next;
            i++;
        }
    return 0;
}