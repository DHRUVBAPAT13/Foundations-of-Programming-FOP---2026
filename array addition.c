
#include <stdio.h>

void main()
{
    int a[3];
    int b[3];
    int c[3];
    int i;

    printf("Enter elements of a ");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter elements of b ");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<=2;i++)
    {
        c[i]=a[i]+b[i];
    }

    printf("The final array is ");
    for (i=0;i<=2;i++)
    {
        printf("%d ",c[i]);
    }
}