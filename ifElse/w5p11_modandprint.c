#include <stdio.h>

int main() {
    int input;
    
    scanf("%d", &input);
    if ((input % 3) ==0 && (input % 5) == 0) {
        printf("3 5");
    } else if ((input % 3) == 0) {
        printf("3");
    } else if ((input % 5) == 0) {
        printf("5");
    }

    return 0;
}