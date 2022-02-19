#include<stdio.h>
int main()
{
    int n,s=0,p=1,res,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    res=p-s;
    printf("%d",res);
}