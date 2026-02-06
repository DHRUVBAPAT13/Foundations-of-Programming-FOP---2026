
#include<stdio.h>

void main()
{
    int orig, num, rem, res=0;

    printf("Enter any number : ");
    scanf("%d",&num);

    orig=num;

    while(orig!=0)
    {
        rem = orig%10 ;

        res = res + rem*rem*rem ;

        orig = orig/10 ;

    }

    if(res==num)
    {
        printf("%d is a armstrong number",num);
    }
    else
    {
        printf("%d is not an armstrong number",num);
    }
    
}