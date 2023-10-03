#include <stdio.h>
#include <stdlib.h>

int main()
{
    //4) Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
    //salário, sabendo-se que ele teve um aumento de 25%.

    float salary;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    float increase = salary * 0.25;
    float newSalary = (salary + increase);

    printf("\nYour increase is: %.2f", increase);
    printf("\nYour new salary is: %.2\n", newSalary);

    return 0;
}
