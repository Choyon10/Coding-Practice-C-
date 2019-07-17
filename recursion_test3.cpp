#include<bits/stdc++.h>
using namespace std;
int iterative(int a[],int n)
{
        int max = a[0];
        for (int i = 1;i<n ;i++)
        {
            if (a[i]>max)
                max = a[i];
        }
        return max;
}
int recursive(int a[],int n)
{
    if(n==0) return a[n];
    int max = a[n-1];
    int final_max = recursive(a,n-1);
    if(max<final_max)
        max = final_max;
    return max;
}
int main()
{
    int n,a[100],v;
    cin>>n;
    for(int i =0 ;i<n; i++)
    {
        cin>>v;
        a[i]=v;
    }
    cout<<iterative(a,n)<<endl;
    cout<<recursive(a,n)<<endl;
    return 0;
}
