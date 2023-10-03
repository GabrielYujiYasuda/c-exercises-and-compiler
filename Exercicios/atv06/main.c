#include <stdio.h>
#include <stdlib.h>

int main()
{
    //6) Receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit.
    //OBS: F = (C * 1,8) + 32.
    float tempCelsius;

    printf("Enter your temp in Celsius: ");
    scanf("%f", &tempCelsius);

    float tempFahr = (tempCelsius * 1.8) + 32;

    printf("Temp in fahrenheit: %.2f", tempFahr);
    return 0;
}
