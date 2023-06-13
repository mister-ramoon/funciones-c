#include <stdio.h>

int a, b;

int add(int a, int b);

int main() {
    add(100, 100);
    printf("The result is: %d\n", add(100, 100));
    return 0;
}

int add(int a, int b) {
    int add;
    add = a + b;
    //printf("The result is: %d\n", add);
    return add;
}