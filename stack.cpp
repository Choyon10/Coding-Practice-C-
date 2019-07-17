#include<bits/stdc++.h>
using namespace std;
int to=-1;
void push(int *sta,int data)
{
    to++;
    sta[to] = data;

}
void pop()
{
    to--;

}
int top(int *sta)
{
    int data;
    data = sta[to];
    to--;
    return data;
}
bool isEmpty()
{
    if(to<0)
        return true;
    else
        return false
}
int main()
{
    int *sta;
    sta = new int(100);
    int data ;
    cin>>data;
    push(sta,data);
    push(sta,3);
    push(sta,4);

    data = top(sta);
    cout<<"first data"<<data<<endl;
    data = top(sta);
    cout<<"first data"<<data;

    return 0;
}
