#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int pop[10001];
    for (int i = 0 ; i < N ; i++) {
        scanf("%d", &pop[i]);
    }
    int maxCustomers = 0;
    for (int i = 0 ; i < N ; i++) {
        int sum = 0;
        for (int j = (i - K) ; j <= (i + K) ; j++) {
            if ((j >= 0) && (j < N)) {
                sum += pop[j];
            }
        }
        if (sum > maxCustomers) {
            maxCustomers = sum;
        }
    }
    printf("%d\n", maxCustomers);
    
    return 0;
}