#include <stdio.h>

struct node{
	int data;
	struct node *left,*right;
};

struct node* create(){
	int x;
	struct node* newnode;
	newnode = malloc(sizeof(struct node));

	printf("Enter Data : ");
	scanf("%d",&x);

	if(x == -1){
		return 0;
	}
	
	newnode->data = x;

	printf("Enter Left of %d ",x);
	newnode->left = create();

	printf("Enter Right of %d ",x);
	newnode->right = create();

	return newnode;
}

int main(){

	struct node *root;

	root = create();

	return 0;
}