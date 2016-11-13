#include "unity.h"
#include "quickSortStub.h"
#include "QuickSort.h"


void setUp(void){}



void tearDown(void){}

void test_quickSort_function_with_given_13_4_3_52_23_14_21_0(void){

  int a[8] = {13,4,3,52,23,14,21,0};



  quickSort(a, 0, 7);



  UnityAssertEqualNumber((_U_SINT)((a[0])), (_U_SINT)((0)), (((void *)0)), (_U_UINT)79, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[1])), (_U_SINT)((3)), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[2])), (_U_SINT)((4)), (((void *)0)), (_U_UINT)81, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[3])), (_U_SINT)((13)), (((void *)0)), (_U_UINT)82, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[4])), (_U_SINT)((14)), (((void *)0)), (_U_UINT)83, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[5])), (_U_SINT)((21)), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[6])), (_U_SINT)((23)), (((void *)0)), (_U_UINT)85, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((a[7])), (_U_SINT)((52)), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_INT);

}
