
#include<stdio.h>
int main()
#define MAX_LEN 1024
{
    int n,k,a,b,i,j,and_res,or_res,xor_res;
    int and_max=0,or_max=0,xor_max=0;
    scanf("%d%d",&n,&k);

    for(i=1;i<n;i++){
        a = i;
        for(j=i+1;j<=n;j++){
            b = j;
            and_res = a&b;
            //printf("%d\n",and_res);
            if(and_res<k){
                if(and_res>and_max)
                {
                and_max = and_res;
                }
            }
            or_res = a|b;
            //printf("%d\n",or_res);
            if(or_res<k){
                if(or_res > or_max )
                {
                or_max = or_res;
                }
            }
            xor_res = a^b;
           // printf("%d\n",xor_res);
            if (xor_res<k){
                if(xor_res > xor_max)
                {
                xor_max = xor_res;
                }
            }


        }
    }
    printf("%d\n",and_max);
    printf("%d\n",or_max);
    printf("%d\n",xor_max);
    return 0;
}
