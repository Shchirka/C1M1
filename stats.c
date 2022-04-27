/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief a simple app that performs statistical analystics on a dataset
 *
 *
 *
 * @author Shchirska Antonina
 * @date 27.04.2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  int test[SIZE] = {34, 201, 190, 154,   8, 194,   2,   6,
                    114, 88,   45,  76, 123,  87,  25,  23,
                    200, 122, 150, 90,   92,  87, 177, 244,
                    201,   6,  12,  60,   8,   2,   5,  67,
                     7,  87, 250, 230,  99,   3, 100,  90};

  int median;
  int mean;
  int max;
  int min;
  /* Statistics and Printing Functions Go Here */
  sort_array(test, SIZE);
  print_array(test, SIZE);
  
  print_statistics(test);
}
int find_maximum(int * ptr, int count){
  int i = 0;
  int max;
  if(ptr==NULL){
    return 0;
  }
  while(i < count){
    if(i==0){
      max = *ptr;
    }
    if(*ptr >= max){
      max = *ptr;
    }
    i++;
    ptr++;
  }
  return max;
}
int find_minimum(int * ptr, int count){
  int i = 0;
  int min;
  if(ptr==NULL){
    return 0;
  }
  while(i < count){
    if(i==0){
      min = *ptr;
    }
    if(*ptr <= min){
      min = *ptr;
    }
    i++;
    ptr++;
  }
  return min;
}

int find_mean(int * ptr, int count){
  int i;
  int mean;
  if(ptr==NULL){
    return 0;
  }
  if(count<=0){
    count=1;
  }
  for(i=0; i<count; i++){
    mean += *ptr;
    ptr++;
  }
  return (mean/count);
}

int find_median(int ptr[SIZE], int count){
  int median;
  if(ptr==NULL){
    return 0;
  }
  median = count/2;
  return ptr[median];
}

void sort_array(int ptr[SIZE], int count){
  int i, j;

  for(i=0; i < count - 1; i++){
    for(j=0; j < count - i - 1; j++){
      if(ptr[j] < ptr[j+1]){
        int tmp = ptr[j];
	ptr[j] = ptr[j+1];
	ptr[j+1] = tmp;
      }
    }
  } 
}

void print_array(int * ptr, int count){
  int i;
  for(i=0; i < count; i++){
    printf("%d   ", *ptr);
    ptr++;
  }
  printf("\n");
}

void print_statistics(int ptr[SIZE]){
  int min = find_minimum(ptr, SIZE);
  int max = find_maximum(ptr, SIZE);
  int mean = find_mean(ptr, SIZE);
  int median = find_median(ptr, SIZE);

  printf("maximum value: %d \n", max);
  printf("minimum value: %d \n", min);
  printf("average value: %d \n", mean);
  printf("median value: %d \n", median);
}
