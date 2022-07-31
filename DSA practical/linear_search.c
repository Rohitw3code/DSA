#include<stdio.h>
int main()
{
    int a[]={3,5,7,4,9};
    int s,k=0;
    printf("Enter searching element : ");
    scanf("%d",&s);
    for (int i = 0; i < 5; i++)
    {
        if(a[i]==s)
        {
            k=1;
            break;
        }
    }
     if(k==1)
    printf("Found");
    else printf("Not found");
    return 0;
}