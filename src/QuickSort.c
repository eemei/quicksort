/*
*   Quick Sort:
* example: 4 7 12 5 3 1 34 5
*          ^               ^
*      INDEX            PIVOT
* -> take LAST value as "pivot" value 
* 
*
*
*
*
* -> use recursive function
* a b c d e| f g h i
*          ^
*         pIndex
* QuickSort (array[], start, pIndex-1)
* QuickSort (array[], pIndex+1, end)
*
*/

#include "QuickSort.h"
#include <stdio.h>

const int n = 10;
const int begin = 0;



void swap(int a, int b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void arrangement(int array[10], int start, int end){
  int pivot, pIndex;
  int i;
  pivot = array[10];
  start = pIndex;
  printf ("pivot = %d   start = %d\n",pivot, start);
  // for (i = 0; i<n-1; i++){
    // if (array[i] < pivot){
      // swap(array[i], pivot);
      // pIndex = pIndex + 1;
    // } 
  // }
  //return pIndex;
}


// void QuickSort(int array[n], int start, int end){
 // arrangement(array[n], start, end);
 // QuickSort (array[n], start,pIndex-1);
 // QuickSort (array[n], pIndex+1, end);
// }

void program(){
int i, j;
 int array[10] = {5, 4, 12, 3, 1, 8, 6, 9, 6, 2};
 for (i = 0; i < 10; i++){
 printf("array[%d] = %d\t", i, array[i]);
 }
  int pivot, pIndex;
  
  pivot = array[9];
  //start = pIndex;
  printf ("pivot = %d  \n",pivot);
}











/*
* PARTITION:
* pivot = array[n];
* pIndex = start;
* for (i = start to end-1)
* {
*   if array[i] <= pivot
*     swap A[i], array[pIndex]
*     pIndex = pIndex + 1
*
*/
