#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#include "array_merge.h"
#include "../mergesort/mergesort.h"
#include "../mergesort/mergesort.c"



int sumofintegers(int* sizes,int num_arrays){
  int sum = 0;
  int index;
  for (index=0; index < num_arrays; index++){
    sum += sizes[index];
  }
  return sum;
    }

bool checkarrayDuplicates(int* oneDimArray,int value,int sizes){
  int index;
  for (index=0; index < sizes; index++){
    if (value == oneDimArray[index]){
      return false;
    }
    
  }
  return true;
}

  

int* array_merge(int num_arrays, int* sizes, int** values){
  int sum = sumofintegers(sizes, num_arrays);
  int bigArray[sum];
  int uniqueNumbersCount = 0;
  int index;
  int valueindex;
  for (index=0; index < num_arrays; index++) {
    for (valueindex=0; valueindex < sizes[index]; valueindex++){
      if (checkarrayDuplicates(bigArray, values[index][valueindex] , uniqueNumbersCount)){
	  bigArray[uniqueNumbersCount] = values[index][valueindex];
	  uniqueNumbersCount++;
	 
	}
    }
    }
      int finalsumsize = uniqueNumbersCount + 1;
      int* lastBigArray = (int *)malloc(finalsumsize * sizeof(int));
      
      lastBigArray[0] = uniqueNumbersCount;

      for(index = 1; index < finalsumsize; index++){
	lastBigArray[index] = bigArray[index - 1];
	mergesortRange(lastBigArray,1,finalsumsize);
    
 
   
      }
      return lastBigArray;
}

    
