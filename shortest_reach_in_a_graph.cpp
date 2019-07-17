#include<bits/stdc++.h>
using namespace std;
void shortest_path(int s,vector<int> adj[],bool vis[],int dist[])
{
    queue<int> q;
    q.push(s);
    int n;
    vis[s]=true;
    while(!q.empty())
    {
        n=q.front();
        q.pop();
        for(int i=0;i<adj[n].size();i++)
        {
            if(vis[adj[n][i]]!=true)
            {
                vis[adj[n][i]]=true;
                dist[adj[n][i]]= dist[n]+6;
                q.push(adj[n][i]);
            }

        }
    }

}
int main()
{
    int T;
    cin>>T;
    int n,v,u,e,s;

    while(T--)
    {

        cin>>n>>e;
        vector<int> adj[n+1];
        bool vis[n+1];
        int dis[n+1];

        for(int i=1;i<=n;i++)
            vis[i]=false;

        for(int i=1;i<=n;i++)
            dis[i]=0;

        for(int i=0;i<e;i++)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cin>>s;
        shortest_path(s,adj,vis,dis);
        for(int i=1;i<=n;i++)
        {
            if(i==s)
                continue;
            if(dis[i]==0)
                cout<<"-1"<<" ";
            else
                cout<<dis[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
