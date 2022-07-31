#include<stdio.h>
void merge(int a[],int n,int b[],int m,int c[]);
int main()
{
    int a[]={10,12,13,15,26,29};
    int b[]={1,7,8,9,14,30};
    int c[12];

    merge(a,6,b,6,c);

    printf("Elements in third array => \n");
    for(int k=0;k<12;k++)
        printf("%d ",c[k]);
    return 0;
}

void merge(int a[],int n,int b[],int m,int c[])
{
    int i,j,k;
    i=j=k=0;

    while(i!=n && j!=m)
    {
        if(a[i]>b[j])
            {
                if(a[i]>b[j])
                    {
                        c[k]=b[j];
                        k++;j++;
                    }
            }
        else
            {
                if(a[i]<b[j])
                {
                    c[k]=a[i];
                    k++;i++;
                }   
            }
    }
    while(i!=n)
    {
        c[k]=a[i];
        k++;i++;
    }
    while(j!=m)
    {
        c[k]=b[j];
        k++;j++;
    }
}