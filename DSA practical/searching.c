#include<stdio.h>
#include<string.h>
int search(char list[3][15],char name[]);
int main()
{
    char list[3][15];
    char name[15];
    printf("Enter 3 player names : ");
    for (int i = 0; i < 3 ;i++)
    {
        gets(list[i]);
    }
    printf("Enter searching name : ");
    gets(name);
    int k;
    k=search(list,name);
    if(k==-1)
    printf("Not Found");
    else printf("Found");
    // printf("\nK = %d",k);
    return 0;
}

int search(char list[][15],char name[])
{
    for(int i=0;i<3;i++)
    {
        if(strcmp(list[i],name)==0)
        {
            return i;
        }
    }
        return -1;
}