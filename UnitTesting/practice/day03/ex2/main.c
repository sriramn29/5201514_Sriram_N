#include "unity.h"
#include "demo.h"
int main(){
    UNITY_BEGIN();

    RUN_TEST(test_even);
    RUN_TEST(test_odd);
    RUN_TEST(test_max_equal);
    RUN_TEST(test_max_not_equal);
    RUN_TEST(test_max_greater_than);
    RUN_TEST(test_max_greater_than_or_equal);
    RUN_TEST(test_min_less_than);
    RUN_TEST(test_min_less_than_or_equal);
    RUN_TEST(test_max_equal_int);
    
    return UNITY_END();
}