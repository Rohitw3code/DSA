#include<stdio.h>
int insert(int a[],int size,int cs,int putt,int pos);
int main()
{
    int a[10]={1,2,3,4,5,7,8,9,10,11};
    int cur_size=8;
    int ent=6;
    int pos=5;
    printf("Array before function call : ");
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    cur_size = insert(a,10,cur_size,ent,pos);
    printf("Array after function call : ");
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;    
}

int insert(int a[],int size,int cs,int putt,int pos)
{
    if(cs<size-1)
    {
        for(int i=cs;i>=pos;i--)
        {
            a[i+1]=a[i];
        }
        a[pos]=putt;
        cs=cs+1;
    }
    else printf("No space for insertion");
    return cs;
}