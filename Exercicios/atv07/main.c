#include <stdio.h>
#include <stdlib.h>

int main()
{
    //7) Receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio. O algoritmo
    //deve calcular e apresentar a quantidade de sal�rios m�nimos que esse funcion�rio
    //recebe.

    float minSalary = 1200;
    float salary;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    float qtdSalary = salary / minSalary;

    printf("Qtd of salary: %.2f", qtdSalary);
    return 0;
}
