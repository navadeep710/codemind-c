#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int r,v;
    r=a+b;
    v=a-b;
    float c,d;
    scanf("%f%f",&c,&d);
    float x,y;
    x=c+d;
    y=c-d;
    printf("%d %d
",r,v);
    printf("%0.1f %0.1f",x,y);
    
}