#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int A[R][C];
    for (int i = 0 ; i < R ; i++) {
        for (int j = 0 ; j < C ; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int j = 0 ; j < C ; j++) {
        for (int i = 0 ; i < R ; i++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}