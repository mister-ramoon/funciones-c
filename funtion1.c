#include <stdio.h>

int power(int base, int n);

int main() {
    int n;
    n = 3;

    printf("n = %d resultado de la potencia = %d\n", n, power(2, n));
    printf("The original value of n is: %d\n", n);

    return 0;
}


int power(int base, int n) {
    int p;

    for(p = 1; n > 0; n--) {
        p = p * base;
        printf("The temporal value of n is: %d\n", n);
    }

    return p;
}