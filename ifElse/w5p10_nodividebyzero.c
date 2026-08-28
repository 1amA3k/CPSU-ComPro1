#include <stdio.h>

int main() {
    double x, y, z;

    scanf("%lf %lf %lf", &x, &y, &z);
    if (z == 0) {
        printf("cannot divide by zero");
    } else {
        printf("%.6lf", (x + y) / z);
    }

    return 0;
}