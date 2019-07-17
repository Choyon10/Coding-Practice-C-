#include<bits/stdc++.h>
using namespace std;
int main()
{
    int jump=0,n;
    int ar[1024],ch;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>ch;
        ar[i]=ch;
    }

    int i=0;
    while(i<n)
    {
       if(ar[i+2]==0 && i+2<n)
       {
           jump++;
           i=i+2;
       }
       else
       {
           jump++;
           i++;
       }
    }
    cout<<jump<<endl;
    return 0;
}
