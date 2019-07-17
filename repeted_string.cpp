#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,div,count=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
            count++;
    }
    cin>>n;
    div=n/s.size();
    count=count*div;
    div=n%s.size();
    for(int i=0;i<div;i++)
    {
        if(s[i]=='a')
            count++;
    }
    cout<<count<<endl;

    return 0;
}
