#include <stdio.h>

void get_two_int(int *px, int *py) {
    printf("Please enter two integers separated by a space: ");
    scanf("%d %d", px, py);
}

int main() {
    int a, b;

    printf("--- Integer Sum Calculator ---\n");

    get_two_int(&a, &b);

    int sum = a + b;

    printf("The sum of the two integers is: %d\n\n", sum);

    return 0;
}
