#include "types.h"
#include <stdio.h>

/**
 * Funkce vymění hodnoty dvou celočíselných proměnných.
 */
void swapInts(int *variableA, int *variableB)
{
    //* This is intro to pointers

    //* First thing to do is to create a temporary variable
    //* to store the value of the first variable
    int temp = *variableA;
    //* Then we swap the values
    *variableA = *variableB;
    //* And finally we restore the value of the first variable
    *variableB = temp;
    //* the "*" is a dereferencing operator - it is used to access the value of the variable
    //* on which the pointer points

}

#ifndef TEST_BUILD

int main()
{
    int number1, number2;

    // načtení čísel ze stdin
    scanf("%d", &number1);
    scanf("%d", &number2);

    swapInts(&number1, &number2);
    printf("%d %d\n", number1, number2);

    return 0;
}

#endif
