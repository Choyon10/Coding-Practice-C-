#include<bits/stdc++.h>
using namespace std;

int N,A[100];
int S[100];
void read()
{
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>S[i];
}

void print()
{
    for(int i =0 ;i<N;i++)
        if(A[i]==1)
            cout<<S[i];
    cout<<endl;
}
void solve(int i)
{
    //printf("solve %d start\n",i);
    if(i==N)
    {
        print();
      //  printf("solve %d terminate\n",i);
        return;
    }
    A[i]=0;
    solve(i+1);
    //printf("phase-%d complete\n",i);
    A[i]=1;
    solve(i+1);
    //printf("solve %d end\n",i);
}
int main()
{
    read();
    solve(0);
    return 0;
}
