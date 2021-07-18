#include <stdio.h>

int main() {
    int number;
    int base = 2;
    int counter = 0;

    scanf("%d", &number);

    if ( number < 0 ) {
        counter += 1;
    }

    for ( ; number != 0 ; number /= base ) {
        counter += 1;
    }

    printf("%d\n", counter);

    return 0;
}