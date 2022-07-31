#include<stdio.h>
#include<stdlib.h>
typedef struct tnode{
    int data;
    struct tnode *left;
    struct tnode *right;
}st;
void preorder(st *root);
void inorder(st *root);
void postorder(st *root);
void main()
{
    int i,arr[10];
    st *newn,*root,*pr,*nr;
    root=NULL;
    printf("Enter 10 elements :");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);

    for(int i=0;i<10;i++) {
        newn=(st *)malloc(sizeof(st));
        if(newn==NULL)
            break;
        newn->data=arr[i];
        newn->left=newn->right=NULL;
        if(root==NULL)
            root=newn;
        else{
            nr=root;
            while(nr!=NULL){
                pr=nr;
                if(newn->data > nr->data)
                    nr=nr->right;
                else nr=nr->left;
            }
            if(pr->data < newn->data)
                pr->right=newn;
            else pr->left=newn;
        }
    }
    printf("\nPreorder =>\n");
    preorder(root);
    printf("\nInorder =>\n");
    inorder(root);
    printf("\nPostorder =>\n");
    postorder(root);
}

void preorder(st *root)
{
    if(root!=NULL){
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(st *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}
void postorder(st *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d\n",root->data);
    }
}