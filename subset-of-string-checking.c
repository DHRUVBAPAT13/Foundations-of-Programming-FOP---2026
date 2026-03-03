#include <stdio.h>
#include <string.h>

void main()
{
    char str1[50], str2[50];
    int i, j, len1, len2;
    int found = 0;

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
        printf("Yes, the exact sequence exists.\n");
    else
        printf("No, the exact sequence was not found.\n");
}