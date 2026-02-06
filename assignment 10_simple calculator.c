
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
    double a, b;

    printf("Enter any two positive numbers : ");
    scanf("%lf %lf",&a, &b);

    printf("The addition a+b is %lf",a+b);

    printf("The subtraction a-b is %lf",a-b);

    printf("The multiplication a*b is %lf",a*b);

    if(b==0)
    {
        printf("Error, cannot divide by zero");
    
    }
    else
    {
        printf("The division a/b is %lf",a/b);
    }

    printf("The exponent a to the power b is %lf",pow(a,b));

    printf("The factorials of a and b are %d %d ",factorial((int)a),factorial((int)b));

}