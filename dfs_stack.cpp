#include <bits/stdc++.h>
using namespace std;
class Dfs
{
    public:
    int size;
    list<int> *adj;
    public:
    Dfs(int size)
    {
        this->size=size;
        adj=new list<int>[size];
    }
    void add(int x,int y)
    {
        adj[x].push_back(y);
    }
    void dfs(int ver)
    {
        stack<int> st;
        vector<bool> visited(size,false);
        st.push(ver);
        while(!st.empty())
        {
            int v=st.top();
            st.pop();
            if(!visited[v])
            {
                cout<<v<<" ";
                visited[v]=true;
            }
            for(auto it: adj[v])
            {
                if(!visited[it])
                st.push(it);
            }
        }
    }
};
int main()
{
    Dfs g(5);
    g.add(0,1);
    g.add(1,3);
    g.add(3,2);
    g.add(1,4);
    g.add(2,3);
    cout<<" Depth First Traversal: ";
    g.dfs(0);
}
