#include<stdio.h>
int main()
{
    int n,temp,count=1,square;
    scanf("%d",&n);
    temp=n;
    square=n*n;
    while(n!=0)
    {
        count=count*10;
        n=n/10;
    }
    if(square%count==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}