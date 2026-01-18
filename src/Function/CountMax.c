#include <stdio.h>

int countMax(int* arData, int N) {
    int maxVal = arData[0];
    for (int i = 1 ; i < N ; i++) {
        if (arData[i] > maxVal) {
            maxVal = arData[i];
        }
    }
    int count = 0;
    for (int i = 0 ; i < N ; i++) {
        if (arData[i] == maxVal) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    int data[N];
    for (int i = 0 ; i < N ; i++) {
        scanf("%d", &data[i]);
    }

    printf("%d\n", countMax(data, N));

    return 0;
}