#include <stdio.h>

int main() {
    int Day1, Day2, Day3;
    scanf("%d %d %d", &Day1, &Day2, &Day3);
    
    if (Day1<=Day2 && Day1<=Day3) {
        printf("A");
    } else if (Day2 <= Day1 && Day2 <= Day3) {
        printf("B");
    } else {
        printf("C");
    }   

    return 0;

}