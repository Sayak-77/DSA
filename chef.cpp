#include <iostream>
#include <algorithm>
using namespace std;
void Sort(int a[],int l)
{
    int i,j,temp=0;
    for(i=0;i<l;i++)
	{
	    for(j=0;j<l-1-i;j++)
	    {
	        if(a[j]<a[j+1])
	        {
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	        }
	    }
	}
}
int main() {
	// your code goes here
	int n,i;
	cin>>n;
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    cin>>b[i];
	}
	Sort(b,n);
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
	    cout<<a[i]<<" "<<b[i];
	    cout<<" ";
	}
	return 0;
}
