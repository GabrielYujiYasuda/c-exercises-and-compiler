#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3) Receba a cota��o do d�lar em reais e um valor que o usu�rio possui em d�lares.
    //Imprima este valor em reais.

    float valueDollarInReal= 5.5;
    float valorClienteDolar;
    float finalValue;

    printf("Enter your amount: ");
    scanf("%f", &valorClienteDolar);

    finalValue = (valorClienteDolar * valueDollarInReal);

    printf("Your total amount in dollar is: %.2f", finalValue);
    return 0;
}
