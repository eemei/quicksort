#include "unity.h"
#include "mock_quickSortStub.h"
#include "QuickSort.h"


void setUp(void){}



void tearDown(void){}



void test_quickSort_with_patition_value_is_three(void){

  int arr[8] = {13,4,3,52,23,14,21,0};

  int start = 0;

  int end =7;

  int arrFirst[8] = {0, 4, 3, 13, 23, 14, 21, 52};

  int arrTwo[8] = {0, 3, 4, 13, 23, 14, 21, 52};

  _quickSort_CMockExpect(24, arrFirst, 0, 2);

  _quickSort_CMockExpect(25, arrTwo, 4, 7);

  quickSort(arr, 0, end);

}



void test_quickSort_with_patition_value_is_six(void){

  int arr[8] = {17,4,3,2,8,9,21,0};

  int start = 0;

  int end =7;

  int arrFirst[8] = { 0, 4, 3, 2, 8, 9, 17, 21};

  int arrTwo[8] = { 0, 2, 3, 4, 8, 9, 17, 21};

  _quickSort_CMockExpect(43, arrFirst, 0, 5);

  _quickSort_CMockExpect(44, arrTwo, 7, 7);

  quickSort(arr, 0, end);

}
