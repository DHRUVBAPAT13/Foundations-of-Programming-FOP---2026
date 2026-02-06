
#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

void main()
{
    int a, b;

    printf("Enter any two positive numbers : ");
    scanf("%d %d",&a, &b);

    printf("The addition a+b is %d",a+b);

    printf("The subtraction a-b is %d",a-b);

    printf("The multiplication a*b is %d",a*b);

    if(b==0)
    {
        printf("Error, cannot divide by zero");
    
    }
    else
    {
        printf("The division a/b is %d",a/b);
    }

    printf("The exponent a to the power b is %d",(int)pow(a,b));

    printf("The factorials of a and b are %d %d ",factorial(a),factorial(b));

}