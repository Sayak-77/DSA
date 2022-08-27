#include <iostream>
using namespace std;
void binarySearch_52(int arr[],int m,int n)
{
    int f=0,l,mid=0,k=0;
    l=m;
    cout<<"\n\nThe Array Elements: "<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\nThe Searched Element: "<<n<<endl;
    while(f<=l)
    {
        mid=(f+l)/2;
        if(arr[mid]==n)
        {
            k=-1;
            cout<<"\nThe Element '"<<n<<"' is found at position: "<<(mid+1);
            break;
        }
        if(arr[mid]>n)
        {
            l=mid-1;
        }
        else if(arr[mid]<n)
        {
            f=mid+1;
        }
    }
    if(k==0)
    cout<<"\nError!!Element Not Found.";
}
int main()
{
    cout<<"Name: Sayak Chatterjee\n"<<"UID: 20BCS1452\n"<<endl;
    int item_52,i,len;
    cout<<"Enter the Length of the Array: ";
    cin>>len;
    int ar_52[len];
    cout<<"Enter the Array Elements: "<<endl;
    for(i=0;i<len;i++)
    {
        cin>>ar_52[i];
    }
    cout<<"Enter the Element to be Searched: ";
    cin>>item_52;

    binarySearch_52(ar_52,len,item_52);
}