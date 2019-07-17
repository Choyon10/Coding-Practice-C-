#include<bits/stdc++.h>
using namespace std;
int iterativesum(int a[],int n)
{
    int sum = 0 ;
    for ( int i =0 ; i<n ;i++)
        sum +=a[i];
    return sum;
}
int sumrecur(int a[],int n)
{
    if ( n == 0)
        return 0;
    int last_sum = a[n-1];
    int total_sum = sumrecur(a,n-1);
    return last_sum + total_sum;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i = 0 ;i<n ; i++)
    {
        a[i] = i+2;
    }
    int sum;
    sum = iterativesum(a,n);
    cout<<sum<<endl;
    sum = sumrecur(a,n);
    cout<<sum<<endl;
    return 0;
}
