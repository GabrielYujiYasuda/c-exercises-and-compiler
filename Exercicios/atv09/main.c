#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //9) Receba os valores dos dois catetos de um triângulo, calcule e apresente o valor da
    //hipotenusa. OBS - Teorema de Pitágoras:
    //a2 = b2 + c2

    float c = 1;
    float b = 2;
    float hipotenusa = sqrt(b * b + c * c);

    printf("%f", hipotenusa);


    return 0;
}

