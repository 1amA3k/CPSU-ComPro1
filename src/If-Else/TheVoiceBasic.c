#include <stdio.h>

int main() {
    int k, k1, k2, s1, s2, g;
    scanf("%d %d %d %d %d %d", &k, &k1, &k2, &s1, &s2, &g);
    
    if(s1>=9 && k1<k && g==1) {
        printf("1");
    } else if(s2>=9 && k2<k && g==2) {
        printf("2");
    } else if (s1>=9 && k1<k) {
        printf("1");
    } else if(s2>=9 && k2<k) {
        printf("2");
    } else {
        printf("0");
    }

    return 0;
}