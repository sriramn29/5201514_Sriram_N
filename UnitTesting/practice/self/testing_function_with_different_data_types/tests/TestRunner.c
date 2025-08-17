#include "Unity/unity.h"

// Declare test functions
void test_get_sum(void);
void test_create_integer(void);
void test_init_person(void);
void test_sort_array(void);

// Main function to run all tests
int main(void) {
    UnityBegin("Function Test Suite");

    RUN_TEST_WITH_SUMMARY(test_get_sum);
    RUN_TEST_WITH_SUMMARY(test_create_integer);
    RUN_TEST_WITH_SUMMARY(test_init_person);
    RUN_TEST_WITH_SUMMARY(test_sort_array);

    return UnityEnd();
}