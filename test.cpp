#include<bits/stdc++.h>
using namespace std;

int abssum(int a[], int b[],int size)
{
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum +=abs(a[i]-b[i]);
    }
    return sum;
}

int dispatch(int a[],int b[],int size)
{
    if (size==0) return 0;
    int diff = abs(a[size-1]-b[size-1]);
    int sum = dispatch(a,b,size-1)+diff;
    return sum;
}
int main()
{
    int arrA[10]={10,-5,15,20,30};
    int arrB[10]={3,-5,10,21,12};
    cout<<"Normal Way:  " <<abssum(arrA,arrB,5)<<endl;
    cout<<"Recursive Way:  " <<dispatch(arrA,arrB,5)<<endl;
    return 0;
}
