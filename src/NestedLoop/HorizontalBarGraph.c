#include <stdio.h>

int main() {
    int x;

    for( ; ; ) {
        scanf("%d", &x);
        if (x <= 0) break;
        
        for(int i=0; i < x; i++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}