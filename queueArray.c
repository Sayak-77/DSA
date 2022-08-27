#include <stdio.h>
#include <stdlib.h>
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
void display(struct queue *new)
{
    int k=new->f;
    if(new==NULL)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nThe Elements are: ");
        while(k<new->r)
        {
            printf("\n%d",new->arr[k+1]);
            ++k;
        }
        printf("\n");
    }
}
int main()
{
    struct queue q;
    int item;
    q.size=10;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    int ch;
    while(ch!=4){
    printf("\nEnter 1 for INSERTION --- 2 for DELETION --- 3 for DISPLAYING --- 4 for EXITING");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("\nEnter the element to be inserted: ");
        scanf("%d",&item);
        enqueue(&q,item);
        break;
        case 2:
        printf("\nDEQUEUING ELEMENT: %d\n",dequeue(&q));
        break;
        case 3:
        display(&q);
        break;
        case 4:
        printf("\nEXITING QUEUE...");
        exit(0);
        break;
        default:
        printf("WRONG CHOICE..!!");
        break;
    }
    }
    return 0;
}