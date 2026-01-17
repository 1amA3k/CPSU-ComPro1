#include <stdio.h>

int main() {
    int x, y, z;
    int bags, final_x, final_y, final_z;
    scanf("%d %d %d", &x, &y, &z);

    bags = x / 3;
    if (y / 4 < bags)
        bags = y / 4;
    if (z / 2 < bags)
        bags = z / 2;

    final_x = x - bags * 3;
    final_y = y - bags * 4;
    final_z = z - bags * 2;

    printf("%d %d %d %d\n", bags, final_x, final_y, final_z);

    return 0;
}