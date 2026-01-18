#include <stdio.h>

double average(int* array, int N) {
    double sum = 0.0;
    for (int i = 0 ; i < N ; i++) {
        sum += array[i];
    }
    return sum / N;
}

double variance(int* array, double avg, int N) {
    double sum = 0.0;
    for (int i = 0 ; i < N ; i++) {
        sum += (array[i] - avg) * (array[i] - avg);
    }
    return (N > 1) ? (sum / (N - 1)) : 0.0;
}

int main() {
    int N;
    scanf("%d", &N);

    int data[N];
    for (int i = 0 ; i < N ; i++) {
        scanf("%d", &data[i]);
    }

    double avg = average(data, N);
    double var = variance(data, avg, N);

    printf("%.2f %.2f\n", avg, var);

    return 0;
}