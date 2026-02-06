
#include<stdio.h>

void main()
{
    float sub1, sub2, sub3, sub4, sub5, avg;

    printf("Enter marks for subject 1 out of 100 : ");
    scanf("%f",&sub1);

    printf("\nEnter marks for subject 2  out of 100 : ");
    scanf("%f",&sub2);

    printf("\nEnter marks of subject 3  out of 100 : ");
    scanf("%f",&sub3);

    printf("\nEnter marks for subject 4  out of 100 : ");
    scanf("%f",&sub4);

    printf("\nEnter marks for subject 5  out of 100 :");
    scanf("%f",&sub5);

    avg = (sub1+sub2+sub3+sub4+sub5)/5 ;

    printf("Your average marks are %.2f \n",avg);

    if(avg>75)
    {
        printf("Distinguished performance!\n");
    }
    else if(avg>=60 && avg<75)
    {
        printf("You have got first division\n");
    }
    else if(avg>=50 && avg<60)
    {
        printf("You have second division\n");
    }
    else if(avg>=50 && avg<50)
    {
        printf("You have third division\n");
    }
    else
    {
        printf("You have failed in the exam\n");
    }

}
