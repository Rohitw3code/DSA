#include <stdio.h>

#define N 10

int hashCode(int key){
	return key%N;
}

void display(int hashArray[]){
	for (int i = 0; i < N; ++i)
	{
		printf("%d ",hashArray[i]);
	}
}

int push(int key,int hashArray[]){
	int index = hashCode(key);
	hashArray[index] = key;
}

int main(){
	int hashArray[N];
	for(int i=0;i<N;i++){hashArray[i] = 0;}

	push(5,hashArray);
	push(6,hashArray);
	push(8,hashArray);
	display(hashArray);


	return 0;
}