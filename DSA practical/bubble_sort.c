#include<stdio.h>
void bubble_sort(int a[],int size);
int main()
{
    int a[5]={4,6,8,3,9};
    bubble_sort(a,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void bubble_sort(int a[],int size)
{
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    
}