#include<stdio.h>
int main()
{
    char ch[]="()(()()()()())";
    int top=-1;
    char stack[10];
    int push=0,pop=0;
    for(int i = 0; i<sizeof(ch);i++)
    {
        if(ch[i]=='(')
        {
            top++;
            stack[top]='(';
            push++;
        }
        if(ch[i]==')')
        {
            top--;
            pop++;
        }
    }
    if(top==-1)
        printf("correct ");
    else printf("wrong");
    printf("\nTotal push operation = %d and pop operation = %d",push,pop);
    return 0;
}