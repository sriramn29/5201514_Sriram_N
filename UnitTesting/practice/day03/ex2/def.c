#include "demo.h"
#include "unity.h"
#include <string.h>
bool is_even(int num){
    return num%2 == 0;
}
int max(int a,int b){
    return (a>b)?a:b;
}
int min(int a,int b){
    return (a<b)?a:b;
}