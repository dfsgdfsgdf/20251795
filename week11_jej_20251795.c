#include <stdio.h>

#define SIZE 8

int main() {
    int arr[SIZE];
    int *p;
    int studentID;

    printf("Enter %d numbers(example):\n", SIZE);

    scanf("%d", &studentID);

    for (int i = SIZE - 1; i >= 0; i--) {
        arr[i] = studentID % 10;
        studentID /= 10;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("Enter value #%d: %d\n", i + 1, arr[i]);
    }

    printf("Array elements in reverse order: ");

    p = arr + (SIZE - 1);

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *p);
        p--;
    }

    return 0;
}
