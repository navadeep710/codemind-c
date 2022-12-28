#include<stdio.h>
int main()
{
    int b;
    float amt,tamt;
    scanf("%d",&b);
    if (b<=199)
    {
        amt=b*1.20;
        //printf("%.2f",amt);
    }
    else if (b>=200 && b<400)
    {
        amt=b*1.50;
        //printf("%.2f",amt);
    }
    else if (b>=400 && b<600)
    {
        amt=b*1.80;
      //  printf("%.2f",amt);
    }
    else if (b>=600)
    {
        amt=b*2.00;
       // printf("%.2f",amt);
    }
    if (amt>400)
    {
        tamt=amt+(amt*0.15);
        printf("%.2f",tamt);
    }
    else if (amt<=400)
    {
        tamt=amt+100;
        printf("%.2f",tamt);
    }
}