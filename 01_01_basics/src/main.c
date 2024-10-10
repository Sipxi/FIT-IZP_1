// Made by Serhij Čepil
// FIT VUT Student
// https://github.com/sipxi
// 09/10/2024

// The code is based on VUT FIT C Practicals

#include "types.h"
#include <stdio.h>


void print_helloworld() {
  //* Just use printf to print "Hello World"
  printf("Hello World\n");

  return;
}

#define A -4
#define B 2
#define C 3
void print_discriminant() {
  //* Declare int discriminant and make mathematical operations
  //* Print it to stdout. printf("%d\n", discriminant); where %d is an placeholder for int discriminant


  int discriminant = (B * B) - (4 * A * C);
  printf("%d\n", discriminant);
  return;
}

void read_print_is_even() {
  //* Read a number from stdin using scanf(%d, &number)
  //* Scanf returns number(%d) and puts it into number adress(&)
  //* Then based on module 2, print "Even" or "Odd"

  int number;
  scanf("%d", &number);
  if (number % 2 == 0) {
    printf("Even\n");
  } else {
    printf("Odd\n");
  }
  //ternary operator for if/else statement - if (number % 2 == 0) { printf("Even\n"); } else { printf("Odd\n"); }

  return;
}

void read_print_is_in_interval() {
  
  //* Read 3 numbers from stdin
  //* Based on open_interval and end_interval, print "Yes" or "No"

  int number_to_compare;
  int open_interval;
  int end_interval;
  scanf("%d %d %d", &open_interval, &end_interval, &number_to_compare);
  if (number_to_compare >= open_interval && number_to_compare <= end_interval) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return;
}

void read_print_is_leap_year() {
  //* Same principle, just different conditions
  int year;
  scanf("%d", &year);
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return; 
}

void read_print_maximum() {
  //* Read 3 numbers from stdin
  //* Save first number into max variable
  //* Compare it with others
  int first_number;
  int second_number;
  int third_number;

  scanf("%d %d %d", &first_number, &second_number, &third_number);
  int max = first_number;

  if (second_number > max) {
    max = second_number;
  }
  if (third_number > max) {
    max = third_number;
  }

  printf("Max int: %d\n", max);
  
  return;
}


#ifndef TEST_BUILD

int main() {
  printf("\n--print_helloworld--\n");
  print_helloworld();

  printf("\n--print_discriminant--\n");
  print_discriminant();
  
  printf("\n--read_print_is_even--\n");
  read_print_is_even();

  printf("\n--read_print_is_in_interval--\n");
  read_print_is_in_interval();

  printf("\n--read_print_is_leap_year--\n");
  read_print_is_leap_year();

  printf("\n--read_print_maximum--\n");
  read_print_maximum();

  return 0;
}

#endif
