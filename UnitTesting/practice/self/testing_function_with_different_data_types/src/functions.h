#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdlib.h>
#include <string.h>

// Structures
typedef struct {
    char name[20];
    int id;
} Person;

// Function prototypes
int get_sum(int a, int b);
int* create_integer(int value);
void init_person(Person* p, const char* name, int id);
void sort_array(int arr[], int size);

#endif // FUNCTIONS_H