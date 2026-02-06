
#include<stdio.h>

void main()
{
    float a, b ;
    int cho;

    printf("Enter two numbers a and b : ");

    scanf("%f %f",&a, &b);

    printf("\n Enter 1 for addition");
    printf("\n Enter 2 for subtraction");
    printf("\n Enter 3 for multiplication");
    printf("\n Enter 4 for division");
    printf("\n Enter 5 to exit");
    

    printf("\n enter your choice : ");
    scanf("%d",&cho);

    switch(cho)
    {
        case 1 :
        printf("\n The addition is %.4f\n",a+b);
        break;

        case 2 :
        printf("\n The subtraction is %.4f\n",a-b);
        break;

        case 3 :
        printf("\n The multiplication is %.4f\n",a*b);
        break;

        case 4 :
        if(b != 0){
            printf("\n The division is %.4f\n",a/b);
        }
        else{
            printf("\nError, cannot divide by zero\n");
        }
        break;

        case 5 :
        printf("\n You have exited\n");
        break;

        default :
        printf("\n Please enter valid value of choice from 1 to 5\n");
        break;

    }

}



