
#include<stdio.h>
#include<math.h>

void main()
{
    int a, ch;

    printf("Enter any number : ");
    scanf("%d",&a);

    printf("Enter 1 for square root\n");
    printf("Enter 2 for square \n");
    printf("Enter 3 for cube\n");
    printf("Enter 4 for prime checking\n");
    printf("Enter 5 for factorial\n");
    printf("Enter 6 for prime factors\n");
    printf("Enter 7 to exit \n");

    printf("Enter your choice : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1 :
        printf("The square root of a is %f \n",sqrt((float)a));
        break;
    

    case 2:
        printf("The square of a is %d \n",a*a);
        break;

    case 3 :
        printf("The cube of a is %d \n",a*a*a);
        break;

    case 4 :
        int i, cnt=0;

        if(a<=1)
        {
            printf("a is not a prime number\n");
        }
        else
        {
            for(i=2;i<=a;i++)
            {
                if(a%i == 0)
                cnt++;
            }
            if(cnt>2)
            {
                printf("a is not a prime number\n");
            }
            else
            {
                printf("a is a prime number\n");
            }
        }
        break;

    case 5 :
        int x, fact=1;
        for(x=1;x<=a;x++)
        {
            fact = fact*x;
        }
        printf("The factorial of a is %d\n",fact);
        break;

    case 6 :
        int b, c, is_prime;

        printf("The prime factors of a are : ");
        
        for(b=2;b<=a;b++)
        {
            if(a%b==0)
            {
                is_prime = 1;
                for(c=2;c<=b/2;c++)
                {
                    if(b%c==0)
                    {
                        is_prime=0;
                        break;
                    }
                }
                if(is_prime==1)
                {
                    printf("%d \t",b);
                }
            }
        }
        printf("\n");
        break;

    case 7 :
        printf("You have exited the program");
        break;

    default:
        break;
    }

}