#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int AINPUT[N];
    for(int i = 0 ; i < N ; i++) {
        scanf("%d", &AINPUT[i]);
    }

    int M;
    scanf("%d", &M);
    if(M >= 0) {
        for (int i = 0 ; i < N ; i++){
            printf("%d ", AINPUT[i] + M);
        }
    } else {
        for (int j = (N - 1) ; j >= 0 ; j--){
            printf("%d ", AINPUT[j]+M);
        }
    }

    return 0;
}