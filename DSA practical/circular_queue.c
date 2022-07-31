#include<stdio.h>

int front=-1;
int rear=-1;

void insertion(int q[],int size,int item)
{
    if((rear==size-1 && front==0))
    {
        printf("Queue is full.\n");
    }
    else{
        if(rear==-1)
        rear=front=0;
    else if(rear==size)
            rear=0;
    else
        rear=rear+1;
    q[rear]=item;
    }
}

void deletion(int q[],int size)
{
    int item;
    if(front==-1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        item=q[front];
    if(front==rear)
        front=rear=-1;
    if(front==size-1)
    {
        front=0;
    }
    else
        front=front+1;
    printf("Deleted item = %d\n",item);
    }        
}

void display(int q[])
{
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is empty.\n");
    }
    else
    {
        printf("\nCurrent Status = ");
        for (int i = front; i < rear+1; i++)
        {
            printf("%d ",q[i]);
        }
        
    }
}

void peek(int q[])
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty.\n");
    }
    else printf("\n%d",q[front]);
}

int main()
{
    int q[5];
    insertion(q,5,5);
    insertion(q,5,10);
    insertion(q,5,15);
    insertion(q,5,20);
    insertion(q,5,25);
    display(q);
    insertion(q,5,30);
    display(q);
    deletion(q,5);
    insertion(q,5,30);
    display(q);
    peek(q);
    return 0;
}