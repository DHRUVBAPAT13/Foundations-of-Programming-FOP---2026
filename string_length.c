#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100];
    printf("Enter any String : ");
    scanf("%s",str1);
    printf("String is %s and its length is %lu \n",str1,strlen(str1));
}