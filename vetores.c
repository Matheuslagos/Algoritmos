#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int *x, valor, y;
    valor = 35;
    x = &valor;
    y = *x;
    printf("%p\n", &valor);
    printf("%p\n", x);
    printf("%p\n", &x);
    printf("%p\n", *x);
    printf("%p\n", y);
    printf("vetores");
}