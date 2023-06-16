#include <stdio.h>
#include <stdlib.h>

int binaryNumber[12],n,i;

int main() {
    system("clear");
    system("color 0A");
    printf("Introduce un número: ");
    scanf("%d", &n);

    for(i = 0; n > 0; i++) {
        binaryNumber[i] = n % 2;
        n = n / 2;
    }

    printf("El número en binario es: ");
    for(i = i - 1; i >= 0; i--) {
        printf("%d", binaryNumber[i]);
    }


    return 0;
}