/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(int arr_count, int* arr) {
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
    printf("%.6f\n",pos_ratio);
    printf("%.6f\n",neg_ratio);
    printf("%.6f",zero_ratio);

}
