#include<bits/stdc++.h>
using namespace std;
void DFS(int a,vector<int>adj[],bool vis[])
{
    stack<int> s;
    vis[a]=true;
    s.push(a);
    int data;
    while(!s.empty())
    {
        data=s.top();
        cout<<data<<" ";
        s.pop();
        for(int i=0;i<adj[data].size();i++)
        {
            if(vis[adj[data][i]]!=true)
            {
                vis[adj[data][i]]=true;
                s.push(adj[data][i]);
            }
        }
    }
}
int main()
{
    int V,E,start,end;

    cin>>V>>E;
    bool vis[V];
    vector <int> adj[V];
    for(int i=0;i<E;i++)
    {
        cin>>start>>end;
        adj[start].push_back(end);
        adj[end].push_back(start);
    }
    DFS(0,adj,vis);
    return 0;
}
