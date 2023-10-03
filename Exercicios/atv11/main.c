#include <stdio.h>
#include <stdlib.h>

int main()
{
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

    int i;
    int num = 3;
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, (num * i));
    }

    return 0;
}
