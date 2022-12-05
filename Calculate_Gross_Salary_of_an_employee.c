#include<stdio.h>
int main()
{
    float bs,hra,da,pf,ts;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=bs*0.12;
    ts=bs+hra+da+pf;
    printf("%0.2f
%.2f",pf,ts);
}