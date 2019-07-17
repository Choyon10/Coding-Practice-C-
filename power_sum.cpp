#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,count=0;
    cin>>n>>x;
    for(int i =sqrt(n) ;i>0;i--)
    {
        for (int j=0;j<i-1;j++)
        {
            if((pow(i,x)+pow(j,x))==n)
                count++;
        }

    }
    cout<<count<<endl;
    return 0;
}
