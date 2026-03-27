#include <stdio.h>

void normal_Swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Swapping without pointers -> %d %d",a,b);
    
}

void pointer_Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("Swapping using pointers %d and %d\n", *a, *b);
}

void main()
{
    int x, y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);

    printf("Numbers before swapping -> %d and %d",x,y);

    normal_Swap(x,y);

    pointer_Swap(&x,&y);
}