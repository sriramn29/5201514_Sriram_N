#include <stdio.h>
#include "calculator.h"

int main() {
    int addition = add(15, 7);
    printf("The sum of 15 & 7 is: %d\n", addition);
    int subtraction = sub(15, 7);
    printf("The Difference between 15 & 7 is: %d\n", subtraction);
    int multiplication = mul(15, 7);
    printf("The Product of 15 & 7 is: %d\n", multiplication);
    int division = div(15, 7);
    printf("The Division of 15 & 7 is: %d\n", division);
    int remainder = rem(15, 7);
    printf("The remainder for 15 divided by 7 is: %d\n", remainder);
    int squareOf = square(5);
    printf("The square of 5 is: %d\n", squareOf);

    return 0;
}