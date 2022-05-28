#include<stdio.h>
int main()
{
    int n,i,j,alphabet=65;;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c ",(alphabet+i));
        }
        printf("
");
    }    
}