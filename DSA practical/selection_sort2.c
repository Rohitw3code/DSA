#include<stdio.h>
void sel_sort(int a[],int size);
int main()
{
   int a[5];
   printf("Enter 5 elements ");
   for (int i = 0; i < 5; i++)
   {
       scanf("%d",&a[i]);
   }
   sel_sort(a,5);
   printf("After sorting array = ");
    for (int i = 0; i < 5; i++)
        printf("%d ",a[i]);
   return 0;
}

void sel_sort(int a[],int size)
{
    int t;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
           if(a[i]>a[j])
           {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
           }
        }
    }
}