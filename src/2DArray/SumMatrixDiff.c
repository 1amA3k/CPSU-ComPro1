#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int matrix[100][100];
    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j < N ; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j < N ; j++) {
            int diff = matrix[i][j] - matrix[j][i];
            if (diff < 0) diff = diff*-1;
            sum += diff;
        }
    }

    printf("%d\n", sum/2);
    
    return 0;
}