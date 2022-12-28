#include<stdio.h>
int main()
{
    int n,re=0,a,r;
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        re=re*10+r;
        n=n/10;
    }
    if(a==re)printf("True");
    else printf("False");
}