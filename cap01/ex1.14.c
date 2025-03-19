#include <stdio.h>
#include <stdlib.h>

int main ( void ) {
    float lado;

    printf("Valor do Lado: ");
    scanf("%f", &lado);

    printf("Perimetro = %.2f\n", lado * 4);
    printf("Area = %.2f", lado * lado);

    return 0;
}