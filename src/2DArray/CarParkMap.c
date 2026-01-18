#include <stdio.h>

int main() {
    int M, N, K;
    scanf("%d %d %d", &M, &N, &K));

    char carpark[105][105];
    for (int i = 0 ; i < M ; i++) {
        for (int j = 0;  j < N ; j++) {
            carpark[i][j] = '_';
        }
    }
    for (int i = 0 ; i < K ; i++) {
        int R, C;
        scanf("%d %d", &R, &C);
        carpark[R - 1][C - 1] = 'x';
    }
    for (int i = 0 ; i < M ; i++) {
        for (int j = 0 ; j < N ; j++) {
            printf("%c", carpark[i][j]);
        }
        printf("\n");
    }

    return 0;
}   