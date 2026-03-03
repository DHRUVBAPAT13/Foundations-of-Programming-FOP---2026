#include <stdio.h>
#include <string.h>

void main()
{
    char str1[20];

    printf("Enter a string : ");
    scanf("%s",str1);

    int i, len;
    len = strlen(str1);

    printf("The reversed string is : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str1[i]);
    }
    printf("\n");
}