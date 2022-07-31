#include<stdio.h>
#define max 10
int stack[max];
int top=-1;

void push(int item);
void pop();
void display();

int main()
{
    push(4);
    push(3);
    display();
    push(10);
    display();
    pop();
    display();
    return 0;
}

void push(int item)
{
    if(top==max-1)
        printf("\nStack overflowed.");
    else 
    {
        top=top+1;
        stack[top]=item;
    }
}

void pop()
{
    if(top==-1)
        printf("\n\nStack underflowed.");
    else 
    {
        printf("\nPopped element is %d",stack[top]);
        top=top-1;
    }
}

void display()
{
    if(top==-1)
        printf("\nStack underflow");
    else
    {
        printf("\nTop element is %d\nCurrent status of stack : ",stack[top]);
        for(int i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
}