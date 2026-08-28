#include <stdio.h>

int main() {
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    if (x > z) {
        int temp = x;
        x = z;
        z = temp;
    }
    if (y > z) {
        int temp = y;
        y = z;
        z = temp;
    }
    
    printf("%d %d %d\n", x, y, z);

    return 0;
}