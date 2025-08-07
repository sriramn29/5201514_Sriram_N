// main.c
#include <stdio.h>
#include "header.h"

int main() {
    print_message();
    int a, b;
    printf("Enter any two values: ");
    scanf("%d %d", &a, &b);
    sum(a, b);
    diff(a, b);
    product(a, b);
    division(a, b);
    square(a);
    return 0;
}