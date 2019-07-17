#include<stdio.h>
#include<string.h>
#define MAX_LEN 1024
int main()
{
    char n[MAX_LEN];
    int k,i,s,sum,j=1;
    scanf("%s",n);
    scanf("%d",&k);
    while(1)
    {
        if(strlen(n)==1)
        {
            break;
        }
        sum = 0;
        for(i=0;i<strlen(n);i++)
        {
            s = n[i]-'0';
            sum+=s;
        }

        if(j==1){
            sum = sum*k;
            j=-1;
        }
        sprintf(n, "%d", sum);
    }
    sum = n[0] -'0';
   printf("%d",sum);
    return 0;
}
