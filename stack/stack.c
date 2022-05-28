#include <stdio.h>


#define N 5
int stack[N];
int top = -1;

void push(){
	int x;
	printf("Enter data : ");
	scanf("%d",&x);

	if(top == N-1){
		printf("overflow");
	}
	else{
		top++;
		stack[top] = x;
	}
}

void pop(){
	int item;
	if(top == -1){
		printf("underflow");
	}
	else{
		item = stack[top];
		top --;
		printf("\npop : %d\n",item);
	}
}

void display(){
	for (int i = top; i >= 0; i--)
	{
		printf("%d ",stack[i]);
	}
}

void peek(){
	if(top == -1){
		printf("underflow");
	}
	else{
		printf("%d",stack[top]);
	}
}

int main(){

	push();
	push();
	push();
	push();
	pop();
	display();
	peek();


	return 0;
}