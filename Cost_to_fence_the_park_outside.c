#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int a,x,y;
    x=l*b;
    y=(l+2*w)*(b+2*w);
    a=(y-x)*c;
    printf("%d",a);
}