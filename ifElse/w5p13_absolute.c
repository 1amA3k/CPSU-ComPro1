#include <stdio.h>

int main() {
    int input;

    scanf("%d", &input);
    if (input >= 0) {
        printf("%d", input);
    } else {
        printf("%d", input *= (-1));
    }

    return 0;
}