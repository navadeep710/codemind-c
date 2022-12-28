#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int m,n;
    for(int i=1;i<=a;i++)
    {
        scanf("%d%d",&m,&n);
        printf("%d
",m+n);
    }
}