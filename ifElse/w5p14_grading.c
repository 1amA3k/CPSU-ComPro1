#include <stdio.h>

int main() {
    int input;

    scanf("%d", &input);
    if (input >= 80) {
        printf("Excellent");
    } else if ((input >= 40) && (input < 80)){
        printf("Pass");
    } else if (input < 40) {
        printf("Fail");
    }

    return 0;
}