#include <stdio.h>
#include <string.h>

void main()
{
    int ch;
    printf("Enter 1 for string length\n");
    printf("Enter 2 for string reversal\n");
    printf("Enter 3 for palindrome check\n");
    printf("Enter 4 for string comparison\n");
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
        len = strlen(str1);

        printf("The reversed string is : ");
        for(i=len-1;i>=0;i--)
        {
            printf("%c",str1[i]);
        }
        printf("\n");
        break;

    case 3:
        printf("Enter a string ");
        printf("(The program is CASE SENSITIVE) : ");
        scanf("%s",str1);

        len = strlen(str1);

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
    

    case 4:
        printf("Enter first string : ");
        scanf("%s",str1);

        printf("Enter second string : ");
        scanf("%s",str2);

        b = strcmp(str1,str2);

        if(b==0)
            printf("Both strings are same\n");
        else
            printf("The two strings are not same\n");

    case 5 : 
        int len1, len2, found = 0;

        printf("Enter main string : ");
        scanf(" %[^\n]s", str1); // Handles spaces
        printf("Enter substring to check : ");
        scanf(" %[^\n]s", str2);

        len1 = strlen(str1);
        len2 = strlen(str2);

        for(i = 0; i <= (len1 - len2); i++)
        {
            for(j = 0; j < len2; j++)
            {
                if(str1[i + j] != str2[j])
                {
                    break; 
                }
            }
            if(j == len2)
            {
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            printf("Yes, the exact sequence exists.\n");
        }
        else
        {
            printf("No, the exact sequence was not found.\n");
        }
        break;
    
    case 6:
        printf("You Have Exited the program.");
        break;
    
    default:
        printf("Invalid choice.");
        break;
    }
}