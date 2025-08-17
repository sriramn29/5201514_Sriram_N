#include <stdio.h>
#include "unity.h"

int test_count = 0;
int failure_count = 0; // Removed static keyword
int current_test_failures = 0; // Removed static keyword

void UnityBegin(const char* name) {
    printf("Starting tests for %s...\n", name);
    test_count = 0;
    failure_count = 0;
    current_test_failures = 0;
}

void UnityFail(const char* file, int line, const char* msg) {
    printf("FAILURE: %s:%d: %s\n", file, line, msg);
    current_test_failures++;
    failure_count++;
}

int UnityEnd(void) {
    printf("\n--- Overall Test Summary ---\n");
    printf("Total Tests: %d\n", test_count);
    printf("Failures: %d\n", failure_count);
    printf("Result: %s\n", (failure_count > 0) ? "FAIL" : "PASS");
    return failure_count;
}