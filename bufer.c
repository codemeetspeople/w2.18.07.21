#include <stdio.h>

int main() {
    int capacity = 0;
    char buffer[1000];

    for ( int i = 0; i < 10000000; i++, capacity++ ) {
        buffer[capacity] = 'a';

        if ( capacity == 999 ) {
            printf("%s", buffer);
            capacity = 0;
        }
    }

    return 0;
}