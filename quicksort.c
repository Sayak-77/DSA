#include <stdio.h>
void display(float A[],int n1)
{
    int i;
    for(i=0;i<n1;i++)
    {
        printf("ELEMENT %d: %.2f\n",(i+1),A[i]);
    }
}
void descdisplay(float A[],int n1)
{
    int i;
    for(i=n1-1;i>=0;i--)
    {
        printf("ELEMENT %d: %.2f\n",(n1-i),A[i]);
    }
}
int partition(float A[],int low,int high)
{
    float pivot=A[low];
    int i=low+1;
    int j=high;
    float temp;
    do
    {
        while(A[i]<=pivot)
        {
            i++;
        }
        while(A[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }while(i<j);
    
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}
void quicksort(float A[],int low, int high)
{
    int index;
    if(low<high)
    {
        index=partition(A,low,high);
        quicksort(A,low,index-1);
        quicksort(A,index+1,high);
    }
}
int main()
{
    float A[]={5.3,3.45,2.2,13.01,10.50,1.5};
    int n=(sizeof(A)/sizeof(A[0]));
    printf("\nTHE ARRAY BEFORE SORTING:\n");
    display(A,n);
    quicksort(A,0,n-1);
    printf("\n\nTHE ARRAY AFTER SORTING IN DESCENDING ORDER(QuickSort):\n");
    descdisplay(A,n);
}