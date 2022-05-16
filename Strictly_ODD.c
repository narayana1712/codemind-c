#include<stdio.h>
int main()
{
    int arr[100],i,j,c=0,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0 && arr[i]%2!=0)
        {
            c=c+1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            k=k+1;
        }
    }
    if(c==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}