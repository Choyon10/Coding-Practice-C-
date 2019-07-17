
#include<stdio.h>
#include<string.h>
#define MAX_LEN 1024
int superDigit(char n[])
{
    int sum =0,i,s;
    while(1)
    {
        if(strlen(n)==1)
        {
            break;
        }
        for(i=0;i<strlen(n);i++)
        {
            s = n[i]-'0';
            sum+=s;
        }
        sprintf(n, "%d", sum);
    }
    sum = n[0] -'0';
    return sum;
}


int main()
{
    char n[MAX_LEN];
    int k,i,s,sum=0;
    scanf("%s",&n);
    scanf("%d",&k);

    for(i=0;i<strlen(n);i++)
    {
        s = n[i]-'0';
        sum+=s;
    }
    sum = sum*k;
    sprintf(n, "%d", sum);
    //printf("%d %s",strlen(n),n);
    int sup = superDigit(n);
    printf("%d",sup);
    return 0;
}
