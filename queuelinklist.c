#include <stdio.h>
#include <stdlib.h>
typedef int u;
typedef long long uu;
int k=1;
struct queueNode
{
    int data;
    struct queueNode *next;
};
struct queueNode *front,*rear;
void Insert(int s)
{
    struct queueNode *ptr;
    int d;
    ptr=(struct queueNode*)malloc(sizeof(struct queueNode));
    if(k>s)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter value: ");
        scanf("%d",&d);
        ptr->data=d;
        if(front==NULL)
        {
            front=rear=ptr;
            front->next=rear->next=NULL;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
            rear->next=NULL;
        }
        ++k;
    }
}
void Delete()
{
    struct queueNode *ptr;
    if(front==NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        printf("\nElement Deleted...\n");
        ptr=front;
        front=ptr->next;
        free(ptr);
        --k;
    }
}
void Display()
{
    struct queueNode *ptr;
    ptr=front;
    if(ptr==NULL)
    {
        printf("\nQUEUE IS EMPTY..!!\n");
    }
    else
    {
        printf("\nThe Elements are: ");
        while(ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
void main()
{
    u choice;
    u size;
    printf("\n~:: LINKLIST IMPLEMENTATION OF QUEUE ::~\n");
    printf("Enter size of Queue: ");
    scanf("%d",&size);
    while(choice!=4)
    {
        printf("\nEnter 1 FOR INSERTION --- 2 FOR DELETION --- 3 FOR DISPLAYING THE QUEUE --- 4 EXIT");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            Insert(size);
            break;
            case 2:
            Delete();
            break;
            case 3:
            Display();
            break;
            case 4:
            printf("\nEXITING QUEUE...");
            exit(0);
            break;
            default:
            printf("\nWRONG CHOICE ..!!");
            break;
        }
    }
}