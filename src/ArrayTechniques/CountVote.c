#include <stdio.h>

int main() {
    int N, K;
    if (scanf("%d %d", &N, &K) != 2) return 1;

    int Vote[N + 1];
    for (int i = 0 ; i <= N ; i++) Vote[i] = 0;

    for (int i = 0 ; i < K ; i++) {
        int M;
        scanf("%d", &M);
        if ((M >= 1) && (M <= N)) {
            Vote[M]++;
        }
    }

    int ScoreMax = -1;
    int MaxVote = 1;

    for (int i = 1 ; i <= N ; i++) {
        if (Vote[i] > ScoreMax) {
            ScoreMax = Vote[i];
            MaxVote = i;
        }
    }

    printf("%d\n%d\n", MaxVote, ScoreMax);

    return 0;
}