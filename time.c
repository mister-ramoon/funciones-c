#include <stdio.h>
#include <time.h>

time_t seconds;

int main() {
    seconds = time(NULL);
    printf("Horas desde EPOCH: %ld\n", seconds/3600);
    return 0;
}