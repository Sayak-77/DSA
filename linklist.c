#include <stdlib.h>
#include <stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
void linklisttraversal(struct Node *ptr)
{
    int n=1;
    struct Node *p=ptr;
    printf("\nElements:\n");
    while(ptr != NULL)
    {
        printf("ELEMENT %d: %d\n",n,ptr->data);
        ptr=ptr->next;
        n=n+1;
    }  
}
void insert(struct Node *h,int item)
{
    struct Node *p;
    p=(struct Node *)malloc(sizeof(struct Node));
    struct Node *temp;
    p->data=item;
    temp=h;
    int loc,i=1;
    printf("Enter the Position after which the Data has to be Inserted: ");
    scanf("%d",&loc);
    while(i<loc)
    {
        temp=temp->next;
        if(temp==NULL)
        printf("\nCannot be Inserted\n");
        i++;
    }
    p->next=temp->next;
    temp->next=p;
    printf("\nInserted after Position %d\n",loc);
}
void delete(struct Node *h)
{
    struct Node *temp=h;
    struct Node *ptr;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    int loc,i=1,f=0;
    printf("Enter the Data has to be Deleted: ");
    scanf("%d",&loc);
    while(temp!=NULL && temp->data!=loc)
    {
        ptr=temp;
        temp=temp->next;
    }
    if(temp== NULL)
    printf("\nNo such Data Present\n");
    else
    printf("\nData: %d is Deleted\n",loc);
    ptr->next=temp->next;
    free(temp);
    temp=ptr->next;
}
void Search(struct Node *ptr,int item)
{
    int n=0;
    while(ptr!=NULL)
    {
        if(ptr->data==item)
        n=n+1;
        ptr=ptr->next;
    }
    printf("\nThe Total Number of Occurences of %d in the Linked-list: %d\n",item,n);
}
int main()
{
    int num,ch,item;
    struct Node *head=NULL;
    struct Node *second=NULL;
    struct Node *third=NULL;
    struct Node *fourth=NULL;
    struct Node *fifth=NULL;
    struct Node *sixth=NULL;
    struct Node *seventh=NULL;
    struct Node *eighth=NULL;
    struct Node *nineth=NULL;
    struct Node *tenth=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));
    sixth=(struct Node*)malloc(sizeof(struct Node));
    seventh=(struct Node*)malloc(sizeof(struct Node));
    eighth=(struct Node*)malloc(sizeof(struct Node));
    nineth=(struct Node*)malloc(sizeof(struct Node));
    tenth=(struct Node*)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=13;
    third->next=fourth;
    fourth->data=9;
    fourth->next=fifth;
    fifth->data=15;
    fifth->next=sixth;
    sixth->data=21;
    sixth->next=seventh;
    seventh->data=16;
    seventh->next=eighth;
    eighth->data=17;
    eighth->next=nineth;
    nineth->data=10;
    nineth->next=tenth;
    tenth->data=4;
    tenth->next=NULL;
    while(ch!=5)
    {
        printf("Enter 1 for INSERTION --- 2 for DELETION --- 3 for SEARCHING --- 4 for DISPLAYING --- 5 for EXIT: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the Data to be Inserted: ");
            scanf("%d",&num);
            insert(head,num);
            break;
            case 2:
            delete(head);
            break;
            case 3:
            printf("Enter the Data to be Searched: ");
            scanf("%d",&item);
            Search(head,item);
            break;
            case 4:
            linklisttraversal(head);
            break;
            case 5:
            exit(0);
            break;
            default:
            printf("\nWRONG CHOICE ..!!");
            break;
        }
    }
    return 0;
}