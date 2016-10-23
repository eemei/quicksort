/*
*   Quick Sort:
*        
* ->  in this program "Always" pick first element as pivot.
* ->  The key process in quickSort is partition(). 
* ->  Target of partitions is, 
      given an array and an element x of array as pivot, 
      put x at its correct position in sorted array 
      and put all smaller elements (smaller than x) before x, 
      and put all greater elements (greater than x) after x. 
      All this should be done in linear time.
*/

#include "QuickSort.h"
#include <stdio.h>

#define MAX 8

//int a[MAX] = {25, 4, 40, 6, 30, 27, 28, 20};

void program(int *a){
	int i;
	printf("Unsorted array is:  ");
	for(i = 0; i < MAX; ++i)
		printf(" %d ", a[i]);
    printf("\n");
    printline(50);
    quickSort( a, 0, 8);
    printline(50);
    printf("\nSorted array is:  ");
    display(a);
    printline(50);
}

void printline(int count){
  int i;
	
  for(i = 0;i <count-1;i++){
      printf("=");
  }
	
  printf("=\n");
}

void display(int *a){
  int i;
  printf("\n[");
  for(i = 0;i<MAX;i++){
    printf(" %d ",a[i]);
  }
	printf("]\n");
}

void quickSort(int *a, int start, int end){
  int j;
  if(start < end){
    j = partition( a, start, end);
    quickSort( a, start, j-1);
    quickSort( a, j+1, end);
  }
    else
    return;
}

void swap(int num1, int num2, int *a){
  int temp;
  temp = a[num1];
  a[num1] = a[num2];
  a[num2] = temp;
}

int partition(int *a, int start, int end){
  int pivot, i, j;
  pivot = a[start];
  i = start; 
  j = end + 1;
		
  while(i<j){ 
    do{
      i++;
    }while(a[i] <= pivot && i <= end);
    do{
      j--;
    }while(a[j] > pivot);
    if(i >= j)
      break;
    swap(i, j, a);
    printf("\nitem swapped :%d,%d\n", a[i], a[j]);
    display(a);
   }
  swap(start, j, a);
  printf("\npivot swapped :%d,%d\n", a[start], a[j]);
  display(a);
  return j;
}
