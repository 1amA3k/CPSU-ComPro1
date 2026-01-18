#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double SUM = 0;

    int AINPUT;
    for(int i = 0 ; i < N ; i++) {
        scanf("%d", &AINPUT);
        SUM += AINPUT;
    }

    printf("%.6lf", SUM/N);

    return 0;
}