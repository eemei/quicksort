/*
*   Quick Sort:
* example: 4 7 12 5 3 1 34 5
*          ^              
*       start            
* -> take START value as "pivot" value 
*
*/

#include "QuickSort.h"
#include <stdio.h>

#define MAX 8

int a[MAX] = { 19, 32, 18, 24, 30, 12, 28, 20};



void program(){
	int i;
	printf("Unsorted array is:  ");
	for(i = 0; i < MAX; ++i)
		printf(" %d ", a[i]);
    printf("\n");
    printline(50);
    quickSort( a, 0, 8);
    printline(50);
    printf("\nSorted array is:  ");
    display();
}

void printline(int count){
   int i;
	
   for(i = 0;i <count-1;i++){
      printf("=");
   }
	
   printf("=\n");
}

void display(){
   int i;
   printf("\n[");
   for(i = 0;i<MAX;i++){
      printf(" %d ",a[i]);
   }
	
   printf("]\n");
}

void quickSort(int a[], int start, int end){
  int j;
   if( start < end ){
        j = partition( a, start, end);
       quickSort( a, start, j-1);
       quickSort( a, j+1, end);
    }
    else
    return;
}

void swap(int num1, int num2) {
  int temp;
  temp = a[num1];
  a[num1] = a[num2];
  a[num2] = temp;
}

int partition(int a[], int start, int end) {
  int pivot, i, j;
  pivot = a[start];
  i = start; 
  j = end + 1;
		
  while(i<j){ 
    do
      ++i; 
    while (a[i] <= pivot && i <= end);
    do
    --j; 
    while( a[j] > pivot );
      if( i >= j )
      break;
    swap(i, j);
    printf("\nitem swapped :%d,%d\n", a[i], a[j]);
    display();
   }
  swap(start, j);
  printf("\npivot swapped :%d,%d\n", a[start], a[j]);
  display();
  return j;
}

