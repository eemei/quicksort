#include "unity.h"
#include "QuickSort.h"

void setUp(void){}

void tearDown(void){}

void test_module_generator_needs_to_be_implemented(void)
{
	program();
}

void test_swap_function(void){
  int a[8] = { 19, 32, 18, 24, 30, 12, 28, 20};
  int swapped[8] = {19, 32, 18, 24, 30, 28, 12, 20};
  swap(5, 6);
  TEST_ASSERT_EQUAL_ARRAY(swapped, a);
  }
