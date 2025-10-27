#include <stdio.h>

long long hanoi_tower(int n, char from, char tmp, char to);

int main(void)
{
    int n;
    long long total_moves;

    printf("Enter n: ");
    scanf("%d", &n);

    total_moves = hanoi_tower(n, 'A', 'B', 'C');

    printf("Total moves: %lld\n", total_moves);

    return 0;
}

long long hanoi_tower(int n, char from, char tmp, char to)
{
    if (n == 1) {
        return 1;
    }
    else {
        long long moves1 = hanoi_tower(n - 1, from, to, tmp);

        long long moves2 = hanoi_tower(n - 1, tmp, from, to);

        return moves1 + 1 + moves2;
    }
}
