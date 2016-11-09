#include "unity.h"
#include "QuickSort.h"
#include "quickSortSub.h"

void setUp(void){}

void tearDown(void){}

// // void test_module_generator_needs_to_be_implemented(void)
// // {
  // // int a[] = {25, 4, 40, 6, 30, 27, 28, 20};
	// // program(a);
// // }

// void test_swap_function_given_2_and_3(void){
  // int a[] = {1, 2, 3, 4, 5, 6, 7};
  // int arry[] = {1,3,2,4,5,6,7};
  // swap(1, 2, a);

  // TEST_ASSERT_EQUAL(a[1],arry[1]);
  // TEST_ASSERT_EQUAL(a[2], arry[2]);
// }

// void test_partition_function_given_pivot_value_is_18(void){
  // int array[] = {19, 32, 18, 24, 30, 12, 28, 20};
// // after first round partition :19, 32, 18,| 24, 30, 28, 12, 20
// //                               0   1   2
  // int j;
   // j = partition(array, 0, 7);

  // TEST_ASSERT_EQUAL(j,2);
// }

// void test_partition_function_given_pivot_value_is_25(void){
  // int a[] = {25, 4, 40, 6, 30, 20, 28, 26};
// // after first round partition :  6  4  20  25|  30  40  28  26
// //                                0   1  2  3   
  // int j;
   // j = partition(a, 0, 7);

  // TEST_ASSERT_EQUAL(j,3);
// }

// void test_partition_function_given_pivot_value_is_negative_1(void){
  // int a[] = {-1, 4, 40, 6, 30, 20, 30, 26};
// // after first round partition :-1| 4 40 6 30 20 30 26  
// //                                0      
  // int j;
  // j = partition(a, 0, 7);

  // TEST_ASSERT_EQUAL(j,0);
// }

// void test_partition_function_given_pivot_value_is_larger_value(void){
  // int a[] = {50, 4, 40, 6, 30, 20, 28, 26};
// // after first round partition :26  4  40  6  30  20  28  50| 
// //                              0   1  2   3  4   5   6  7
  // int j;
  // j = partition(a, 0, 7);

  // TEST_ASSERT_EQUAL(j,7);
// }

// void test_partition_function_given_pivot_value_is_same_value_as_member(void){
  // int a[] = {22, 4, 40, 6, 30, 20, 22, 26};
// // after first round partition :20  4  22  6  22| 30  40  26
// //                              0   1  2   3  4   
  // int j;
  // j = partition(a, 0, 7);

  // TEST_ASSERT_EQUAL(j,4);
// }

void test_quickSort_function_with_given_13_4_3_52_23_14_21_0(void){
  int a[8] = {13,4,3,52,23,14,21,0};
  // sorted : {0,3,4,13,14,21,23,52};
  quickSort(a, 0, 7);
  
  TEST_ASSERT_EQUAL(a[0], 0);
  TEST_ASSERT_EQUAL(a[1], 3);
  TEST_ASSERT_EQUAL(a[2], 4);
  TEST_ASSERT_EQUAL(a[3], 13);
  TEST_ASSERT_EQUAL(a[4], 14);
  TEST_ASSERT_EQUAL(a[5], 21);
  TEST_ASSERT_EQUAL(a[6], 23);
  TEST_ASSERT_EQUAL(a[7], 52);
}
