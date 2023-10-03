#include <stdio.h>
#include <stdlib.h>

int main()
{
    //8) Receba o peso de uma pessoa, calcule e apresente o novo peso:
    //a. Se a pessoa engordar 15%.
    //b. Se a pessoa emagrecer 20%.

    float peso;

    printf("Entre com seu peso: ");
    scanf("%f", &peso);

    float engordar = peso + (peso * 0.15);
    float emagrecer = peso - (peso * 0.2);

    printf("\nEngordou: %.2f", engordar);
    printf("\nEmagreceu: %.2f", emagrecer);

    return 0;
}
