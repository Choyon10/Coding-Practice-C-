#include<bits/stdc++.h>
using namespace std;
void headrecursion(int i)
{
    if(i==10) return;
    cout<<i<<" ";
    headrecursion(i+1);
}
void tailrecursion(int i)
{
    if(i==10) return;
    tailrecursion(i+1);
    cout<<i<<" ";
}
int arrsum(int a[],int n)
{
    static int sum=0;
    if(n==0) return a[0];
    sum = a[n];
    int total = sum + arrsum(a,n-1);
    return total;
}
 int main()
 {
     int arr[10]={1,2,3,4,5};
     int sum = arrsum(arr,sizeof(arr)-1);
     cout<<sum<<endl;
     cout<<"Head recursion"<<endl;
     headrecursion(1);
     cout<<"\n Tail recursion"<<endl;
     tailrecursion(1);
     return 0;
 }
