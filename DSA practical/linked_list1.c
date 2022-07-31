#include<stdio.h>
#include<stdlib.h>

typedef struct nod
{
    int data;
    struct nod *next;
}node;

void searching(node *temp,int key);

int main()
{
    // int size;
    node *newn1,*newn2,*newn3,*head;
    
    newn1=(node *)malloc(sizeof(node));
    printf("Enter node 1 data:");
    scanf("%d",&newn1->data);
    head=newn1;
    
    newn2=(node *)malloc(sizeof(node));
    newn1->next=newn2;
    printf("Enter node 2 data:");
    scanf("%d",&newn2->data);

    newn3=(node *)malloc(sizeof(node));
    newn2->next=newn3;
    printf("Enter node 3 data:");
    scanf("%d",&newn3->data);
    newn3->next=NULL;

//  Displaying elements  --->

    // printf("Node 1 data = %d , Current aaddress = %p and Next address = %p\n",newn1->data,newn1,newn1->next);
    // printf("Node 2 data = %d , Current aaddress = %p and Next address = %p\n",newn2->data,newn2,newn2->next);
    // printf("Node 3 data = %d , Current aaddress = %p and Next address = %p\n",newn3->data,newn3,newn3->next);

//  OR --->

    int i=1,key;
    node *temp=head;
    while(temp!=NULL)
    {
        printf("Node %d data = %d\n",i,temp->data);
        temp=temp->next;
        i++;
    }

    printf("Enter searching element:");
    scanf("%d",&key);
    
    searching(head,key);
    
    return 0;
}

void searching(node *temp,int key)
{
    while (temp!=NULL)
    {
        if(temp->data == key)      
        {
            printf("Search Successfull");
            return;
        }
        temp=temp->next;
    }
    printf("Search Unsuccessfull");
}