#include <stdio.h>

int main() {
    double x, y, z, result;
    scanf("%lf %lf %lf", &x, &y, &z);
    
    if (z==0) {
        printf("cannot divide by zero");
    } else {
        result = (x+y)/z;
        printf("%.6lf", result);
    }

    return 0;
}