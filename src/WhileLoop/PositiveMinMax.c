#include <stdio.h>
#include <limits.h>

int max = INT_MIN;
int min = INT_MAX;

int main() {
    int i = 0, m;
    while (i < 8) {
        scanf("%d", &m);
        if (m > 0) {
            if (m >= max) {
                max = m;
            }
            if (m < min) {
                min = m;
            }
        }
        i++;
    }
    printf("%d\n", max);
    printf("%d", min);
    
    return 0;
}