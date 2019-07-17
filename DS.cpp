#include<bits/stdc++.h>
using namespace std;
int hourglassSum(int arr[6][6])
{
    int sum =0;
    int max=-99999;
    for(int i =1;i<=4;i++){
        for(int j=1;j<=4;j++)
        {
            sum = arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
            if(sum>max)
                max=sum;
        }
    }
    return max;
}

int main()
{
    int arr[6][6];
    int n;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
          cin>>n;
          arr[i][j]=n;
        }
    }

    int max=hourglassSum(arr);
    cout<<max<<endl;
    return 0;

}
