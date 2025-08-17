#ifndef UNITY_H
#define UNITY_H

extern int test_count;
extern int current_test_failures; // Declare this as an external variable

#define TEST_ASSERT_EQUAL(expected, actual) \
    do { \
        if ((expected) != (actual)) { \
            UnityFail(__FILE__, __LINE__, "TEST_ASSERT_EQUAL failed"); \
        } \
    } while(0)

#define TEST_ASSERT_TRUE(condition) \
    do { \
        if (!(condition)) { \
            UnityFail(__FILE__, __LINE__, "TEST_ASSERT_TRUE failed"); \
        } \
    } while(0)

#define RUN_TEST(test_func) \
    do { \
        setUp(); \
        test_func(); \
        tearDown(); \
    } while(0)

#define RUN_TEST_WITH_SUMMARY(test_func) \
    do { \
        current_test_failures = 0; \
        printf("\nRunning test: %s\n", #test_func); \
        test_count++; \
        RUN_TEST(test_func); \
        if (current_test_failures > 0) { \
            printf("Result: FAIL\n"); \
        } else { \
            printf("Result: PASS\n"); \
        } \
    } while(0)

void UnityBegin(const char* name);
int UnityEnd(void);
void UnityFail(const char* file, int line, const char* msg);

void setUp(void);
void tearDown(void);

#endif // UNITY_H