// Made by Serhij Čepil
// FIT VUT Student
// https://github.com/sipxi
// 09/10/2024

// The code is based on VUT FIT C Practicals

#include "types.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void read_print_quadratic() {
  //* Nothing new here expect sqrt() - it's a function from math.h, see https://en.cppreference.com/w/c/math/sqrt
  //* Not very good to read but it is easy...really
    int a, b, c; 
    printf("Enter coefficients a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        printf("The coefficient 'a' cannot be zero. Please enter a valid quadratic equation.\n");
        return;
    }
    int discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        printf("No roots\n");
    } else if (discriminant == 0) {
        int root = -b / (2 * a);
        printf("One root: %d\n", root); 
    } else {
        int root1 = (-b - sqrt(discriminant)) / (2 * a);
        int root2 = (-b + sqrt(discriminant)) / (2 * a);
        printf("Two roots: %d and %d\n", root1, root2);
    }
}


void read_print_is_character() {

  //* Read one character from stdin
  //* When compared character it compares it with ascii table values
  //* You can think of this as "in range check"
  //* ascii table value of a is 97 and z is 122
  //* ascii table value of A is 65 and Z is 90
  //* if you input b it's ascii value is 98
  //* so it is in range of a-z in other words 97-122

  char character;
  printf("Enter a character: ");
  scanf(" %c", &character);

  if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
    printf("Is char\n");
  } else {
    printf("Is not char\n");
  }
  return;
}

void read_print_factorial() {
  //* Of course there are better ways to do it, but it's just an example
  //* you can use for loop to calculate factorial
  //* https://en.wikipedia.org/wiki/Factorial
  //* you input number from stdin
  //* make a factorial variable and use for loop to multiply number to factorial
  //* print it to stdout
  //*
  //*
  //* For example you input 3
  //* there for number = 3
  //* start value of factorial is 1
  //* start value of iterator(i value) is 1
  //* if i(currenly 1) is less or equal to number(3)
  //* multiply i(currenly 1) to factorial and store it into factorial( *= operator)
  //* increment i(currenly 1) by 1
  //* the the same till end of loop
  int number;

  scanf("%d", &number);

  int factorial = 1;

  for (int i = 1; i <= number; i++) {
    factorial *= i;
  }
  printf("Factorial is %d\n", factorial);
  return;
}



void read_print_gcd() {

  //* It's the same over and over
  //* It's not about programming, but about math...
  int num1, num2, a, b;

  printf("Enter two integers: ");
  scanf("%d %d", &num1, &num2);


  a = num1;
  b = num2;

  while (b != 0) {
      int temp = b;
      b = a % b;  
      a = temp;   
  }

  printf("The GCD of %d and %d is %d\n", num1, num2, a);
}


#ifndef TEST_BUILD

int main()
{
  printf("\n--read_print_quadratic--\n");
  read_print_quadratic();

  printf("\n--read_print_is_character--\n");
  read_print_is_character();

  printf("\n--read_print_factorial--\n");
  read_print_factorial();

  printf("\n--read_print_gcd--\n");
  read_print_gcd();

  return 0;
}

#endif
