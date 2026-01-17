#include <stdio.h>

int main() {
    int numbers[501];
    int cnt = 0;
    int input;

    while (scanf("%d", &input) == 1) {
        if (input < 0 || input >= 10) break;
        numbers[cnt] = input;
        cnt++;
    }
    for (int i = 0 ; i < cnt ; i++) {
        for (int j = 0 ; j < (cnt - i) - 1) ; j++) {
            printf(" ");
        }
        for (int j = 0 ; j < (i + 1) ; j++) {
            printf("%d", numbers[i]);
        }
        printf("\n");
    }

    return 0;
}