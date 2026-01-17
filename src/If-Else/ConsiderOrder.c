#include <stdio.h>

int main() {
    int x, y, m, n;
    int used_planks, used_logs, need_planks, need_logs;
    scanf("%d %d", &x, &y);
    scanf("%d %d", &m, &n);
    
    used_planks = (m * 2) + (n * 1);
    used_logs = (m * 6) + (n * 4);
    
    if (x >= used_planks && y >= used_logs) {
        printf("Yes %d %d\n", x - used_planks, y - used_logs);
    } else {
        need_planks = used_planks - x;
        need_logs = used_logs - y;
        
        if (need_planks < 0) need_planks = 0;
        if (need_logs < 0) need_logs = 0;
        
        printf("No %d %d\n", need_planks, need_logs);
    }
    
    return 0;
}