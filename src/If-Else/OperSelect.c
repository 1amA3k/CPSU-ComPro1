#include <stdio.h>

int main() {
    int x, y, z, result;
    scanf("%d %d %d", &x, &y, &z);

    switch (z) {
        case 1:
            result = x+y;
            printf("%d", result);
            break;
        case 2:
            result = x-y;
            printf("%d", result);
            break;
        case 3:
            result = x*y;
            printf("%d", result);
            break;
        case 4:
            if (y == 0) {
                printf("cannot divide by zero");
            } else {
                result = x/y;
                printf("%d", result);
            }
            break;
        case 5:
            if (y == 0) {
                printf("cannot divide by zero");
            } else {
                result = x%y;
                printf("%d", result);
            }
            break;
        default:
            break;
    }
    
    return 0;
}