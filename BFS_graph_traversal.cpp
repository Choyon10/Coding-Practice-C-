#include<bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
/*This is a function problem.You only need to complete the function given below*/
/* You have to complete this function*/
/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int a, vector<int> adj[], bool vis[])
{
        int s;
        vector<int>::iterator p;
        queue<int> q;
        q.push(a);
        vis[s]=1;
        while(!q.empty())
        {
            s = q.front();
            q.pop();
            cout<<s<<" ";
            for(int i=0;i<adj[s].size();i++)
            {
                if(vis[(adj[s][i])]!=1)
                {
                    vis[(adj[s][i])]=1;
                    q.push(adj[s][i]);
                }
            }
        }


}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N];
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }

        bfs(0, adj, vis);
        cout<<endl;
    }
}




/* BFS Tree Traversal
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
};
node* getnode(int value)
{
    node *temp = new node();
    temp->data=value;
    temp->left=temp->right=NULL;
    return temp;
}
node* addnode(node* root,int val)
{
    if(root==NULL)
    {
        root = getnode(val);
        return root;
    }
    else if(val > root->data)
    {
        root->right=addnode(root->right,val);
        return root;
    }
    else if(val < root->data)
    {
        root->left=addnode(root->left,val);
        return root;
    }
}
void BFS(node* root)
{
    if(root==NULL)
        return;
    queue<node *>q;
    q.push(root);
    node* temp;
    while(!q.empty())
    {
        temp=q.front();
        cout<<temp->data<<" ";

        if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
        q.pop();
    }
}
int main()
{
    node *root=NULL;
    for(int i=0;i<5;i++)
        root=addnode(root,rand()%25+1);

    BFS(root);
    return 0;
}
*/
