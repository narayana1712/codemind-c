#include<stdio.h>
int main()
{
    float celcius,fahren;
    scanf("%f",&fahren);
    celcius=(fahren-32)*5.0/9.0;
    {
        printf("%.2f ",celcius);
    }
}