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

    //10) Receba o raio, calcule e apresente:
    //a. O comprimento de uma esfera: C = 2 * π * R.
    //b. A área de uma esfera: A = π * R2
    //c. O volume de uma esfera: V = 3⁄4 * π * R3

    //11) Calcule e mostre a tabuada de multiplicação de um número informado pelo usuário no
    //teclado.
    //Exemplo:
    //Informe um número: 7
    //7 x 0 = 0
    //7 x 1 = 7
    //7 x 2 = 14
    //7 x 3 = 21
    //7 x 4 = 28
    //7 x 5 = 35
    //7 x 6 = 42
    //7 x 7 = 49
    //7 x 8 = 56
    //7 x 9 = 63
    //7 x 10 = 70

    return 0;
}
