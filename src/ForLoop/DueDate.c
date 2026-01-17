#include <stdio.h>

int main() {
    int k, n, order, sum=0, date;
    scanf("%d %d", &k, &n);
    
    for(int i = 0 ; i<n ; i++) {
        scanf("%d", &order);
        sum += order;
        date = (sum + (k * 100) - 1) / (k * 100);
        printf("%d\n", date);
    }

    return 0;
}