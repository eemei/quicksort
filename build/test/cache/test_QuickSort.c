#include "unity.h"
#include "QuickSort.h"


void setUp(void){}



void tearDown(void){}















void test_swap_function_given_5_and_10(void){

  int a[] = {1, 2, 3, 4, 5, 6, 7};

  int arr2[] = {1,3,2,4,5,6,7};

  swap(1, 2, a);



  UnityAssertEqualNumber((_U_SINT)((a[1])), (_U_SINT)((arr2[1])), (((void *)0)), (_U_UINT)19, UNITY_DISPLAY_STYLE_INT);

}



void test_partition_function_given_pivot_value_is_18(void){

  int array[] = {19, 32, 18, 24, 30, 12, 28, 20};





  int j;

   j = partition(array, 0, 7);



  UnityAssertEqualNumber((_U_SINT)((j)), (_U_SINT)((2)), (((void *)0)), (_U_UINT)29, UNITY_DISPLAY_STYLE_INT);

}



void test_partition_function_given_pivot_value_is_25(void){

  int a[] = {25, 4, 40, 6, 30, 20, 28, 26};





  int j;

   j = partition(a, 0, 7);



  UnityAssertEqualNumber((_U_SINT)((j)), (_U_SINT)((3)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_INT);

}



void test_quickSort_function_with_given_13_4_3_52_23_14_21_0(void){

  int a[8] = {13,4,3,52,23,14,21,0};



  quickSort(a, 0, 7);

  UnityAssertEqualNumber((_U_SINT)((a[0])), (_U_SINT)((0)), (((void *)0)), (_U_UINT)46, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[1])), (_U_SINT)((3)), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[2])), (_U_SINT)((4)), (((void *)0)), (_U_UINT)48, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[3])), (_U_SINT)((13)), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[4])), (_U_SINT)((14)), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[5])), (_U_SINT)((21)), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[6])), (_U_SINT)((23)), (((void *)0)), (_U_UINT)52, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[7])), (_U_SINT)((52)), (((void *)0)), (_U_UINT)53, UNITY_DISPLAY_STYLE_INT);

}
