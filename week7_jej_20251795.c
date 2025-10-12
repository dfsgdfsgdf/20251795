#include <stdio.h>

int main(void) {
    int mid, fin;          // Middle or Final Score
    double avg;            // Average Score(Mid 40%, Fin 60%)
    int avg_int;           // Average Score(Integer)
    char grade;            // Grade(A~F)

    // Input Score as INT
    printf("Input Middle Score: ");
    scanf("%d", &mid);

    printf("Input Final Score: ");
    scanf("%d", &fin);

    // Middle 40%, Final 60%
    avg = mid * 0.4 + fin * 0.6;

    printf("Average Score: %0.2f\n", avg);

    // Cast it to an Integer.
    avg_int = (int)avg;

    printf("Average Score(Integer): %d\n", avg_int);

    // Decide the final grade.
    grade = (avg_int>=90) ? 'A'
          : (avg_int>=80) ? 'B'
          : (avg_int>=70) ? 'C'
          : (avg_int>=60) ? 'D' : 'F';

    printf("Grade: %c\n", grade);
    return 0;
}