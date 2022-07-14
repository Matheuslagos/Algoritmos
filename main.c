#include <stdio.h>
#include <stdlib.h>
#include "includes/calculos.h"
int main()
{
    printf("usando headers\n");
    int y = 5;
    int quad = quadrado(y);
    int cub = cubo(y);
    printf("Quadrado de %d\n", y, quad);
    printf("cubo de %d\n", y, cub);
    printf("valor da constante PI %f\n", _PI);
}