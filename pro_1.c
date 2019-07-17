#include<stdio.h>
int main()
#define MAX_LEN 1024
{
    char ch,s[MAX_LEN],sen[MAX_LEN];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]*c",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}
