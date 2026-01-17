#include <stdio.h>

int main() {
    int current_num, previous_num = 0;
    int current_count = 0, max_count = 0, max_num = 0;
    int first_input = 1;

    while (1) {
        scanf("%d", &current_num);
        if (current_num == 0) break;

        if (first_input) {
            max_num = current_num;
            max_count = 1;
            current_count = 1;
            first_input = 0;
        } else {
            if (current_num == previous_num) {
                current_count++;
            } else {
                current_count = 1;
            }

            if (current_count > max_count) {
                max_count = current_count;
                max_num = current_num;
            }
        }
        previous_num = current_num;aa
    }

    if (!first_input) {
        printf("%d\n", max_count);
        printf("%d\n", max_num);
    }

    return 0;
}