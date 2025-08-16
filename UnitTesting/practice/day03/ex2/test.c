#include "unity.h"
#include "demo.h"
#include <stdio.h>
void setUp(){}
void tearDown(){}
void test_even(){
    TEST_ASSERT_TRUE(is_even(4));
    TEST_ASSERT_TRUE (is_even(8));
}
void test_odd(){
    TEST_ASSERT_FALSE(is_even(3));
    TEST_ASSERT_FALSE(is_even(5));
}
void test_max_equal(){
    int result=max(25,50);
    TEST_ASSERT_EQUAL(20,max(10,20));
    //TEST_ASSERT_EQUAL(50,max(40,50));
    TEST_ASSERT_EQUAL(50,result);
}
void test_max_not_equal(){
    TEST_ASSERT_NOT_EQUAL(10,max(5,15));
    TEST_ASSERT_NOT_EQUAL(5,max(10,20));
}

void test_max_greater_than(){
    TEST_ASSERT_GREATER_THAN(3,max(10,3));
    TEST_ASSERT_GREATER_THAN(10,max(40,35));
}
void test_max_greater_than_or_equal(){
    TEST_ASSERT_GREATER_OR_EQUAL(5,max(5,5));
    TEST_ASSERT_GREATER_OR_EQUAL(4,max(5,5));
}
void test_min_less_than(){
    TEST_ASSERT_LESS_THAN(10,min(3,10));
    TEST_ASSERT_LESS_THAN(15,min(12,14));
    
}
void test_min_less_than_or_equal(){
    TEST_ASSERT_LESS_OR_EQUAL(5,min(5,5));
    TEST_ASSERT_LESS_OR_EQUAL(5,min(3,5));
}
void test_max_equal_int(){
    TEST_IGNORE();//TO IGNORE
    TEST_ASSERT_EQUAL_INT(100,max(100,50));
    TEST_ASSERT_EQUAL_INT(10,max(10,5));
}