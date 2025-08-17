#include "../src/functions.h"
#include "Unity/unity.h"

// Optional: setUp and tearDown functions
void setUp(void) {}
void tearDown(void) {}

// Test case for get_sum
void test_get_sum(void) {
    int result = get_sum(5, 10);
    TEST_ASSERT_EQUAL_INT(15, result);
}

// Test case for create_integer
void test_create_integer(void) {
    int* my_int = create_integer(42);
    TEST_ASSERT_NOT_NULL(my_int);
    TEST_ASSERT_EQUAL_INT(42, *my_int);
    free(my_int); // Cleanup is crucial
}

// Test case for init_person
void test_init_person(void) {
    Person p;
    init_person(&p, "John Doe", 101);
    TEST_ASSERT_EQUAL_STRING("John Doe", p.name);
    TEST_ASSERT_EQUAL_INT(101, p.id);
}

// Test case for sort_array
void test_sort_array(void) {
    int arr[] = {3, 1, 4, 1, 5, 9, 2};
    int expected[] = {1, 1, 2, 3, 4, 5, 9};
    sort_array(arr, 7);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, arr, 7);
}