#include <stdio.h>

int main() {
    int x, lastDigit;
    scanf("%d", &x);
    
    lastDigit = x % 10;
    printf("%d", lastDigit);

    return 0;
}