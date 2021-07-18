#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} Point;

void pointPrint(Point a) {
    printf("(%g, %g)", a.x, a.y);
}

int pointEqual(Point a, Point b) {
    return a.x == b.x && a.y == b.y;
}

double pointDistance(Point a, Point b) {
    return hypot(a.x - b.x, a.y - b.y);
}

int main() {
    Point x = {1.5, 2.7};
    Point y = {2.5, 4.7};

    if ( pointEqual(x, y) ) {
        pointPrint(x);
        printf(" is equal to ");
        pointPrint(y);
        printf("\n");
    } else {
        pointPrint(x);
        printf(" is not equal to ");
        pointPrint(y);
        printf("\n");
    }

    printf("distance = %g\n", pointDistance(x, y));

    return 0;
}
