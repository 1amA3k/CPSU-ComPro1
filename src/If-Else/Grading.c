#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if (score>=80) {
        printf("Excellent");
    } else if (score>=40 && score <80 ){
        printf("Pass");
    } else if (score<40) {
        printf("Fail");
    }

    return 0;
}