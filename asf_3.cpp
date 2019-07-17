#include<bits/stdc++.h>
using namespace std;

int recurseries(int n)
{

    if (n==0) return 0;
    return (n*2-1) + recurseries(n-1);

}

int main()
{
    int n;
    cin>>n;
    cout<<"Normal series"<<endl;
    cout<<"Recursion series: "<<recurseries(n)<<endl;

    return 0;
}
