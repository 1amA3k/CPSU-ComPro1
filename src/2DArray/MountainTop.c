#include <stdio.h>
int moutain[1000][1000];
int height[1000000];
int top_row[1000000];
int top_col[1000000];
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j < N ; j++) {
            scanf("%d", &moutain[i][j]);
        }
    }
    int cnt = 0;
    for (int i = 0 ; i < (N - 1) ; i++) {
        for(int j = 0 ; j < (N - 1) ; j++) {
            if(moutain[i][j] > moutain[i-1][j-1] && moutain[i][j] > moutain[i-1][j] && moutain[i][j] > moutain[i-1][j+1] &&
               moutain[i][j] > moutain[i][j-1] && moutain[i][j] > moutain[i][j+1] && moutain[i][j] > moutain[i+1][j-1] &&
               moutain[i][j] > moutain[i+1][j] && moutain[i][j] > moutain[i+1][j+1]) 
            {
                height[cnt] = moutain[i][j];
                top_row[cnt] = i;
                top_col[cnt] = j;
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    for(int i = 0 ; i < cnt ; i++) {
        printf("%d %d %d\n", height[i], top_row[i], top_col[i]);
    }

    return 0;
}
