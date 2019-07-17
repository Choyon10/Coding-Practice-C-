#include<bits/stdc++.h>
using namespace std;

struct Bstnode{
    int data;
    Bstnode *left,*right;
};


Bstnode* getnode(int value)
{
    Bstnode *temp;
    temp = new Bstnode();
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}
Bstnode* insert(Bstnode *root,int data)
{

    if(root == NULL)
    {
        Bstnode *temp = getnode(data);
        root=temp;

    }

    else if(data>=root->data)
    {
        root->right = insert(root->right,data);
        cout<<int(root->right)<<" "<<root->data<<endl;
    }
    else
    {
        root->left=insert(root->left,data);
        cout<<root->left<<" "<<root->data<<endl;
    }
    return root;
}
int main()
{
    Bstnode* root;
    root = NULL;
    int a;
    for (int i=0;i<5;i++)
    {
        cin>>a;
        root = insert(root,a);
    }

    return 0;
}
