#include <stdio.h>
#include <stdlib.h>

int main()
{
    //10) Receba o raio, calcule e apresente:
    //a. O comprimento de uma esfera: C = 2 * π * R.
    //b. A área de uma esfera: A = π * R2
    //c. O volume de uma esfera: V = 3⁄4 * π * R3
    float PI = 3.1415926535;
    float r = 10;
    float comprimento = (2 * PI) * r;
    float area = PI* (r * r);
    float volume = 0.75 * PI * (r * r * r);

    printf("\nComprimento: %.2f", comprimento);
    printf("\nArea: %.2f", area);
    printf("\nVolume: %.2f", volume);

    return 0;
}
