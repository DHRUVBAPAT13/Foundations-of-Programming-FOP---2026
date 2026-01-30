
#include<stdio.h>

void main()
{
    int a[5], i;

    printf("Enter array elements ");
    for(i=0;i<=4;i++)
    {
        scanf("%d \n", &a[i]);
    }

    printf("The final array is ");
    for(i=0;i<=4;i++)
    {
        printf("%d ", a[i]);
    }
    
}