#include <stdio.h>
void display(int A[], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void merge(int A[], int mid, int l, int h,int size)
{
    int i, j, k;
    int B[size];
    i = l;
    j = mid + 1;
    k = l;
    while (i <= mid && j <= h)
    {
        if (A[i] > A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
        while (i <= mid)
        {
            B[k] = A[i];
            k++;
            i++;
        }
        while (j <= h)
        {
            B[k] = A[j];
            k++;
            j++;
        }
        for (i = l; i <= h; i++)
        {
            A[i] = B[i];
        }
}
void mergesort(int A[], int low, int high,int len)
{
    int mid;
    if (low < high)
    {
        mid = (low + (high-1)) / 2;
        mergesort(A, low, mid,len);
        mergesort(A, mid + 1, high,len);
        merge(A, mid, low, high,len);
    }
}
int main()
{
    int A[] = {9, 14, 20, 8, 0, 5, 6};
    int n = sizeof(A)/sizeof(A[0]);
    printf("ELEMENTS BEFORE SORTING:\n");
    display(A, n);
    mergesort(A, 0, n - 1,n);
    printf("\nELEMENTS AFTER SORTING(Descending Order):\n");
    display(A, n);
    return 0;
}