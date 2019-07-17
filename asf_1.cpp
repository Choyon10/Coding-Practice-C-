#include<bits/stdc++.h>
using namespace std;

int nsum(int n)
{
    int sum = 0;
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int dispatch(int n)
{
    if (n==0) return 0;
    return n+dispatch(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Normal"<<endl;
    cout<<nsum(n)<<endl;
    cout<<"Recursive"<<endl;
    cout<<dispatch(n)<<endl;
    return 0;
}
