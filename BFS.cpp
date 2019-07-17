#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node* getnode(int a)
{
    Node *temp = new Node();
    temp->data = a;
    temp->left =temp->right = NULL;
    return temp;
}
Node* Insert(Node* root,int a)
{
    if(root == NULL)
    {
        root = getnode(a);
    }
    else if(a <= root->data)
    {
        root->left = Insert(root->left,a);
    }
    else
    {
        root->right = Insert(root->right,a);
    }
    return root;
}
void BFS(Node* root)
{
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    int i=0;
    while(!q.empty())
    {
        Node *current = q.front();
        cout<<current->data<<"  ";
        if(current->left != NULL) q.push(current->left);
        if(current->right != NULL) q.push(current->right);
        q.pop();
    }
}
void DFSpreorder(Node *root)
{
    if(root == NULL) return;

    cout<<root->data<<" ";
    DFSpreorder(root->left);
    DFSpreorder(root->right);
}

void DFSinorder(Node* root)
{
    if(root == NULL) return;

    DFSinorder(root->left);
    cout<<root->data<<" ";
    DFSinorder(root->right);

}
void DFSpostorder(Node* root)
{
    if(root == NULL) return;

    DFSpostorder(root->left);
    DFSpostorder(root->right);
    cout<<root->data<<" ";

}
int main()
{
    Node *root=NULL;
    int n,a;
    cout<<"How many Nodes"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"insert Node: "<<i<<endl;
        cin>>a;
        root=Insert(root,a);
    }
    cout<<"BFS"<<endl;
    BFS(root);
    cout<<"\nDFS preorder"<<endl;
    DFSpreorder(root);
    cout<<"\nDFS inorder"<<endl;
    DFSinorder(root);
    cout<<"\nDFS postorder"<<endl;
    DFSpostorder(root);

    return 0;
}
