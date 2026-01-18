#include <stdio.h>

int isUnique(int* arData, int N) {
    for (int i = 0 ; i < (N - 1) ; i++) {
        for (int j = (i + 1) ; j < N ; j++) {
            if (arData[i] == arData[j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int data[N];
    for (int i = 0 ; i < N ; i++) {
        scanf("%d", &data[i]);
    }

    printf("%d\n", isUnique(data, N));

    return 0;
}