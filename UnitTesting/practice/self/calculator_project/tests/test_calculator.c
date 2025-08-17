#include "../src/calculator.h"
#include "Unity/unity.h"

// The setUp and tearDown functions are called by RUN_TEST
void setUp(void) {}
void tearDown(void) {}

// A basic test case for the add function
void test_add_positive_numbers(void) {
    int result = add(2, 3);
    TEST_ASSERT_EQUAL(5, result);
}

// Another test case for negative numbers
void test_add_negative_numbers(void) {
    int result = add(-2, -3);
    TEST_ASSERT_EQUAL(-5, result);
}

// Another test case for adding to zero
void test_add_zero(void) {
    int result = add(5, 0);
    TEST_ASSERT_EQUAL(5, result);
}

// A basic test case for the sub function
void test_sub_positive_numbers(void) {
    int result = sub(10, 3);
    TEST_ASSERT_EQUAL(7, result);
}

// Another test case for negative numbers
void test_sub_negative_numbers(void) {
    int result = sub(-10, -3);
    TEST_ASSERT_EQUAL(-7, result);
}

// Another test case for subtracting to zero
void test_sub_zero(void) {
    int result = sub(5, 0);
    TEST_ASSERT_EQUAL(5, result);
}

// A basic test case for the mul function
void test_mul_positive_numbers(void) {
    int result = mul(2, 3);
    TEST_ASSERT_EQUAL(6, result);
}

// Another test case for negative numbers
void test_mul_negative_numbers(void) {
    int result = mul(2, -3);
    TEST_ASSERT_EQUAL(-6, result);
}

// Another test case for multiplying to zero
void test_mul_zero(void) {
    int result = mul(5, 0);
    TEST_ASSERT_EQUAL(0, result);
}

// A basic test case for the div function
void test_div_positive_numbers(void) {
    int result = div(9, 3);
    TEST_ASSERT_EQUAL(3, result);
}

// Another test case for negative numbers
void test_div_negative_numbers(void) {
    int result = div(-9, -3);
    TEST_ASSERT_EQUAL(3, result);
}

// Another test case for dividing to zero
void test_div_zero(void) {
    int result = div(0, 5);
    TEST_ASSERT_EQUAL(0, result);
}

// A basic test case for the rem function
void test_rem_positive_numbers(void) {
    int result = rem(5, 3);
    TEST_ASSERT_EQUAL(2, result);
}

// Another test case for negative numbers
void test_rem_negative_numbers(void) {
    int result = rem(-5, -3);
    TEST_ASSERT_EQUAL(-2, result);
}

// // Another test case for adding to zero
// void test_rem_zero(void) {
//     int result = add(5, 0);
//     TEST_ASSERT_EQUAL(5, result);
// }

// A basic test case for the add function
void test_square_positive_numbers(void) {
    int result = square(10);
    TEST_ASSERT_EQUAL(100, result);
}

// Another test case for negative numbers
void test_square_negative_numbers(void) {
    int result = square(-5);
    TEST_ASSERT_EQUAL(25, result);
}

// Another test case for adding to zero
void test_square_zero(void) {
    int result = square(0);
    TEST_ASSERT_EQUAL(0, result);
}