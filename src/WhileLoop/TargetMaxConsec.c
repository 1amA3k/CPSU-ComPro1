#include <stdio.h>

int main(){
    int targetNumber, sameNumber = 0, count = 0, maxCount = 0;
    scanf("%d",&targetNumber);
    while(1){
        int n;
        scanf("%d",&n);
        if(n == 0)break;
        if(n == targetNumber){
            sameNumber++;
            count++;
        }
        else{
            if(count > maxCount){
                maxCount = count;
            }
            count = 0;
        }
    }
    printf("%d\n%d",maxCount, sameNumber);
    
    return 0;
}