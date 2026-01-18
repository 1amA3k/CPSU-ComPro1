#include <stdio.h>
#define SIZE 8

double average(int* array) {
    double sum = 0.0;
    for (int i = 0 ; i < SIZE ; i++) {
        sum += array[i];
    }
    return sum / SIZE;
}

double variance(int* array, double avg) {
    double sum = 0.0;
    for (int i = 0 ; i < SIZE ; i++) {
        double diff = array[i] - avg;
        sum += diff * diff; 
    }
    return sum / (SIZE - 1);
}

int main() {
    int data[SIZE];
    for (int i = 0 ; i < SIZE ; i++) {
        scanf("%d", &data[i]);
    }
    
    double avg = average(data);
    double var = variance(data, avg);
    
    printf("%.2f %.2f\n", avg, var);
    
    return 0;
}