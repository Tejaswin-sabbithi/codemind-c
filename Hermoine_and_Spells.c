#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&c>b)
    {
        printf("%d",a+c);
    }
    else if(c>a&&b>a)
    printf("%d",c+b);
    else if(a>c&&b>c)
    printf("%d",a+b);
}