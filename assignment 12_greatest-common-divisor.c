#include <stdio.h>

void main()
{
    int a, b, i;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    if(a==b)
        printf("Both numbers are same\n");
    else if(b>a)
        for(i=a;i>=1;i--)
            if(b%i==0 && a%i==0)
            {
                printf("GCD of %d and %d is %d\n",a,b,i);
                break;
            }
    else if(a>b)
        for(i=b;i>=1;i--)
            if(b%i==0 && a%i==0)
            {
                printf("GCD of %d and %d is %d\n",a,b,i);
                break;
            }

}