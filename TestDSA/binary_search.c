#include <stdio.h>
#include <stdlib.h>

#define N = 10

typedef struct tnode{
	int data;
	struct tnode *left;
	struct tnode *right;
} st;


void main(){
	int i,arr[N];

	st *newn,*root,*pr,*nr;
	root = NULL;
	printf("Enter 10 Elements");
	for(int i=0;i<N;i++)
		{scanf("%d",&arr[i]);}

	for (int i = 0; i < N; ++i){
		newn = (st*) malloc(sizeof(st));
		if newn == NULL
			break;

		newn->data = arr[i];
		newn->left = newn->right = NULL;

		if root == NULL
			root = newn;
		else{
			nr = root;
			while(nr!=NULL){
				pr = nr;
				if(newn->data > nr->data)
					nr = nr->right;
				else nr = nr->left;
			}	

			if(newn->data > pr->data)
				pr->right = newn;
			else pr->left = newn;
		}
	}









}




int main(){

	return 0;
}