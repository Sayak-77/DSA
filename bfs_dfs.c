#include <stdio.h>
#include <stdlib.h>
int visited[7]={0,0,0,0,0,0,0};
int ar[7][7]={{0,1,1,1,0,0,0},{1,0,1,0,0,0,0},{1,1,0,1,1,0,0},{1,0,1,0,1,0,0},{0,0,1,1,0,1,1},{0,0,0,0,1,0,0},{0,0,0,0,1,0,0}};
struct queue
{
    int f;
    int r;
    int size;
    int* arr;
};
int isEmpty(struct queue *x)
{
    if(x->f==x->r)
    return 1;
    else
    return 0;
}
int isFull(struct queue *x)
{
    if(x->r==x->size-1)
    return 1;
    else
    return 0;
}
void enqueue(struct queue *new,int item)
{
    if(isFull(new))
    printf("\nOVERFLOW\n");
    else
    {
        new->r++;
        new->arr[new->r]=item;
    }
}
int dequeue(struct queue *new)
{
    if(isEmpty(new))
    printf("\nEMPTY QUEUE\n");
    else
    {
        new->f++;
        return new->arr[new->f]; 
    }
}
void dfs(int i)
{
    int j;
    printf("%d ",i);
    visited[i]=1;
    for(j=0;j<7;j++)
    {
        if(ar[i][j]==1 && !visited[j])
        dfs(j);
    }
}
int main()
{
    int ch=0;
    int node,j,i,f;
    struct queue q;
    q.size=100;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    while(ch!=3){
    //printf("\nEnter 1 for BFS --- 2 for DFS --- 3 for EXIT: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter the starting Index: ");
        scanf("%d",&i);
        printf("\nBFS TRAVERSAL:\n");
        printf("%d ",i);
        visited[i]=1;
        enqueue(&q,i);
        while(!isEmpty(&q))
        {
            node=dequeue(&q);
            for(j=0;j<7;j++)
            {
                if(ar[node][j]==1 && visited[j]==0)
                {
                    printf("%d ",j);
                    visited[j]=1;
                    enqueue(&q,j);
                }
            }
        }
        break;
        case 2:
        printf("Enter the starting Index: ");
        scanf("%d",&f);
        printf("\nDFS TRAVERSAL:\n");
        dfs(f);
        break;
        case 3:
        printf("\nBYE!! EXITING GRAPH TRAVERSAL...\n");
        exit(0);
        break;
        default:
        printf("\nWRONG CHOICE..!!\n");
        break;
      }
    }
    return 0;
}