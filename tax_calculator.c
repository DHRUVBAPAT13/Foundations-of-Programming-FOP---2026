
#include<stdio.h>

void main()
{
    float basic_pay, hra, ta, tax, net_salary;

    printf("Enter your basic pay : ");
    scanf("%f",&basic_pay);

    hra = basic_pay*0.1;
    ta = basic_pay*0.05;
    tax = basic_pay*0.02;

    net_salary = basic_pay + hra + ta - tax;

    printf("The net salary is %f \n",net_salary);
}