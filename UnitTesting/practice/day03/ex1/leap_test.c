#include "leapyear.h"
#include "unity.h"
#include <stdio.h>

void setUp(){}
void tearDown(){}

void test_leapyear () {
    TEST_ASSERT_EQUAL (1, IsLeapYear (1996));
}

int main() {
    UNITY_BEGIN();

    RUN_TEST(test_leapyear);

    return UNITY_END();
}