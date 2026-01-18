#include <stdio.h>

void derivative(int* AInput, int* AOutput, const int N) {
    AOutput[0] = 0;
    for (int i = 1 ; i < N ; i++) {
        AOutput[i] = AInput[i] - AInput[i - 1];
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int AInput[N], AOutput[N];
    for (int i = 0 ; i < N ; i++) {
        scanf("%d", &AInput[i]);
    }

    derivative(AInput, AOutput, N);

    for (int i = 0 ; i < N ; i++) {
        printf("%d ", AOutput[i]);
    }
    printf("\n");

    return 0;
}