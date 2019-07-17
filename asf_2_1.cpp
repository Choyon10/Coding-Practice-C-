#include<bits/stdc++.h>
using namespace std;
int n;
void pattern()
{
    for(int i =1 ;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
}
void recurpattern2(int i,int j)
{
    if(j>i)
    {
        cout<<endl;
        return;
    }
    cout<<j<<" ";
    recurpattern2(i,j+1);

}

void recurpattern(int i)
{
    if(i>n)
    {
        return;
    }
    recurpattern2(i,1);
    recurpattern(i+1);

}
int main()
{
    cin>>n;
    recurpattern(1);
    return 0;
}
