#include<stdio.h>
#include<string.h>
int namecheck(char list[][25],char name[25])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        if(strcmp(list[i],name)==0)
        return i;
    }
    return -1;
}
int main()
{
   char  list[3][25],name[25];
   printf("Enter the names of all 11 players : ");
   for(int i=0;i<3;i++)
   gets(list[i]);
   printf("Enter the name of player to search in the list : ");
   gets(name);
   int result; 
   result = namecheck(list,name);
   if(result>=0)
   printf("Name found successfully at index %d",result);
   if(result==-1)
   printf("Name not found");
   return 0;
}