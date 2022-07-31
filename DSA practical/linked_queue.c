#include<stdio.h>
#include<stdlib.h>
typedef struct nod
{
    int data;
    struct nod *next;
}node;
int main()
{
    node *front,*rear,*newn;
    front=rear=NULL;
    while(1)
    {
        newn=(node *)malloc(sizeof(node));
        if(newn==NULL)
            break;
        printf("Enter any element or type \"-1\" to end the list:");
        scanf("%d",&newn->data);
        if(newn->data==-1)
            break;
        newn->next=NULL;
        if(rear==NULL)
        {
            rear=front=newn;
        }
        else
        {
            rear->next=newn;
            rear=newn;
        }
    }
    while (front!=NULL)
    {
        printf("Element deleted = %d\n",front->data);
        front=front->next;
    }
    
    return 0;
}