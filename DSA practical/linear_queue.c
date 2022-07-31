#include<stdio.h>
#define max 5
int q[max];
int rear=-1;
int front=-1;
void insertq(int item);
void deleteq();
int main()
{
    deleteq();
    insertq(10);
    insertq(5);
    insertq(5);
    insertq(5);
    insertq(5);
    insertq(5);
    deleteq();
    return 0;
}

void insertq(int item)
{
    if(rear==max-1)
    {
        printf("\nQueue is Full.");
        return;
    }
    if(rear==-1)
        front=rear=0;
    else 
        rear=rear+1;
    q[rear]=item;
}

void deleteq()
{
    if(front==-1)
    {
        printf("\nQueue is Empty.");
        return;
    }
    if(front>=0)
    {
        if(front==rear)
        {
            printf("\nItem deleted = %d",q[front]);
            rear=front=-1;
        }
        else 
            {
                printf("\nItem deleted = %d",q[front]);
                front++;
            }
    }
}

void display()
{
    if(front==-1)
    {
        printf("\nQueue is empty.");
        return;
    }
    for(int i=0;i<=rear;i++)
    {
        printf("%d ");
    }
}