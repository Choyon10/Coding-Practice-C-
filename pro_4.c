#include<stdio.h>
#define MAX_LEN 1024
int sum(int a[],int count){
    int s=0,i;
    for (i=0 ;i<count;i++)
    {
        s +=a[i];
    }
    return s;
}
int main()

{

    int i,h1_count,h1[100],h2_count,h2[100],h3_count,h3[100];
    scanf("%d%d%d",&h1_count,&h2_count,&h3_count);
    for(i=0;i<h1_count;i++)
    {
       scanf("%d",&h1[i]);
    }
    for(i=0;i<h2_count;i++)
    {
       scanf("%d",&h2[i]);
    }
    for(i=0;i<h3_count;i++)
    {
       scanf("%d",&h3[i]);
    }

    int a,b,c;
    while(1){
        a = sum(h1,h1_count);
        b = sum(h2,h2_count);
        c = sum(h3,h3_count);
        if(a==b && b==c)
        {
            printf("%d",a);
            break;
        }

        if((a > b) && (a > c))
        {
            for(i=0;i<h1_count-1;i++){
                h1[i]=h1[i+1];
            }
            h1[i]=0;


        }
        else if((b > a) && (b > c))
        {
            for(i=0;i<h2_count-1;i++){
                h2[i]=h2[i+1];
            }
            h2[i]=0;

        }
        else if((c > a) && (c > b))
        {
            for(i=0;i<h3_count-1;i++){
                h3[i]=h3[i+1];
            }
            h3[i]=0;
        }
    }
    return 0;
}
