#include <stdio.h>

typedef struct 
{
    char name[50];
    int roll_no;
    float m1, m2;
    double result;
}Student;

void main()
{
    int n, i;
    printf("Enter number of students : ");
    scanf("%d",&n);

    Student s[n];

    for(i=0;i<n;i++)
    {
        printf("Enter student name : ");
        scanf("%s",s[i].name);
        printf("Enter student roll no :");
        scanf("%d",&s[i].roll_no);
        printf("Enter marks of two subjects (out of 100) :");
        scanf("%f %f",&s[i].m1,&s[i].m2);
    }

   for(i=0;i<n;i++)
   {
    printf("\n");
    printf("Student name : %s\n",s[i].name);
    printf("Student Roll no : %d\n",s[i].roll_no);
    printf("Students marks for m1 and m2 : %f %f\n",s[i].m1,s[i].m2);
    s[i].result = (s[i].m1 + s[i].m2)/2 ;
    printf("Student percentage is : %lf \n",s[i].result);
    printf("\n");
   }
    
}
