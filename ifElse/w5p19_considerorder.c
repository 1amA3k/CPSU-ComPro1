#include <stdio.h>

int main() {
    int x, y;
    int m, n;
    int need_x, need_y;
    
    scanf("%d %d", &x, &y);
    scanf("%d %d", &m, &n);
    need_x = (2 * m) + n;
    need_y = (6 * m) + (4 * n);
    
    if (x >= need_x && y >= need_y) {
        printf("Yes %d %d\n", x - need_x, y - need_y);
    } else {
        int extra_x, extra_y;
        if(x >= need_x) {
            extra_x = 0;
        } else {
            extra_x = need_x - x;
        }
        
        if(y >= need_y) {
            extra_y = 0;
        } else {
            extra_y = need_y - y;
        }

        printf("No %d %d\n", extra_x, extra_y);
    }
    
    return 0;
}