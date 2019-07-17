#include<bits/stdc++.h>
using namespace std;
int seriessum(int n)
{
    int sum =0;
    for (int i=2;i<=n;i+=3)
        sum+=i;
    return sum;
}
int recseriessum(int n)
{
    int
}
int main()
{
    int n;
    cin>>n;
    cout<<"Iterative Process"<<endl;
    cout<<seriessum(n)<<endl;
    cout<<"Recursive Process: "<<recseriessum(n)<<endl;
    return 0;
}
