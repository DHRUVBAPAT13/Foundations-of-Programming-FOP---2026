#include <stdio.h>
#include <string.h>

void main()
{
    int ch;
    printf("Enter 1 for string length\n");
    printf("Enter 2 for string comparison\n");
    printf("Enter 3 for string concatenation\n");
    printf("Enter 4 for string copy\n");
    printf("Enter 5 for substring check\n");
    printf("Enter 6 to exit\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);

    char str1[50], str2[50];
    int i, j, x, len, b;

    switch (ch)
    {
    case 1:
        printf("Enter any String : ");
        scanf("%s",str1);
        printf("String is %s and its length is %lu \n",str1,strlen(str1));
        break;

    case 2:
        printf("Enter first string : ");
        scanf("%s",str1);

        printf("Enter second string : ");
        scanf("%s",str2);

        b = strcmp(str1,str2);

        if(b==0)
            printf("Both strings are same\n");
        else
            printf("The two strings are not same\n");

    case 3:
        printf("Enter first string : ");
        scanf("%s",str1);

        printf("Enter second string : ");
        scanf("%s",str2);

        printf("Concatenation of the two strings is %s\n",strcat(str1,str2));
        break;

    case 4:
        printf("Enter first string : ");
        scanf("%s",str1);

        printf("The str1 is now copied in the str2 -> %s\n",strcpy(str2,str1));
        break;

    case 5:
        printf("Enter first string : ");
        scanf("%s",str1);

        printf("Enter second string : ");
        scanf("%s",str2);

        char *p = strstr(str1,str2);

        if(p)
        {
            printf("String is found, first occurence of '%s' in '%s' is '%s'\n",str1,str2,p);
        }
        else
        {
            printf("Substring not found");
        }
        break;
    

    case 6:
        printf("You Have Exited the program\n.");
        break;
    
    default:
        printf("Invalid choice\n.");
        break;
    }
}