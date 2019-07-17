#include<bits/stdc++.h>
using namespace std;
int n;
void pattern()
{
    for(int i=n ; i>=1 ;i--)
    {
        for(int j=n;j>=n-i+1;j--)
            cout<<i<<" ";
        cout<<endl;
    }
}
void recurpattern1(int i)
{
    if (i==0) return;

}
void recurpattern2()
{

}
int main()
{

    cin>>n;
    recurpattern1(1);
    return 0;
}
