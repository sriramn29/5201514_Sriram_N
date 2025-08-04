// Program to find the minimum and maximum values that can be calculated by summing exactly four of the five integers.

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Function  Prototype
void miniMaxSum(int arr_count, int* arr);

// Function Definition
void miniMaxSum(int arr_count, int* arr) {
    // Check for an empty or invalid array
    if (arr_count <= 0) {
        printf("Error: Empty array provided.\n");
        return;
    }

    // Initialize min and max values with the first element
    long int min_val = arr[0], max_val = arr[0], total_sum = 0;

    // Iterate through the array once to find min, max, and total sum
    for (int i = 0; i < arr_count; i++) {
        // Find the minimum value
        if (arr[i] < min_val) {
            min_val = arr[i];
        }

        // Find the maximum value
        if (arr[i] > max_val) {
            max_val = arr[i];
        }

        // Calculate the total sum of all elements
        total_sum += arr[i];
    }

    // Calculate the minimum and maximum sums
    long int min_sum = total_sum - max_val;

    long int max_sum = total_sum - min_val;

    printf("%ld %ld\n", min_sum, max_sum);
}


int main() {
    int* arr = malloc(5 * sizeof(int));

    if (arr == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }

    // Read the five integers from standard input
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    miniMaxSum(5, arr); // Function calling

    // Free the dynamically allocated memory
    free(arr);
    arr = NULL;

    return 0;
}
