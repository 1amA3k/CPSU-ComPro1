#include <stdio.h>

int main() {
    int n, k, g, s1, s2, c1=0, c2=0;
    scanf("%d %d", &n, &k);

    for(int i = 1 ; i <= n ; i++) {
        scanf("%d %d %d", &g, &s1, &s2);
        if((s1 >= 9) && (c1 < k) && (g == 1)) {
            printf("%d 1\n", i);
            c1++;
        } else if((s2 >= 9) && (c2 < k) && (g == 2)) {
            printf("%d 2\n", i);
            c2++;
        } else if((s1 >= 9) && (c1 < k)) {
            printf("%d 1\n", i);
            c1++;
        } else if((s2 >= 9) && (c2 < k)) {
            printf("%d 2\n", i);
            c2++;
        } 

    }
    
    return 0;
}