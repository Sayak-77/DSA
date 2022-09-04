#include <bits/stdc++.h>
using namespace std;
int getmax(int arr[],int size)
{
    int max=0,i;
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
}
void countSort(int arr[], int size, int div)
{
    int sorted[size];
    int count[10]={0};
    int i;
    for(i=0;i<size;i++)
    count[(arr[i]/div)%10]++;
    for(i=1;i<10;i++)
    count[i]+=count[i-1];
    for(i=size-1;i>=0;i--)
    {
        sorted[count[(arr[i]/div)%10]-1]=arr[i];
        count[(arr[i]/div)%10]--;
    }
    for(i=0;i<size;i++)
    {
        arr[i]=sorted[i];
    }
}
void radixSort(int arr[],int size)
{
    int max=getmax(arr,size);
    for(int i=1;max/i>0;i*=10)
    countSort(arr,size,i);
}
int main()
{
    int size,i;
    cout<<"Enter the Array size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter Array Elements:\n";
    for(i=0;i<size;i++)
    cin>>arr[i];
    cout<<"\nThe Elememts(Before Sorting):\n";
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
    radixSort(arr,size);
    cout<<"\n\nThe Elements(after applying RADIX SORT):\n";
    for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
}