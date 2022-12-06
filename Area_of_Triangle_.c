#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float r;
    scanf("%f",&r);
    r=(a+b+c)/2;
    float n;
    n=sqrt(r*(r-a)*(r-b)*(r-c));
    printf("%0.2f",n);
}