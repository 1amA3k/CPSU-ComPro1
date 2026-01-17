#include <stdio.h>

int main() {
    int n, day, a=0, b=0, c =0;
    scanf("%d", &n);
    
    for(int i = 0;i<n;i++) {
        scanf("%d", &day);

        if ((a <= b) && (a <= c)) {
            a += day;
            printf("A\n");
        } else if ((b <= a) && (b <= c)) {
            b += day;
            printf("B\n");
        } else {
            c += day;
            printf("C\n");
        }
    }

    return 0;
}