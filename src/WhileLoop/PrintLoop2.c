#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input");
    } else {
        int i = 0
        while (i < n) {
            printf("%d\n", i+1);
            i++;
        }
    }

    return 0;
}