#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

void main()
{
    int n, i;
    double angle, sum=0.0;
    printf("Enter number/angle(in degrees) n to which the series of sine is to be summed : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        angle = ((double)i*pi)/180;
        sum += sin(angle);
    }

    printf("The sum of sine series till n degrees is %lf\n",sum);
    

}