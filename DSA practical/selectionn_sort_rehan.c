#include<stdio.h>
int main()
{
    int a[7]={16,25,34,11,26,32,59};
    int min,pos,n=7,i,p;
    // printf("Enter number of terms of elements :");
    // scanf("%d",&n);
    // printf("Enter %d elements to sort :",n);
    // for(int i=0;i<n;i++)
    //     scanf("%d",&a[i]); 
    for(p=0;p<n-1;p++)
    {
        min=a[p];
        pos=p;
        for(i=p+1;i<n;i++)
        {
            if(min > a[i])
            {
                min=a[i];
                pos=i;
                a[pos]=a[p];
                a[p]=min;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}