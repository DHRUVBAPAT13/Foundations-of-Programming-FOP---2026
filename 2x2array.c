
#include<stdio.h>

void main()
{
    int a[2][2], i, j;

    //input loop
    printf("Give entries of elements of a\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // output loop
    printf("\nThe 2x2 array a is \n");
    for(i=0;i<=1;i++)
    {
        printf("\n");
        for(j=0;j<=1;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    printf("\n");

}