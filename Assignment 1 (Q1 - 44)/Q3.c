#include <stdio.h>

int main()
{
    float salary, health, rent, travel, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    health = 0.30 * salary;   // Health Allowance - 30% of basic salary
    rent = 0.20 * salary;  // Rent Allowance - 20% of basic salary
    travel = 0.10 * salary;   // Travel Allowance - 10% of basic salary

    gross = salary + health + rent + travel;

    printf("Health Allowance = %f\n", health);
    printf("House Rent Allowance = %f\n", rent);
    printf("Travel Allowance = %f\n", travel);
    printf("Gross Salary = %f\n", gross);

    return 0;
}
