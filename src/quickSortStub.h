#ifndef quickSortStub_H
#define quickSortStub_H

#ifdef TEST
#include "quickSort.h"
#else
#define _quickSort quickSort
#endif // TEST

void _quickSort(int *arr, int start, int end);

#endif // quickSortStub_H
