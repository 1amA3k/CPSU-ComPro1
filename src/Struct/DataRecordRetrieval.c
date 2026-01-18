#include <stdio.h>

struct student {
    char studentId[9];
    char name[31];
    char surname[51];
    int year;
};

int main() {
    int N;
    scanf("%d", &N);

    struct student std[N];

    for (int i = 0 ; i < N ; i++) {
        scanf("%s %s %s %d", std[i].studentId, 
            std[i].name, 
            std[i].surname, 
            &std[i].year);
    }

    int FindYear;
    scanf("%d", &FindYear);

    int Flag = 0; 

    for (int i = 0 ; i < N ; i++) {
        if(std[i].year == FindYear) {
            printf("%s %s %s\n",
                std[i].studentId,
                std[i].name,
                std[i].surname);
            Flag = 1;
        }
    }

    if (Flag==0) printf("None");

    return 0;
}