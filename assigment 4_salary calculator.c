
#include<stdio.h>

void main()
{
    float basic_pay, hra, ta, tax, gross_salary, net_salary;

    printf("Enter your basic pay : ");
    scanf("%f",&basic_pay);

    hra = basic_pay*0.1;
    ta = basic_pay*0.05;
    gross_salary = basic_pay + hra + ta ;

    tax = gross_salary*0.02;

    net_salary = gross_salary - tax;

    printf("The net salary is %f \n",net_salary);
}
