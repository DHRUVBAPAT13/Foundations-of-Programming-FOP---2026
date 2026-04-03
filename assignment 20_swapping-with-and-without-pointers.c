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

    printf("Swapping using pointers -> %d %d\n", *a, *b);
}

int main()
{
    int x, y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);

    printf("Numbers before swapping -> %d and %d\n",x,y);

    printf("Enter your choice (1 for normal swap, 2 for pointer swap): ");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        normal_Swap(x,y);
    } else if (choice == 2) {
        pointer_Swap(&x,&y);
    }
    return 0;
}