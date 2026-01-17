#include <stdio.h>

int main() {
    int x, y = 1, space;
    scanf("%d", &x);

    space = x / 2;
    for(int i = 0 ; i < ((x / 2) + 1) ; i++){
        for(int j = 0 ; j < space ; j++) {
            printf(" ");
        }
        for(int j = 0; j < y ; j++){
            printf("*");
        }
        printf("\n");
        space--;
        y+=2;
    }
    
    space = 1;
    y = x-2;
    
    for(int i = 0 ; i< (x / 2) ; i++){
        for(int j = 0; j < space ; j++) {
            printf(" ");
        }
        for(int j = 0 ; j < y ; j++){
            printf("*");
        }
        printf("\n");
        space+=1;
        y-=2;
    }
    
    return 0;
}