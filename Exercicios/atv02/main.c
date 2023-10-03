#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2) Receba o ano de nascimento de uma pessoa, o ano atual e imprima:
    //a. A idade da pessoa no ano atual.
    //b. A idade que a pessoa terá em 2050.

    int currenltyYear = 2023;
    int birthYear;
    int age;
    int futureAge;

    printf("Your birth year: ");
    scanf("%d", &birthYear);

    printf("The currently year: ");
    scanf("%d", &currenltyYear);

    age = (currenltyYear - birthYear);
    futureAge = 2050 - birthYear;

    printf("\nYour age is: %d", age);
    printf("\nYour age in 2025 will be: %d", futureAge);

    return 0;
}
