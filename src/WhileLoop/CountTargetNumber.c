#include <stdio.h>

int main() {
    int n, m, cnt = 0;

    scanf("%d", &n);
    while (1) {
        scanf("%d", &m);
        if (m == 0) {
            break;
        } else {
            if(m == n) {
                cnt++;
            }
        }
    }
    if (cnt > 0) {
        printf("%d", cnt);
    } else {
        printf("None");
    }
    
    return 0;
}