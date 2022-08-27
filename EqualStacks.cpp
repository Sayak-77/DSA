#include <bits/stdc++.h>
#include <stack>
using namespace std;
stack<int> st1,s1;
stack<int> st2,s2;
stack<int> st3,s3;
int main()
{
    int n1,n2,n3,i,sum1=0,sum2=0,sum3=0;
    cout<<"Enter 3 stack sizes:\n";
    cin>>n1>>n2>>n3;
    int ar1[n1],ar2[n2],ar3[n3];
    cout<<"Enter 1st stack cylinder heights:\n";
    for(i=0;i<n1;i++)
    cin>>ar1[i];
    cout<<"Enter 2nd stack cylinder heights:\n";
    for(i=0;i<n2;i++)
    cin>>ar2[i];
    cout<<"Enter 3rd stack cylinder heights:\n";
    for(i=0;i<n3;i++)
    cin>>ar3[i];
    for(i=n1-1;i>=0;i--)
    {
        st1.push(ar1[i]);
        sum1+=ar1[i];
    }
    for(i=n2-1;i>=0;i--)
    {
        st2.push(ar2[i]);
        sum2+=ar2[i];
    }
    for(i=n3-1;i>=0;i--)
    {
        st3.push(ar3[i]);
        sum3+=ar3[i];
    }
    while(sum1!=sum2 or sum1!=sum3)
    {
        if(sum1>sum2 || sum1>sum3)
        {
            sum1-=st1.top();
            st1.pop();
        }
        if(sum2>sum1 || sum2>sum3)
        {
            sum2-=st2.top();
            st2.pop();        }
        if(sum3>sum2 || sum3>sum1)
        {
            sum3-=st3.top();
            st3.pop();
        } 
    }
    cout<<"\nANSWER: "<<sum1;
}