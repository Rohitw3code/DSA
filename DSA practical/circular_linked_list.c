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
            break;
        printf("Enter any element or type \"-1\" to end the list:");
        scanf("%d",&newn->data);
        if(newn->data==-1)
            break;
        if(head==NULL)
        {
            head=newn;
            temp=newn;
            newn->next=NULL;
        }
        else
        {
            temp->next=newn;
            temp=newn;
            newn->next=head;
        }
    }
    int i=1;
    temp=head;
        do
        {
            printf("Element %d = %d\t Current Address = %d\t Next Address = %d\n",i,temp->data,temp,temp->next);
            temp=temp->next;
            i++;
        }while(temp!=head);
    return 0;
}