#include "types.h"
#include <stdio.h>

#define ARRAY_LENGTH 5
#define MERGED_ARRAY_LENGTH 2 * ARRAY_LENGTH

void read_print_array_reverse() {
  //* Pretty simple, make an array with ARRAY_LENGTH constant
  //* That means that number_array[5]
  //* In for cycle scanf 5 number
  //* Then just make a cycle in verse, from 5 to 0]
  int number_array[ARRAY_LENGTH];
  //TODO 1. Read an array of numbers of length ARRAY_LENGTH from stdin.
  for (int idx = 0; idx < ARRAY_LENGTH; idx++){
    scanf("%d", &number_array[idx]);
  }
  //TODO 2. Print read array in reversed order to stdout.

  for (int idx = ARRAY_LENGTH; idx >= 0; idx--){
    printf("%d", idx);
  }
  return;
}

void read_print_array_max() {
  //* So, the same thing, read array
  //* Assume that first number of that array is max int max = number_array[idx]
  //* then in cycle compare them
  int number_array[ARRAY_LENGTH];
  //TODO 1. Read an array of numbers of length ARRAY_LENGTH from stdin.
  for (int idx = 0; idx < ARRAY_LENGTH; idx++){
    scanf("%d", &number_array[idx]);
  }
  int max = number_array[0];

  for (int idx = 0; idx < ARRAY_LENGTH; idx++){
    if(number_array[idx] > max){
      max = number_array[idx];
    }
  }
  printf("Max is:%d", max);
  
  //TODO 2. Find maximum value and print it to stdout.
  return;
}

void read_print_array_avg() {
  //* Simple
  //* Just...make summ? And make avg out of it?
  int number_array[ARRAY_LENGTH];
  for (int idx = 0; idx < ARRAY_LENGTH; idx++){
    scanf("%d", &number_array[idx]);
    }
  int max = number_array[0];
  //TODO 1. Read an array of numbers of length ARRAY_LENGTH from stdin.
  int summ = 0;

  for (int idx = 0; idx < ARRAY_LENGTH; idx++){
      summ+=number_array[idx];
  }
  float avg = summ/ARRAY_LENGTH;
  printf("AVG: %f", avg);

  //TODO 2. Calculate average value and print it to stdout.
  return;
}


void read_print_array_merge() {
  //* Just make three arrays, scanf to 2 of them
  //* In for cycle now to MERGED_ARRAY_LENGTH
  //* If it's bigger then ARRAY_LENGTN(5) copy second one
  //* Be aware for indexes, it's crucial to idx-arraylength to reset the idx counter
  //* otherwise it will result:
  //* merged_array[idx](which could be 6) = second_array[idx](it will be 6 too)
  //* and second array doesn't have the 6th index
  int first_array[ARRAY_LENGTH];
  int second_array[ARRAY_LENGTH];
  int merged_array[MERGED_ARRAY_LENGTH];
  printf("First array: ");
  for (int idx = 0; idx < ARRAY_LENGTH; idx++){
    scanf("%d", &first_array[idx]);
    }
  printf("Second array: ");
  for (int idx = 0; idx < ARRAY_LENGTH; idx++){
    scanf("%d", &second_array[idx]);
    }
  //TODO 1. Read 2 arrays of numbers, each of length ARRAY_LENGTH from stdin.


  //TODO 2. To 3rd array of length MERGED_ARRAY_LENGTH copy first and second

  for (int idx = 0; idx < MERGED_ARRAY_LENGTH; idx++){
    if(idx > ARRAY_LENGTH){
      merged_array[idx] = second_array[idx - ARRAY_LENGTH];
    }
    else{
      merged_array[idx] = first_array[idx];
    }
  }
  for (int idx = 0; idx < MERGED_ARRAY_LENGTH; idx++){
    printf("%d", merged_array[idx]);
    }

  //second arrays respectively and resulting third array print to stdout.
  return;
}


#ifndef TEST_BUILD

int main(int argc, char *argv[]) {
  /*
  printf("\n--read_print_array_reverse--\n");
  read_print_array_reverse();

  printf("\n--read_print_array_max--\n");
  read_print_array_max();
  
  printf("\n--read_print_array_avg--\n");
  read_print_array_avg();
  */

  printf("\n--read_print_array_merge--\n");
  read_print_array_merge();

  return 0;
}

#endif
