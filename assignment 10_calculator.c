
#include<stdio.h>


void main()
{
    
    int a, b, ch;

    printf("Enter any two numbers : ");
    scanf("%d %d",&a, &b);

    printf("\n===== Simple Calculator =====");

    printf("\n Enter 1 for addition");
    printf("\n Enter 2 for subtraction");
    printf("\n Enter 3 for multiplication");
    printf("\n Enter 4 for division");
    printf("\n Enter 5 for exponent");
    printf("\n Enter 6 for factorial");
    printf("\n Enter 7 to exit");



    printf("\n enter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1 :
        printf("\n The addition is %d\n",a+b);
        break;

        case 2 :
        printf("\n The subtraction is %d\n",a-b);
        break;

        case 3 :
        printf("\n The multiplication is %d\n",a*b);
        break;

        case 4 :
        if(b != 0){
            printf("\n The division is %.4f\n",(float)a/(float)b);
        }
        else{
            printf("\nError, cannot divide by zero\n");
        }
        break;

        

        case 5 :
        int x;
        long long int result=1 ;
        for(x=0;x<b;x++)
        {
            result = result*a;
        }
        printf("\nThe exponent a to the power b is %lld\n",result);
        break;

        case 6 :
        int i, j, fact1=1, fact2=1;

        for(i=1;i<=a;i++)
        {
            fact1 = fact1*i;
        }

        for(j=1;j<=b;j++)
        {
            fact2 = fact2*j;
        }

        printf("\nThe factorials of a and b are %d and %d \n",fact1,fact2);
        break;

        case 7 :
        printf("\n You have exited\n");
        break;

        default :
        printf("\n Please enter valid value of choice from 1 to 7\n");
        break;

    }

    
    


}