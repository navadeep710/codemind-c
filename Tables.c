#include<stdio.h>
int main()
{
    int n,i,j,p;
    scanf("%d%d",&n,&j);
    for(i=1;i<=j;i++)
    {
        if(i%2!=0)
        {
             p=n*i;
             printf("%d x %d = %d
",n,i,p);
        }
    }
}