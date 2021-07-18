#include <stdio.h>

int main() {
    char string[10] = "Caiman77!";
    const int offset = 'a' - 'A';

    for ( int i = 0; string[i] != '\0'; i++ ) {
        char symbol = string[i];

        if ( symbol >= 'a' && symbol <= 'z' ) {
            symbol -= offset;
        }
        printf("%c", symbol);
    }
    printf("\n");

    return 0;
}
