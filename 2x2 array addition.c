
#include<stdio.h>

void main()
{
    int a[2][2], b[2][2], c[2][2], i, j ;

    //input loops for a and b arrays
    printf("Enter values of elements of a ");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter values of elements of b ");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //addtion loop
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    //output loop
    printf("\n The final array c is : ");
    for(i=0;i<=1;i++)
    {
        printf("\n");
        for(j=0;j<=1;j++)
        {
            printf("%d ",c[i][j]);
        }
    }
    printf("\n");
}