#include <stdio.h> // Add this line
#include "Unity/unity.h"

// We must declare the test functions here
void test_add_positive_numbers(void);
void test_add_negative_numbers(void);
void test_add_zero(void);
void test_sub_positive_numbers(void);
void test_sub_negative_numbers(void);
void test_sub_zero(void);
void test_mul_positive_numbers(void);
void test_mul_negative_numbers(void);
void test_mul_zero(void);
void test_div_positive_numbers(void);
void test_div_negative_numbers(void);
void test_div_zero(void);
void test_rem_positive_numbers(void);
void test_rem_negative_numbers(void);
void test_square_positive_numbers(void);
void test_square_negative_numbers(void);
void test_square_zero(void);

// The main function for the test suite
int main(void) {
    UnityBegin("Test Suite");

    RUN_TEST_WITH_SUMMARY(test_add_positive_numbers);
    RUN_TEST_WITH_SUMMARY(test_add_negative_numbers);
    RUN_TEST_WITH_SUMMARY(test_add_zero);
    RUN_TEST_WITH_SUMMARY(test_sub_positive_numbers);
    RUN_TEST_WITH_SUMMARY(test_sub_negative_numbers);
    RUN_TEST_WITH_SUMMARY(test_sub_zero);
    RUN_TEST_WITH_SUMMARY(test_mul_positive_numbers);
    RUN_TEST_WITH_SUMMARY(test_mul_negative_numbers);
    RUN_TEST_WITH_SUMMARY(test_mul_zero);
    RUN_TEST_WITH_SUMMARY(test_div_positive_numbers);
    RUN_TEST_WITH_SUMMARY(test_div_negative_numbers);
    RUN_TEST_WITH_SUMMARY(test_div_zero);
    RUN_TEST_WITH_SUMMARY(test_rem_positive_numbers);
    RUN_TEST_WITH_SUMMARY(test_rem_negative_numbers);
    RUN_TEST_WITH_SUMMARY(test_square_positive_numbers);
    RUN_TEST_WITH_SUMMARY(test_square_negative_numbers);
    RUN_TEST_WITH_SUMMARY(test_square_zero);

    return UnityEnd();
}