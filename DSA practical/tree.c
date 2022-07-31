#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
}node;
void preorder(node *);
void inorder(node *);
void postorder(node *);
int main()
{
    node *root,*newn,*pr,*nr;
    int a[]={4,8,9,1,3,7,0,2,5,6};
    root=NULL;
    for(int i=0;i<10;i++)
    {
        newn=(node *)malloc(sizeof(node));
        newn->data=a[i];
        newn->left=newn->right=NULL;
        if(root==NULL)
        {
            root=newn;  
        }
        else
        {
            nr=root;
            while(nr!=NULL)
            {
                pr=nr;
                if(newn->data > nr->data)
                    nr=nr->right;
                else nr=nr->left;
            }
            if(pr->data > newn->data)
                pr->left=newn;
            else pr->right=newn;
        }
    }
    printf("Preorder =>");
    preorder(root);
    printf("\nInorder =>");
    inorder(root);
    printf("\nPostorder =>");
    postorder(root);
    return 0;
}

void preorder(node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}