#include <stdio.h>
#include <time.h>

time_t begin, end;

int main() {
    long i;
    begin = time(NULL);
    for(i = 0; i < 1000000000; i++);
    end = time(NULL);
    printf("Tiempo de ejecución: %ld\n", difftime(end, begin));
    return 0;
}