#include<stdio.h>
void ins_sort(int a[],int n);

int main()
{
   int a[6]={5,4,10,1,6,2};
   ins_sort(a,6);
   printf("Sorted list = ");
   for(int i=0;i<6;i++)
    printf("%d ",a[i]);
   return 0;
}

void ins_sort(int a[],int size)
{
     int i,j,t;
    for(i=1;i<size;i++){
        for(j=i;j>0;j--){
            if(a[j-1]>a[j])
            {
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }
        }
    }
}