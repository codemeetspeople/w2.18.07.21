#include <stdio.h>

int main() {
    int target, base;
    int digits = 0;
    int tmp;

    scanf("%d %d", &target, &base);

    tmp = target;

    for ( ; tmp != 0; tmp /= base, digits++);

    tmp = target;

    for ( int i = digits; i > 0; i-- ) {
        for ( int j = i - 1; j > 0; j-- ) {
            tmp /= base;
        }
        printf("%d", tmp % base);
        tmp = target;
    }
    printf("\n");

    return 0;
}