#include "quickSortSub.h"
#include "QuickSort.h"

void _quickSort(int *arr, int start, int end){
  int partitioned;
  if(start < end){
    partitioned = partition( arr, start, end);
    quickSort( arr, start, partitioned-1);
    quickSort( arr, partitioned+1, end);
  }
    else
    return;
}