 #include <stdio.h>

int main() {
    int input;

    scanf("%d", &input);
    if (input < 10) {
        printf("0");
    } else {
        printf("%d", (input / 10) % 10);
    }

    return 0;
}