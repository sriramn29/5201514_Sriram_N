// Program to calculate the ratios of its elements that are positive, negative, and zero

#include <stdio.h>
#include <stdlib.h>

// Function prototype
void plusMinus(int arr_count, int* arr);

// Function Definition
void plusMinus(int arr_count, int* arr) {
    
    if (arr_count <= 0) {
        printf("Error: Empty array provided.\n");
        return;
    }
    
    float positives = 0, negatives = 0, zeros = 0; //initializing all counting variables to zero
    float pos_ratio = 0, neg_ratio = 0, zero_ratio = 0; // initializing all ratio variables to zero
    
    for (int i = 0; i < arr_count; i++) {
        if (*arr > 0) // Checking for positive value
            positives++;
        else if (*arr < 0) // Checking for negative value
            negatives++;
        else // Else for zeros
            zeros++;
        arr++; // Increment ptr to point to the next element
    }
    
    // Calculation
    pos_ratio = positives / arr_count;
    neg_ratio = negatives / arr_count;
    zero_ratio = zeros / arr_count;
    
    // Output
    printf("%.6f\n",pos_ratio); // Output contains 6 decimal places
    printf("%.6f\n",neg_ratio);
    printf("%.6f",zero_ratio);

}

int main()
{
    int n = 0; // Initialize array size to 0
    scanf( "%d", &n); // Get the array size from the user
    

    int* arr = malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    plusMinus(n, arr); // Function calling
    
    // Free the dynamically allocated memory
    free(arr);
    arr = NULL;

    return 0;
}

