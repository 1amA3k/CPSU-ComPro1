#include <stdio.h>
#include <limits.h>

int minDiff = INT_MAX;

int main() {
    int i=0, x, n, Difference , closetNumber;
    scanf("%d", &x);

    while (i<8) {
        scanf("%d", &n);
        Difference  = x-n;
        if (Difference <0) {
            Difference *=-1;
        }
        if (Difference <minDiff) {
            closetNumber = n;
            minDiff = Difference ;
        }
        i++;
    }
    printf("%d", closetNumber);
    
    return 0;
}