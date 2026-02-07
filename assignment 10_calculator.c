
#include<stdio.h>


void main()
{
    
    int a, b;

    printf("Enter any two numbers : ");
    scanf("%d %d",&a, &b);

    printf("\n===== Simple Calculator =====");

    printf("\nThe addition a+b is %d",a+b);

    printf("\nThe subtraction a-b is %d",a-b);

    printf("\nThe multiplication a*b is %d",a*b);

    if(b==0)
    {
        printf("\nError, cannot divide by zero");
    }
    else
    {
        printf("\nThe division a/b is %f",(float)a/(float)b);
    }

    int x;
    long long int result=1 ;
    for(x=0;x<b;x++)
    {
        result = result*a;
    }
    
    printf("\nThe exponent a to the power b is %lld",result);

    int i, j, fact1=1, fact2=1;

    for(i=1;i<=a;i++)
    {
        fact1 = fact1*i;
    }

    for(j=1;j<=b;j++)
    {
        fact2 = fact2*j;
    }

    printf("\nThe factorials of a and b are %d and %d \n\n",fact1,fact2);


}