#include <stdio.h>

struct data {
    char id[6];
    int score;
};

int main() {
    int N;
    scanf("%d", &N);
    
    struct data dt[N];
    int total = 0;
    for (int i = 0 ; i < N ; i++) {
        scanf("%s %d", dt[i].id, &dt[i].score);
    }
    double sumScore = 0;
    for (int i = 0 ; i < N ; i++) {
        sumScore += dt[i].score;
    }
    double avg = sumScore / N;
    int cnt = 0;
    for (int i = 0 ; i < N ; i++) {
        if(dt[i].score>=avg) cnt++;
    }
    printf("%d\n", cnt);
    for (int i = 0 ; i < N ; i++) {
        if(dt[i].score >= avg) {
            printf("%s\n", dt[i].id);
        }
    }

    return 0;
}