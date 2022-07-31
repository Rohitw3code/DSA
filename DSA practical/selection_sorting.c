#include<stdio.h>
void sel_sort(int a[],int size);
int main()
{
    int a[5]={3,6,2,6,7};
    sel_sort(a,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    } 
    return 0;
}
void sel_sort(int a[],int size)
{
    int temp;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}