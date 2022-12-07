#include<stdio.h>
int main()
{
    int n,i,j,r,p;
    scanf("%d%d%d",&n,&j,&r);
    for(i=j;i<=r;i++)
    {
        p=i*n;
        printf("%d x %d = %d
",n,i,p);
    }
}    
