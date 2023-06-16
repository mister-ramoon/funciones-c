#include <stdio.h>
#include <string.h>

char string1[60];
char string2[60];

int main() {
    printf("Escribe una frase: \n");
    gets(string1);
    printf("Escribe otra frase: \n");
    gets(string2);

    if((strcmp(string1, string2)) == 0) {
        printf("Las frases son iguales\n");
    } else {
        strcat(string1, string2);
        printf("Las frases concatenadas son: %s\n", string1);
    }

    return 0;
}