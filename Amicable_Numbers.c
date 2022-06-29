#include<stdio.h>
int main()
{
    int num1,num2,sum1=0,sum2=0,i,j,rem;
    scanf("%d%d",&num1,&num2);
    for(i=1;i<num1;i++)
    {
        rem=num1%i;
        if(rem==0)
        {
            sum1=sum1+i;
        }
    }
    for(j=1;j<num2;j++)
    {
        rem=num2%j;
        if(rem==0)
        {
            sum2=sum2+j;
        }
    }
    if(num1==sum2 && num2==sum1)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}