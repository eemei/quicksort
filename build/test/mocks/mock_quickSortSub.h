/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_QUICKSORTSUB_H
#define _MOCK_QUICKSORTSUB_H

#include "quickSortSub.h"

void mock_quickSortSub_Init(void);
void mock_quickSortSub_Destroy(void);
void mock_quickSortSub_Verify(void);




#define _quickSort_Ignore() _quickSort_CMockIgnore()
void _quickSort_CMockIgnore(void);
#define _quickSort_Expect(arr, start, end) _quickSort_CMockExpect(__LINE__, arr, start, end)
void _quickSort_CMockExpect(UNITY_LINE_TYPE cmock_line, int* arr, int start, int end);
typedef void (* CMOCK__quickSort_CALLBACK)(int* arr, int start, int end, int cmock_num_calls);
void _quickSort_StubWithCallback(CMOCK__quickSort_CALLBACK Callback);

#endif
