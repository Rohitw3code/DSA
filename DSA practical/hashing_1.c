#include<stdio.h>

int hashf(int key)
{
    return key%10;
}

void searchf(int ar[])
{
    int key1;
    printf("Enter element to search :");
    scanf("%d",&key1);
    if(ar[hashf(key1)]==key1)
        printf("\nSearch successfull.");
    else
        printf("\nSearch unsuccessfull.");
}

int main()
{
    int ar[10],key;
    for (int i = 0; i < 10; i++)
    {
        ar[i]=0;
    }
    
    while(1)
    {
        printf("Enter element or type '-1' to print the elements :");
        scanf("%d",&key);
        if(key==-1)
            break;
        else
        {
            if(ar[hashf(key)]==0)
                ar[hashf(key)]=key;
            else 
                printf("\nCollision\n\n");
        }
    }
    printf("Array =>\n");
    for(int j=0;j<10;j++)
        printf("%d\n",ar[j]);
    searchf(ar);
    return 0;
}