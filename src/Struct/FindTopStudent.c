#include <stdio.h>

struct Student{
    int scores[5];
    int total_score;
};

int main() {
    int N, k;
    scanf("%d %d", &N, &k);

    struct Student std[N];

    int top_student_index = 0;
    int max_total_score = -1;

    for (int i = 0 ; i < N ; i++) {
        std[i].total_score = 0;
        for (int j = 0 ; j < k ; j++) {
            scanf("%d", &std[i].scores[j]);
            std[i].total_score += std[i].scores[j];
        }

        if (std[i].total_score > max_total_score) {
            max_total_score = std[i].total_score;
            top_student_index = i; 
        }
    }

    int max_scores_per_exam[k];
    for (int j = 0 ; j < k ; j++) {
        max_scores_per_exam[j] = -1;
        for (int i = 0 ; i < N ; i++) {
            if (std[i].scores[j] > max_scores_per_exam[j]) {
                max_scores_per_exam[j] = std[i].scores[j];
            }
        }
    }

    int top_student_max_exam_count = 0;
    for (int j = 0 ; j < k ; j++) {
        if (std[top_student_index].scores[j] == max_scores_per_exam[j]) {
            top_student_max_exam_count++;
        }
    }

    printf("%d\n", max_total_score);
    printf("%d\n", top_student_max_exam_count);

    return 0;
}