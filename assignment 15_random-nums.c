#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int n;
    printf("Enter the no. of numbers user wants : ");
    scanf("%d",&n);

    //seed generationa
    srand(time(0));

    printf("The random numbers are : ");
    for(int i=0;i<n;i++)
        {
            printf("%d",rand());
        }
}
