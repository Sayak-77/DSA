#include <iostream>
using namespace std;
void linearSearch_52(int arr[],int n,int m)
{
    int k=-1,i;
    cout<<"The Array Elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"\nThe Searched Element: "<<m<<endl;
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            k=1;
            break;
        }
        else
        continue;
    }
    if(k==1)
    cout<<"\nThe Element '"<<m<<"' is found at position: "<<(i+1);
    else
    cout<<"\nError!!Element Not Found.";
}
int main()
{
    cout<<"Name: Sayak Chatterjee\n"<<"UID: 20BCS1452\n"<<endl;
    int item_52,i,len;
    item_52=11;
    int ar_52[]={0,1,2,4,5,6,8,9,3,7};
    len=sizeof(ar_52)/sizeof(ar_52[0]);
    linearSearch_52(ar_52,len,item_52);
}