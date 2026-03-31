#include <stdio.h>
#include <math.h>

void main()
{
    float x;
    int n, i;

    printf("Enter value of x (in radians) : ");
    scanf("%f",&x);
    
    printf("Enter the number of terms : ");
    scanf("%d",&n);

    double sum = 0 ;
    double term = x;

    for(i=1;i<=n;i++)
    {
        sum = sum + term;
        term = term*((-(x*x))/((2*i)*(2*i + 1)));
    }

    printf("The sum of series is = %lf\n",sum);
}