#include <iostream>
#include <stack>
using namespace std;
typedef int u;
int main()
{
    u i,j,n;
    cin>>n;
    u arr[n];
    stack<int> st;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }  
    st.push(arr[0]);
    cout<<st.top();
}