#include "functions.h"

int get_sum(int a, int b) {
    return a + b;
}

int* create_integer(int value) {
    int* ptr = (int*)malloc(sizeof(int));
    if (ptr) {
        *ptr = value;
    }
    return ptr;
}

void init_person(Person* p, const char* name, int id) {
    if (p) {
        strncpy(p->name, name, 20);
        p->name[19] = '\0'; // Ensure null-termination
        p->id = id;
    }
}

void sort_array(int arr[], int size) {
    if (arr == NULL || size <= 1) {
        return;
    }
    // A simple bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}