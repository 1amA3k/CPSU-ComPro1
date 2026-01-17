#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);

    int num[size];
    for(int i = 0 ; i < size ; i++){
        scanf("%d", &num[i]);
    }
    int targetNum;
    int found = 0;
    scanf("%d", &targetNum);
    for(int i = 0 ; i < size ; i++) {
        if(targetNum == num[i]) {
            printf("%d ", i+1);
            found = 1;
        }
    }

    if(found == 0) {
        printf("0");
    }
    
    return 0;
}