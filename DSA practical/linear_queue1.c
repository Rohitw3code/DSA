#include<stdio.h>

int front=-1;
int rear=-1;

void insertion(int q[],int size,int item)
{
    if(rear==size-1)
        printf("\nQueue is full.\n");
    else if(front==-1 && rear==-1)
    {
        rear=front=0;
        q[rear]=item;
    }
    else
    {
        rear++;
        q[rear]=item;
    }
}

void deletion(int q[])
{
    int item;
    item=q[front];
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is empty.\n");
    }
    
    else if(front==rear)        
    {
        printf("\nItem deleted = %d",item);
    }
    else 
    {
        front++;
        printf("\nItem deleted = %d",item);
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
        for (int i = front; i <= rear; i++)
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
    insertion(q,5,30);
    display(q);
    deletion(q);
    deletion(q);

    peek(q);

    return 0;
}