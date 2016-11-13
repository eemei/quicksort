#ifndef QuickSort_H
#define QuickSort_H

void display(int *arr);
void program(int *arr);
void quickSort( int *arr, int start, int end);
int partition( int *arr, int start, int end);
void swap(int num1, int num2, int *arr);

#ifdef TEST
#include "quickSortStub.h"
#else
#define__quickSort quickSort
#endif // TEST

#endif // QuickSort_H
