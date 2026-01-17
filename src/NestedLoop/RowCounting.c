#include <stdio.h>

int main() {
    int n, m, k=1;
    scanf("%d %d", &n, &m);

    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < m ; j++) {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}