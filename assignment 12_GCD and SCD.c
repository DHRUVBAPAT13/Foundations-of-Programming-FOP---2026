#include <stdio.h>

void main()
{
    int a, b, i;
    int scd, gcd;
    int min;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    //SCD
    min = (a < b) ? a : b;

    for (i = 2; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            scd = i; 
            break; // Found the smallest, so we stop immediately
        }
    }

    if (scd != 0) {
        printf("SCD of %d and %d is %d\n", a, b, scd);
    } else {
        printf("No common divisor found for %d and %d (except 1).\n", a, b);
    }    

    //GCD
    if(a==b)
        printf("Both numbers are same\n");
    else if(b>a)
        for(i=a;i>=1;i--)
            if(b%i==0 && a%i==0)
            {
                gcd = i;
                break;
            }
    else if(a>b)
        for(i=b;i>=1;i--)
            if(b%i==0 && a%i==0)
            {
                gcd = i;
                break;
            }
    
        
    if(gcd != -1)
        printf("GCD of %d and %d is %d\n",a,b,gcd);

}