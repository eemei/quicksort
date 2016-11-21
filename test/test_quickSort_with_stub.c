#include "unity.h"
#include "mock_quickSortStub.h"
#include "QuickSort.h"

void setUp(void){}

void tearDown(void){}

void test_quickSort_with_patition_value_is_three(void){
  int arr[8] = {13,4,3,52,23,14,21,0};
/*
* unsorted:                 13  4  3  52  23  14  21  0
* swap 0 and 52:            13  4  3  0  23  14  21  52
* pivot swap 13             0  4  3 13|  23  14  21  52           
* and 0 (partition = 3)           /             \
*                         ( 0  3  4  13) ( 23  14  21  52)
*                                        ( 21  14  23  52)
*                                        ( 14  21  23  52)
*/
  int start = 0;
  int end =7;
  int arrFirst[8] = {0, 4, 3, 13, 23, 14, 21, 52};
  int arrTwo[8] = {0,  3,  4,  13,  23,  14,  21,  52};
  _quickSort_Expect(arrFirst, 0, 2);
  _quickSort_Expect(arrTwo, 4, 7);
  quickSort(arr, 0, end);
}

void test_quickSort_with_patition_value_is_six(void){
  int arr[8] = {17,4,3,2,8,9,21,0};
/*
* unsorted:                 17  4  3  2  8   9   21   0
* swap 0 and 21:            17  4  3  2  8   9   0   21
* pivot swap 17             0   4  3  2  8   9  17|  21           
* and 0 (partition = 6)           /                  \
*                         (  0  2  3  4  8  9  17) ( 21 )
*                                       
*/
  int start = 0;
  int end =7;
  int arrFirst[8] = { 0, 4, 3, 2, 8, 9, 17, 21};
  int arrTwo[8] = { 0, 2, 3, 4, 8, 9, 17, 21};
  _quickSort_Expect(arrFirst, 0, 5);
  _quickSort_Expect(arrTwo, 7, 7);
  quickSort(arr, 0, end);
}