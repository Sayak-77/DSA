#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int i,j,temp=0;
    cout<<"ELEMENTS BEFORE SORTING: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Element "<<(i+1)<<": "<<arr[i]<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"\n\nELEMENTS AFTER SORTING(BUBBLE SORT): "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Element "<<(i+1)<<": "<<arr[i]<<endl;
    }
}
int main()
{
    cout<<"Name: Sayak Chatterjee\n"<<"UID: 20BCS1452\n"<<endl;
    int len;
    int ar_52[]={7,33,4,12,67,45,1};
    len=sizeof(ar_52)/sizeof(ar_52[0]);
    bubbleSort(ar_52,len);
}