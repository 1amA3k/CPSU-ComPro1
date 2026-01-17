#include<stdio.h>

int main(){
    int water, sugar;
    int bottle_sugar, bottle_water, total_bottle;

    for(int i = 0 ; i < 7 ; i++){
        scanf("%d%d", &water, &sugar);
        bottle_water = water / 250;
        bottle_sugar = sugar / 15;
        if(bottle_water < bottle_sugar){
            total_bottle = bottle_water;
        } else {
            total_bottle = bottle_sugar;
        }
        printf("%d", total_bottle);
        if(water > (total_bottle * 250)){
            printf(" water");
        }
        printf("\n");
    }
    
    return 0;
}