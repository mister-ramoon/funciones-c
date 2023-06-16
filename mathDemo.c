#include <stdio.h>
#include <math.h>

int x;
float result;

int main() {
    printf("Ingrese el valor de x:");
    scanf("%d", &x);
    result = cos(x);
    printf("El valor ingresado es: %d\n", x);
    printf("El valor del seno de X es: %f", result);
    return 0;
}