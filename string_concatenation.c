#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20], str2[20];
    printf("Enter first string : ");
    scanf("%s",str1);

    printf("Enter second string : ");
    scanf("%s",str2);

    printf("Final string after concatenation is %s \n",strcat(str1,str2));
}