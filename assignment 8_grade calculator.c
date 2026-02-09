
#include<stdio.h>

void main()
{
    float sub1, sub2, sub3, sub4, sub5, total, avg;

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

    total = sub1+sub2+sub3+sub4+sub5 ;
    avg = (total)/5 ;

    if(sub1>=40 && sub2>=40 && sub3>=40 && sub4>=40 && sub5>=40)
    {
        printf("Result : PASS \n");

        if(avg>75)
        {
          printf("Distinguished performance!\n");
        }
        else if(avg>=60 && avg<75)
        {
            printf("You have grade : first division\n");
        }
        else if(avg>=50 && avg<60)
        {
            printf("You have grade : second division\n");
        }
        else if(avg>=50 && avg<50)
        {
            printf("You have grade : third division\n");
        }
    }
    else
    {
        printf("Result : Fail\n");
    }
    
    printf("Total marks are %.2f \n",total);
    printf("Your percentage is %.2f %% \n",avg);

}
