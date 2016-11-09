#include "unity.h"
#include "mock_quickSortSub.h"
#include "QuickSort.h"

void setUp(void){}

void tearDown(void){}

void test_module_generator_needs_to_be_implemented(void)
{
  int arr[8] = {13,4,3,52,23,14,21,0};
  int start = 0;
  int end =7;
  
 // _quickSort_Expect(arr, 8, 0);
  quickSort(arr, 0, end);
  
}
