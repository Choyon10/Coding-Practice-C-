#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat[10][10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>mat[i][j];

    cout<<"print data"<<endl;
    for(int i =0;i<n;i++)
        for(int j=0;j<=i;j++)
        cout<<mat[i][j]<<" ";

    return 0;
}
