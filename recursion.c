#include <stdio.h>

void sequence(int n) {
    if ( n < 0) {
        return;
    }

    printf("%d\n", n);

    return sequence(n-1);
}


void _iterate(int current, int limit) {
    if ( current > limit ) {
        return;
    }
    printf("%d\n", current);

    _iterate(current+1, limit);
}


void iterateSequence(int limit) {
    if ( limit < 0 ) {
        return;
    }
    _iterate(0, limit);
}


int factorial(int n) {
    if ( n <= 0 ) {
        if ( n == 0 ) {
            return 1;
        }
        return -1;
    }
    return factorial(n-1) * n;
}


int fibonacci(int n) {
    if ( n == 0 ) {
        return 0;
    }
    if ( n == 1 ) {
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int fibonacci_loop(int n) {
    int first = 0;
    int second = 1;
    int result;

    for ( int i = 1; i < n; i++ ) {
        result = first + second;
        first = second;
        second = result;
    }

    return result;
}

int main() {
    printf("%d\n", fibonacci_loop(42));
    return 0;
}
