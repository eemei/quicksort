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

void program(int *arr){
	int i;
	printf("Unsorted array is:  ");
	for(i = 0; i < MAX; ++i)
		printf(" %d ", arr[i]);
    printf("\n");
    quickSort( arr, 0, 8);
    printf("\nSorted array is:  ");
    display(arr);
}

/*
* ->  for display all the element of the array
*/
void display(int *arr){
  int i;
  printf("\n[");
  for(i = 0;i<MAX;i++){
    printf(" %d ",arr[i]);
  }
	printf("]\n");
}

/*
*  1 − Make the LEFT-most index value pivot
*  2 − partition the array using pivot value
*  3 − quicksort left partition recursively
*  4 − quicksort right partition recursively
*/
void quickSort(int *arr, int start, int end){
  int partitioned;
  if(start < end){
    partitioned = partition( arr, start, end);
    _quickSort( arr, start, partitioned-1);
    display(arr);
    _quickSort( arr, partitioned+1, end);  
  }
    else
    return;
}

/*
* swap two different index of array
*/
void swap(int num1, int num2, int *arr){
  int temp;
  temp = arr[num1];
  arr[num1] = arr[num2];
  arr[num2] = temp;
}

/*
* 1 - Make the LEFT-most index value pivot 
  2 - put pivot at its correct position in sorted array 
  3 - put all smaller elements which :
      - smaller than pivot 
      - put before pivot, 
  4 - put all greater elements which :
      - greater than pivot 
      - put after pivot. 
*/

int partition(int *arr, int start, int end){
 
  int pivot, i, j; 
  //randValue = rand() % (8);
  //pivot = arr[randValue];  
  pivot = arr[start];
  i = start; 
  j = end + 1;
	//swap(randValue, start, arr);
  while(i<j){ 
    do{
      i++;
    }while(arr[i] <= pivot && i <= end);
    do{
      j--;
    }while(arr[j] > pivot);
    if(i >= j)
      break;
    swap(i, j, arr);
    printf("\nitem swapped :%d,%d\n", arr[i], arr[j]);
    display(arr);
   }
  swap(start, j, arr);
  printf("\npivot swapped :%d,%d\n", arr[start], arr[j]);
  display(arr);
  return j;
}

