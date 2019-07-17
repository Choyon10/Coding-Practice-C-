#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *link;
};
Node *head;

void insertdata(int value)
{
    Node *tem = new Node();
    tem->data = value;
    tem->link = NULL;

    if (head == NULL)
        head = tem;
    else
    {
        Node *tem1 = new Node();
        tem1 = head;
        while(tem1->link != NULL)
        {
            tem1 = tem1->link;
        }
        tem1->link = tem;
    }
}
void printdata()
{
    Node *tem = new Node();
    tem = head;
    while(tem!=NULL)
    {
        cout<<tem->data<<endl;
        tem = tem->link;
    }

}

void deletedata(int loc)
{
    Node *tem = new Node();
    tem = head;
    Node *tem2 = new Node();
    if(loc==1){
        head = tem->link;
        return;
    }

    for(int i = 1; i<loc-1; i++)
    {
        tem = tem->link;
    }
    tem2 = tem->link;
    tem->link= tem2->link;

}

int main()
{
    head = NULL;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        insertdata(a);
    }
    cout<<"Print Link list"<<endl;
    printdata();
    cout<<"delete the node number"<<endl;
    cin>>n;
    deletedata(n);
    printdata();
    return 0;
}
