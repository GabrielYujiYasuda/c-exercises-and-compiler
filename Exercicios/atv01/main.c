#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1) Receba três notas, calcule e apresente a média aritmética delas.
    int nota1;
    int nota2;
    int nota3;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota1);
    printf("Digite a primeira nota: ");
    scanf("%d", &nota2);
    printf("Digite a primeira nota: ");
    scanf("%d", &nota3);

    int avg = (nota1 + nota2 + nota3) / 3;

    printf("The avarege of %d + %d + %d is: %d", nota1, nota2, nota3, avg);

    return 0;
}
