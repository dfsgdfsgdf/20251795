#include <stdio.h>

#define SIZE 8

int main() {
    int A[SIZE];
    int *p = A;
    int *o;

    printf("Enter 8 numbers(example):\n");

    for (int i = 0; i < SIZE; i++) {
        printf("Enter value #%d: ", i + 1);
        scanf("%d", p + i);
    }

    o = A + 4;

    printf("\nFinal Output (last 4 digits):\n");

    for (int i = 0; i < 4; i++) {
        printf("%d ", *(o + i));
    }

    return 0;
}
