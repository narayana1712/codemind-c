#include<stdio.h>
int main()
{
    int arr[100],n,i,s=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
    	scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
        	s=1;
        	break;
		}
    }
    if(s==0)
    {
    	printf("True");
	}
	else
	{
		printf("False");
	}
}