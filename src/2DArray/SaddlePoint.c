#include <stdio.h>

int main() {
    int R, C;
    if (scanf("%d %d", &R, &C) != 2) return 1;

    int arr[R][C];
    for (int i = 0 ; i < R ; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int found = 0;
    for (int i = 0 ; i < R ; i++) {
        for (int j = 0 ; j < C ; j++) {
            int val = arr[i][j];
            int isRowMax = 1, isRowMin = 1;
            int isColMax = 1, isColMin = 1;

            for (int k = 0 ; k < C ; k++) {
                if (arr[i][k] > val) isRowMax = 0;
                if (arr[i][k] < val) isRowMin = 0;
            }

            for (int k = 0 ; k < R ; k++) {
                if (arr[k][j] > val) isColMax = 0;
                if (arr[k][j] < val) isColMin = 0;
            }

            if ((isRowMax && isColMin) || (isRowMin && isColMax)) {
                printf("(%d, %d) = %d\n", i, j, val);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("None\n");
    }

    return 0;
}