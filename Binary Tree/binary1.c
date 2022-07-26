#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *left,*right;
};

struct node* create(){
	int x;
	struct node* newnode;
	newnode = (struct node*) malloc(sizeof(struct node));

	printf("Enter Data : \n");
	scanf("%d",&x);

	if(x == -1){
		return 0;
	}
	
	newnode->data = x;

	printf("Enter Left of %d \n",x);
	newnode->left = create();

	printf("Enter Right of %d \n",x);
	newnode->right = create();

	return newnode;

}

int main(){

	struct node *root;

	root = create();

	return 0;
}