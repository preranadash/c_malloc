#include <stdio.h>
#include <stdlib.h>

// Function to calculate mean and variance of an array
void calculateMeanAndVariance(float *arr, int length, float *result) {
    float mean = 0.0, variance = 0.0;

    // Calculate mean
    for (int i = 0; i < length; ++i) {
        mean += arr[i];
    }
    mean /= length;

    // Calculate variance
    for (int i = 0; i < length; ++i) {
        variance += (arr[i] - mean) * (arr[i] - mean);
    }
    variance /= length;

    // Set the result array
    result[0] = mean;
    result[1] = variance;
}

int main() {
    // Create an array of hundred float elements
    float *arr = (float *)malloc(100 * sizeof(float));

    // Assign values to the elements of the array
    for (int i = 0; i < 100; ++i) {
        arr[i] = 12 + i * 10;
    }

    // Calculate mean and variance using the function
    float result[2];
    calculateMeanAndVariance(arr, 100, result);

    // Print mean and variance to the terminal
    printf("Mean: %.2f\n", result[0]);
    printf("Variance: %.2f\n", result[1]);

    // Free the allocated memory
    free(arr);

    return 0;
}
