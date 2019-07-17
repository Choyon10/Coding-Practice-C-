#include<bits/stdc++.h>
using namespace std;
void addnode(vector<int> V[],int u,int v)
{
    V[u].push_back(v);
    V[v].push_back(u);
}

void printGraph(vector<int> V[],int n)
{
    vector<int>::iterator ptr;
    for(int i=0;i<n;i++)
    {
        for(ptr=V[i].begin();ptr!=V[i].end();ptr++)
        {
            cout<<*ptr<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Virtices: "<<endl;
    cin>>n;
    vector<int> V[n];

    addnode(V,0,1);
    addnode(V,0,2);
    addnode(V,1,2);
    addnode(V,1,3);
    addnode(V,2,3);

    printGraph(V,n);
    return 0;
}
