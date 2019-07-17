#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node *pre;
    int data;
    Node *next;

};

 Node *head;

void insertdata(int n)
{
    Node *temp = new Node();
    temp->data = n;
    temp->next = NULL;
    if (head == NULL)
    {
        head == temp;
    }
    else{
        Node *temp2 = new Node();

    }

}
int main()
{
    head = NULL;
    int a;
    for(int i =0 ;i<5;i++)
    {
        cin>>a;
        insertdata(a);
    }

}
