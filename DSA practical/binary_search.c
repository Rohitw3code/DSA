#include<stdio.h>
void bs(int a[],int size,int s);
int main()
{
    int a[5]={2,5,7,8,3};
    int s;
    printf("Enter searching element  : ");
    scanf("%d",&s);
    bs(a,5,s);
    return 0;
}

void bs(int a[],int size,int s){
    int l=0,h=size -1;
    int mid,f=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(a[mid]==s)
        {
            f=1;
            break;
        }
        else if(a[mid]>s)
        {
            l=mid+1;
        }
        else h=mid-1;
    }
    if(f==1)
    printf("Found");
    else printf("Not found");
    
}
