#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3) Receba a cotação do dólar em reais e um valor que o usuário possui em dólares.
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
