#include<bits/stdc++.h>
using namespace std;

void pointercatch(int *p)
{
    printf("%d\n",p);
    cout<<*p<<endl;
    *p+=1;

}
int main()
{
    int a=10;
    //pointercatch(&a);
    //printf("%d\n",&a);
    cout<<a<<endl;
    int arr[100];
    printf("%d",arr);

    for(int i=0;i<10;i++)
        arr[i]=rand()%10+1;


    int *p=arr;
    printf("%d\n",p);
    printf("%d,%d",*p+5,*(p+5));

    return 0;

}
