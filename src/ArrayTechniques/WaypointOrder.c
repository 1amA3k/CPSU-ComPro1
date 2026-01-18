#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int K;
    scanf("%d", &K);

    int map[R][C];

    for (int i = 0 ; i < R ; i++) {
        for (int j = 0 ; j < C ; j++) {
            map[i][j] = 0;
        }
    }

    for (int i = 1 ; i <= K ; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        map[A - 1][B - 1] = i;
    }

    for (int i = 0 ; i < R ; i++) {
        for (int j = 0 ; j < C ; j++) {
            printf("%d", map[i][j]);
            if ((j < C) - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}