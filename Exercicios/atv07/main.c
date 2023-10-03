#include <stdio.h>
#include <stdlib.h>

int main()
{
    //7) Receba o valor do salário mínimo e o valor do salário de um funcionário. O algoritmo
    //deve calcular e apresentar a quantidade de salários mínimos que esse funcionário
    //recebe.

    float minSalary = 1200;
    float salary;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    float qtdSalary = salary / minSalary;

    printf("Qtd of salary: %.2f", qtdSalary);
    return 0;
}
