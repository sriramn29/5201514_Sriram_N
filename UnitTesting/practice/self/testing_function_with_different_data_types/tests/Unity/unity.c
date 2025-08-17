#include <stdio.h>
#include <string.h> // <-- Add this for strcmp
#include "unity.h"

int test_count = 0;
int failure_count = 0;

void UnityBegin(const char* name) {
    printf("Starting tests for %s...\n", name);
    test_count = 0;
    failure_count = 0;
}

void UnityFail(const char* file, int line, const char* msg) {
    printf("FAILURE: %s:%d: %s\n", file, line, msg);
    failure_count++;
}

int UnityEnd(void) {
    printf("\n--- Overall Test Summary ---\n");
    printf("Total Tests: %d\n", test_count);
    printf("Failures: %d\n", failure_count);
    printf("Result: %s\n", (failure_count > 0) ? "FAIL" : "PASS");
    return failure_count;
}

// Helper functions for new assert macros
void UnityAssertEqualNumber(long expected, long actual, const char* file, int line) {
    if (expected != actual) {
        printf("FAILURE: %s:%d: Expected %ld but was %ld\n", file, line, expected, actual);
        failure_count++;
    }
}

void UnityAssertEqualString(const char* expected, const char* actual, const char* file, int line) {
    if (strcmp(expected, actual) != 0) {
        printf("FAILURE: %s:%d: Expected string \"%s\" but was \"%s\"\n", file, line, expected, actual);
        failure_count++;
    }
}

void UnityAssertEqualIntArray(const int* expected, const int* actual, unsigned int num_elements, const char* file, int line) {
    for (unsigned int i = 0; i < num_elements; i++) {
        if (expected[i] != actual[i]) {
            printf("FAILURE: %s:%d: Array mismatch at index %d. Expected %d but was %d\n", file, line, i, expected[i], actual[i]);
            failure_count++;
            return;
        }
    }
}