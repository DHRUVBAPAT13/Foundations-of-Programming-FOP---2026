#include <stdio.h>

long long int normal_Factorial(int n)
{
    int fact=1, i;
    if(n>=1)
    {
        for(i=1;i<=n;i++)
        {
            fact = fact*i;
        }
        return fact;
    }
    else
    {
        return 1;
    }
}

long long int recursive_Factorial(int n)
{
    if(n>=1)
        return n*recursive_Factorial(n-1); 
    else 
        return 1;
}

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Factorial of %d by normal function = %lli. \n",n,normal_Factorial(n));
    printf("Factorial of %d by recursive function = %lli. \n",n,recursive_Factorial(n));

}