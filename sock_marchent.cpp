#include<bits/stdc++.h>
using namespace std;
//#define MAX 1024;
int main()
{
    int ar[1024],n,a,count,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        ar[i]=a;
    }
    for(int i=0;i<n;i++)
    {
        count=1;
        if(ar[i]==-1)
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                ar[j]=-1;
            }
        }
        sum+=count/2;
    }

    cout<<sum<<endl;
    return 0;
}
