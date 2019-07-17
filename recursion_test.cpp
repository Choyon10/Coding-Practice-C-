#include<bits/stdc++.h>
using namespace std;
int n,A[100];
void solve(int i)
{
    cout<<"solve start"<<i<<endl;
    if (i==n)
    {
        cout<<"solve terminate"<<i<<endl;
        return;
    }
    printf("A[%d]=0\n",i);
    A[i]=0;
    printf("called solve(%d+1)\n",i);
    solve(i+1);
    printf("solve[%d] end\n",i);

}

int main()

{

    cin>>n;
    for(int i =0;i<n;i++)
        A[i]=5;
    solve(0);
    return 0;
}
