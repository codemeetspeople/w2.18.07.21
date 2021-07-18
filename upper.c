#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "a");
    int offset = 'a' - 'A';
    char symbol;

    for ( ; fscanf(in, "%c", &symbol) == 1; ) {
        if ( symbol >= 'a' && symbol <= 'z' ) {
            symbol -= offset;
        }
        fprintf(out, "%c", symbol);
    }
    fprintf(out, "\n");

    return 0;
}
