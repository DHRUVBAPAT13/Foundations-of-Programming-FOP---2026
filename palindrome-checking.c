#include <stdio.h>
#include <string.h>

void main()
{
    char str1[25];
    int i, j, x, len;

    printf("Enter a string ");
    printf("(The program is CASE SENSITIVE) : ");
    scanf("%s",str1);

    len = strlen(str1);

    char str2[len];

    for(i=len-1,j=0;i>=0,j<len;i--,j++)
    {
        str2[j] = str1[i];
    }
    str2[len] = '\0';
    x = strcmp(str1,str2);

    if(x==0)
        printf("String %s is a palindrome\n",str1);
    else
        printf("String %s is not a palindrome\n",str1); 
}