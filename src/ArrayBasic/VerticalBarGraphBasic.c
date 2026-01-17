#include <stdio.h>
#include <limits.h>

int max_value = INT_MIN;

int main() {
    int cnt;
    scanf("%d", &cnt);

    int graph[cnt];
    for(int i = 0 ; i < cnt ; i++) {
        scanf("%d", &graph[i]);
    }
    for (int i = 0 ; i < cnt ; i++) {
        if (graph[i] > max_value) {
            max_value = graph[i];
        }
    }
    for (int row = max_value ; row > 0 ; row--) {
        for (int col = 0 ; col < cnt ; col++) {
            if (graph[col] >= row) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}