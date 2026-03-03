#include <stdio.h>
#include <string.h>

void main()
{
    char str1[25];
    char str2[25];

    printf("Enter first string : ");
    scanf("%s",str1);

    printf("Enter second string : ");
    scanf("%s",str2);

    int b;
    b = strcmp(str1,str2);

    if(b==0)
        printf("Both strings are same\n");
    else
        printf("The two strings are not same\n");
}