#include<stdio.h>
#include<string.h>
void rev_array(char str[]);
int main()
{
    char str[]="rehan";
    rev_array(str);
    for(int i=0;i<strlen(str);i++)
    printf("%c",str[i]);

    return 0;
}

void rev_array(char str[])
{
    char temp;
    for (int i = 0; i < sizeof(str)/2; i++)
    {
        temp=str[i];
        str[i]=str[sizeof(str)-i];
        str[sizeof(str)-i]=temp;
    }
    
}