#include<stdio.h>
void main()
{
    int v;
    char c;
    
    printf("Enter number of vertices:");
    scanf("%d",&v);
    int a[v][v];
    char ver='A';
    for(int i=0;i<v;i++)
    {
        int k=0;
        for(int j=0;j<v;j++)
        {
            if(i==j)
            {
                a[i][j]=0;
                continue;
            }
            printf("Is %c and %c adjacent?\n",ver+i,ver+j);
            scanf(" %c",&c);
            if(c=='y')
            {
                a[i][j]=1;
            }
            else a[i][j]=0;
        }
    }
    for (int i = 0; i < v; i++)
    {
        for(int j=0;j<v;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<v;i++)
    {
        int sum=0;
        for(int j=0;j<6;j++)
        {
            sum=sum+a[i][j];
        }
    printf("Degree of %c is %d\n",ver+i,sum);
    }
}