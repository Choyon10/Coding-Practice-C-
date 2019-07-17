#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
node *head;
//Insert element to the Linklist
void Insert(int a)
{
    node* temp = new node();
    temp->data = a;
    temp->next = NULL;

    if (head==NULL)
        head = temp;
    else{
        temp->next = head;
        head = temp;
    }
}

//Link list front insertion

void Insertfront(int a)
{
    node *temp;
    temp = new node();

    temp->data = a;
    temp->next = NULL;

    if (head == NULL)
        head = temp;

    else
    {
        node *tm;
        tm = head;
        while(tm->next!=NULL)
        {
            cout<<"in the link insert";
            tm=tm->next;
        }
        tm->next = temp;
    }
}
//Print linklist after every insertion

void Print()
{
    node *temp;
    temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    head=NULL;
    int n,a;
    cout<<"how many number in the link list"<<endl;
    cin>>n;
    cout<<"Insert Number"<<endl;
    for(int i =0 ;i<n ;i++)
    {
        cin>>a;
        cout<<endl;
        Insert(a);

        Print();
        cout<<endl;
    }

    head = NULL;
    //if(head==NULL)
    //     cout<<"Head node is now free"<<endl;
    int n,a;
    cout<<"How many number do you want to insert in link list front side"<<endl;
    cin>>n;
    cout<<"Insert Number"<<endl;
    for(int i =0;i<n;i++)
     {
        cin>>a;
        cout<<endl;
        Insertfront(a);

        Print();
        cout<<endl;
     }
    return 0;

}
