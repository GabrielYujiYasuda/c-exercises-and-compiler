#include <stdio.h>
#include <stdlib.h>

int main()
{
    //5) Calcule e apresente a �rea de um losango. As diagonais maior e menor do losango
    //devem ser informadas pelo usu�rio. OBS: AREA = (DIAGONAL MAIOR * DIAGONAL
    //MENOR) / 2.

    float big;
    float small;

    printf("Big: ");
    scanf("%f", &big);

    printf("Big: ");
    scanf("%f", &small);

    float area = (big * small) / 2;

    printf("The area is: %.2f", area);

    return 0;
}
