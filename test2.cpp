#include<bits/stdc++.h>
using namespace std;
int N,A[100];
void print()
{
    for(int i=0;i<N;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
void solve(int i)
{
    printf("solved(%d) start\n",i);
    if(i==N)
    {
        print();
        printf("solve(%d) terminate\n",i);
        return ;
    }
    A[i]=0;
    solve(i+1);
    A[i]=1;
    solve(i+1);
    printf("solve(%d) end\n",i);
}
int main()
{
    cin>>N;
    solve(0);
    return 0;
}
