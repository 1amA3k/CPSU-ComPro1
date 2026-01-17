#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int i=0;
    for (i = 0 ; i <= n ; i++) {
        for (j=0 ; j <= m ; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}