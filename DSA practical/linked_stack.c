#include<stdio.h>
#include<stdlib.h>
typedef struct nod
{
    int data;
    struct nod *next;
}node;

int main()
{
    node *newn,*head,*top;
    top=NULL;
    while(1)
    {
        newn=(node *)malloc(sizeof(node));
        if(newn==NULL)
            break;
        printf("Enter any element or type \"-1\" to end the list:");
        scanf("%d",&newn->data);
        if(newn->data==-1)
            break;
        newn->next=top;
        top=newn;
    }
    while (top!=NULL)
    {
        printf("Deleted element = %d\n",top->data);
        top=top->next;
    }
    
    return 0;
}