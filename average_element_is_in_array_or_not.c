#include<stdio.h>
int main()
{
    int n,i,avg,c=0,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
    }
    avg=c/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])s++;
    }
    if(s!=0)printf("True");
    else
    printf("False");
    }