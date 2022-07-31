#include <stdio.h>
int stack[10];
int top = -1;
void push();
void display();

int main()
{
   push();
   printf("\nThe elements are ");
   display();
   return 0;
}

void push()
{
   printf("Enter elements to push ");
   int element;
   while (1)
   {
      scanf("%d", &element);
      if (top == 9)
      {
         printf("Stack is full\n");
         break;
      }
      top++;
      stack[top] = element;
   }
}
void display()
{
   if (top == -1)
   {
      printf("\nStack is empty");
      return;
   }
   for (int i = top; i >= 0; i--)
   {
      printf("%d ", stack[i]);
   }
}