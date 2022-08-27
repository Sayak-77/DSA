#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t,i,c=0,res=0;
    cout<<"Enter the Array Size: ";
    cin>>t;
    int arr[t];
    cin>>"Enter the Array Elements:\n";
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<t;i++)
    {
        if(arr[i]==0)
        c=c+1;
    }
    for(i=0;i<c;i++)
    {
        if(arr[i]==1)
        res=res+1;
    }
    cout<<"\nNumber of Swaps Required"<<res;
    return 0;
}