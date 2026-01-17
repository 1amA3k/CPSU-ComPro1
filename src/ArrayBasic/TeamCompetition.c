#include <stdio.h>

int main() {
    int size;
    int scoreA = 0, scoreB = 0;
    scanf("%d", &size);

    int teamA[size], teamB[size];

    for(int i = 0 ; i < size ; i++) {
        scanf("%d", &teamA[i]);
    }
    for(int j = 0 ; j < size ; j++) {
        scanf("%d", &teamB[j]);
    }
    for(int k = 0 ; k < size ; k++) {
        if (teamA[k] > teamB[k]){
            scoreA+=2;
        } else if (teamB[k] > teamA[k]) {
            scoreB+=2;
        } else {
            scoreA++;
            scoreB++;
        }
    }
    if (scoreA > scoreB) {
        printf("Team 1 wins\nScore %d to %d", scoreA, scoreB);
    } else if (scoreA < scoreB) {
        printf("Team 2 wins\nScore %d to %d", scoreB, scoreA); 
    } else {
        printf("Draw game\nScore %d to %d", scoreA, scoreB);
    }

    return 0;
}