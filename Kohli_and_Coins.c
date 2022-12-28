#include<stdio.h>
int main()
{
    int x,y,z,t,to,a=5,b=10;
    scanf("%d",&x);
    y=x/b;
    z=(x-y*10)/5;
    to=y*10+z*5;
    t=y+z;
    if(to==x)printf("%d",t);
    else printf("-1");
}