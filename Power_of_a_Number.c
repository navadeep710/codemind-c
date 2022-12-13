#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int r;
    r=pow(x,y);
    int f;
    f=r%z;
    printf("%d",f);
}