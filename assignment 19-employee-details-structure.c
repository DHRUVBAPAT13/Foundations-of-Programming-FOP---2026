#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[40];
    char designation[40];
    char gender;
    char date_join[15];
    float salary;
};

void total_employees(int n)
{
    printf("Total number of employees : %d",n);
}

void count_Gender(struct Employee emp[], int n) 
{
    int i, male=0, female=0;
    for(i=0;i<n;i++)
    {
        if(emp[i].gender == 'M')
            male++;
        else if(emp[i].gender == 'F')
            female++;
    }
    printf("No. of male employees : %d\n",male);
    printf("No. of female employees : %d",female);
};

void findHighSalary(struct Employee emp[], int n) 
{
    printf("Employees with salary more than 10000: ");
    int found = 0;
    for (int i = 0; i < n; i++) 
    {
        if(emp[i].salary > 10000) 
        {
            printf("%s ", emp[i].name);
            found = 1;
        }
    }
    if (!found) 
        printf("None");
    printf("\n");
}

void findAsstManager(struct Employee emp[], int n) {
    printf("Employees with designation AsstManager: ");
    int found = 0;
    for (int i = 0; i < n; i++) {
        // strcasecmp provides case-insensitive comparison on Linux 
        if (strcasecmp(emp[i].designation, "AsstManager") == 0 || 
            strcasecmp(emp[i].designation, "Asst Manager") == 0) {
            printf("%s ", emp[i].name);
            found = 1;
        }
    }
    if (!found) 
        printf("None");
    printf("\n");
}

void main()
{
    int n, i=0; 
    printf("Enter number of employees whose details are to be enetered : ");
    scanf("%d",&n);

    struct Employee emp[n];

    while(i<n)
    {
        printf("Enter details of the employee : \n");
        printf("Enter name : ");
        scanf(" %[^\n]s",emp[i].name);
        printf("\nEnter Designation : ");
        scanf(" %[^\n]s",emp[i].designation);
        printf("\nEnter Gender (M for male and F for female) : ");
        scanf(" %c",&emp[i].gender);
        printf("\nEnter date of joining : ");
        scanf("%s",emp[i].date_join);
        printf("\nEnter salary : ");
        scanf("%f",&emp[i].salary);
        printf("\n");
        i++;
    }

    printf("\n");
    total_employees(n);
    printf("\n");
    count_Gender(emp, n);
    printf("\n");
    findHighSalary(emp, n);
    findAsstManager(emp, n);
    printf("\n");

}