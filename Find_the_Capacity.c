#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int r;
    r=(a*b*c*2*512)/1024;
    printf("%dKB",r);
}