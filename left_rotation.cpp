#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,rot,arr[100000],temp;
    cin>>n>>rot;
    for(int i =0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<rot;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    for(int i =0;i<n;i++)
    {
        cout<<arr[i];
        if (i != n - 1) {
            cout << " ";
        }
    }


    return 0;
}
