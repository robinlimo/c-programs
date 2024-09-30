#include<stdio.h>

int main()
{
    int age;
    double income;

    // promots for age and income

    printf("enter age:");
    scanf("%d,",&age);

    printf("enter annual icome in sh:");
    scanf("%lf,",&income);

    // check if the customer qualifies for the loan

    if (age >= 21 && income >= 21000)

    printf("unfortunately,we are unable to offer you a loan at this time.\n");

    return 0;

}
