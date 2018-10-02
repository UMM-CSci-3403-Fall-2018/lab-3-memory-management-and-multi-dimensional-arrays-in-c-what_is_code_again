#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "array_merge.h"
#include "../mergesort/mergesort.h"
#include "../mergesort/mergesort.c"

bool needsMerging(int rangeSize) {
	
	return rangeSize >= 2;
}

void removeDuplicate(int sortedArray[], int* size) {
	
	//Checks if the array is empty or has a single integer and returns it.
	if (size==0 || size==1)
		return size;

	//Creates a temporary array to put the cleaned up integers into.
	int temp[size];
	
	//Creates a counter for the temporary array so that we know where we 
	//are in the array.
	int Counter = 0;

	//The begining of the for loop that begins the traversal of the array.
       for (i=0; i<size-1; i++) {
       
	//Checks sorrted array if it is not equal to the next number it puts it 	//into the temporary array
       if(sortedArray[i] != sortedArray[i+1]) {
       temp[Counter++] = sorrtedArray[i];
       
       
       }
       
       }


}
