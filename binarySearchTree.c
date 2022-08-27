#include <stdio.h>
#include <stdlib.h>
struct node
{
    int leaf;
    struct node *left,*right;
};
struct node* newnode(int item)
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->leaf=item;
    ptr->left=ptr->right=NULL;
    return ptr;
}
void inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->leaf);
        inorder(root->right);
    }
}
struct node* insert(struct node* new,int key)
{
    if(new==NULL)
    return newnode(key);
    if(key<new->leaf)
    new->left=insert(new->left,key);
    else if(key>new->leaf)
    new->right=insert(new->right,key);
    return new;
}
int main()
{
    struct node* root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,40);
    insert(root,20);
    insert(root,70);
    insert(root,90);
    printf("\nINSERTION SUCCESSFUL\n");
    inorder(root);
}