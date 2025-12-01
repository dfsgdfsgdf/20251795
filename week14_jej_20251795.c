#include <stdio.h>

#define SIZE 5

struct food {
    char name[50];
    int calories;
};

int main() {
    struct food items[SIZE];
    int maxIndex = 0;

    for (int i = 0; i < SIZE; i++) {
        printf("Enter food #%d name: ", i + 1);
        scanf("%s", items[i].name);

        printf("Enter food #%d calories: ", i + 1);
        scanf("%d", &items[i].calories);

        if (items[i].calories > items[maxIndex].calories) {
            maxIndex = i;
        }
    }

    printf("\nHighest-calorie food: %s (%d kcal)\n",
           items[maxIndex].name, items[maxIndex].calories);

    return 0;
}
