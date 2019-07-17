#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int> a) {

    int  n=a.size();
    vector<int> arr(n);
    cout<<n<<endl;
    int j=0;
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=a[i];
        j+=1;;

    }

    return arr;

}

int main()
{
    vector<int> a(10),b(10);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        a.push_back(i);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    cout<<a.size()<<endl;

    b=reverseArray(a);

    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";


    return 0;
}
