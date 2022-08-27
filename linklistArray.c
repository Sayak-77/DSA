#include <stdio.h>
#include <stdlib.h>
typedef int u;
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    u n,i;
    scanf("%d",&n);
    u arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    struct Node *head=NULL,*temp=NULL,*curr=NULL;
    for(i=0;i<n;i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            curr=temp;
        }
        else
        {
            curr->next=temp;
            curr=curr->next;
        }
    }
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}