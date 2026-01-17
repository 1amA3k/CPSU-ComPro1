#include <stdio.h>

int main() {
    int x, result;
    scanf("%d", &x);
    
    if (x>=0) {
        result = x;
    } else {
        result = x*(-1);
    }

    printf("%d", result);

    return 0;
}