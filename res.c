#include <stdio.h>

int fun(int a,int b,int c){
	if (c == 0)
		return a+b
	else
		a-b+fun(a,b,c-1)
}

int exam(int x,int y,int z){
	if z == 0
		return x;
	else if z == 1
		return x+y
	else
		return x+y+z+exam(x,y,z-1)
}

int main(){

	int a = fun(9,0);

	printf("value a : %d",a);



	return 0;
}