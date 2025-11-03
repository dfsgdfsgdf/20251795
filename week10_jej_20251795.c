#include <stdio.h>
#include <math.h>

#define SIZE 10

double calculateMean(double arr[], int size) {
    double sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double mean = sum / size;
    return mean;
}

double calculateStdDev(double arr[], int size, double mean) {
    double sumOfSquares = 0.0;

    for (int i = 0; i < size; i++) {
        sumOfSquares += pow(arr[i] - mean, 2);
    }

    double variance = sumOfSquares / size;
    double standard_variance = sqrt(variance);
    return standard_variance;
}

int main() {
    double data[SIZE];
    double mean, stdDev;

    printf("Enter %d numbers (double values) (example):\n", SIZE);

    for (int i = 0; i < SIZE; i++) {
        printf("Enter value #%d: ", i + 1);
        scanf("%lf", &data[i]);
    }

    mean = calculateMean(data, SIZE);
    stdDev = calculateStdDev(data, SIZE, mean);

    printf("\n---Calculation Results---\n");
    printf("Mean of the data: %.2f\n", mean);
    printf("Standard Deviation of the data: %.2f\n", stdDev);

    return 0;
}
