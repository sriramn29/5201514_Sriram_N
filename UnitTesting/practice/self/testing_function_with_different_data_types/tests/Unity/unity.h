#ifndef UNITY_H
#define UNITY_H

#include <stdio.h> // <-- Add this for printf
#include <string.h> // <-- Add this for string functions

extern int test_count;
extern int failure_count;

// Existing Macros
#define TEST_ASSERT_TRUE(condition) \
    do { \
        if (!(condition)) { \
            UnityFail(__FILE__, __LINE__, "TEST_ASSERT_TRUE failed"); \
        } \
    } while(0)

#define TEST_ASSERT_FALSE(condition) \
    do { \
        if (condition) { \
            UnityFail(__FILE__, __LINE__, "TEST_ASSERT_FALSE failed"); \
        } \
    } while(0)

// New Macros
#define TEST_ASSERT_EQUAL_INT(expected, actual) \
    do { \
        if ((expected) != (actual)) { \
            UnityAssertEqualNumber((long)expected, (long)actual, __FILE__, __LINE__); \
        } \
    } while(0)

#define TEST_ASSERT_NOT_NULL(pointer) \
    do { \
        if ((pointer) == NULL) { \
            UnityFail(__FILE__, __LINE__, "TEST_ASSERT_NOT_NULL failed"); \
        } \
    } while(0)

#define TEST_ASSERT_EQUAL_STRING(expected, actual) \
    do { \
        UnityAssertEqualString((const char*)expected, (const char*)actual, __FILE__, __LINE__); \
    } while(0)

#define TEST_ASSERT_EQUAL_INT_ARRAY(expected, actual, num_elements) \
    do { \
        UnityAssertEqualIntArray((const int*)expected, (const int*)actual, (unsigned int)num_elements, __FILE__, __LINE__); \
    } while(0)

#define RUN_TEST(test_func) \
    do { \
        setUp(); \
        test_func(); \
        tearDown(); \
    } while(0)

#define RUN_TEST_WITH_SUMMARY(test_func) \
    do { \
        int initial_failures = failure_count; \
        printf("\nRunning test: %s\n", #test_func); \
        test_count++; \
        RUN_TEST(test_func); \
        if (failure_count > initial_failures) { \
            printf("Result: FAIL\n"); \
        } else { \
            printf("Result: PASS\n"); \
        } \
    } while(0)

// Function prototypes
void UnityBegin(const char* name);
int UnityEnd(void);
void UnityFail(const char* file, int line, const char* msg);

// New assert helper function prototypes
void UnityAssertEqualNumber(long expected, long actual, const char* file, int line);
void UnityAssertEqualString(const char* expected, const char* actual, const char* file, int line);
void UnityAssertEqualIntArray(const int* expected, const int* actual, unsigned int num_elements, const char* file, int line);

void setUp(void);
void tearDown(void);

#endif // UNITY_H