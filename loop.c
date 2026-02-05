
#include<stdio.h>

void main()
{
    int num, i;

    printf("Enter a number : ");
    scanf("%d",&num);

    printf("\nThe multiplication table is \n");

    //below for prints the table of given number
    for(int i=1;i<=10;i++)
    {
        printf("%d \n",num*i);
    }
}
