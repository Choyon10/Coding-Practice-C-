#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1500000],y;
    int n,count=0,hill=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        s[i]=y;
    }
    for(int i =0;i<n;i++)
    {
        if (hill<0)
        {
            for(int j=i;j<n;j++)
            {
                if(s[j]=='D')
                    hill-=1;
                if(s[j]=='U')
                    hill+=1;
                if(hill==0)
                {
                    count++;
                    i=j+1;
                    break;
                }


            }
        }

        if(s[i]=='D')
            hill-=1;
        if(s[i]=='U')
            hill+=1;

    }
    cout<<count<<endl;
    return 0;
}
