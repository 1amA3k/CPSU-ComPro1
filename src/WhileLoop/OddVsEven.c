#include <stdio.h>

int main() {
    int i = 0, n, even=0, odd=0
    
    while (i < 8) {
        scanf("%d", &n);
        if(n%2 == 0) {
            even += n;
        } else {
            odd += n;
        }
        i++;
    }
    if (even > odd) {
        printf("even\n");
    } else if (odd > even) {
        printf("odd\n");
    } else {
        printf("equal\n");
    }
    printf("%d\n%d", even, odd);
    
    return 0;
}