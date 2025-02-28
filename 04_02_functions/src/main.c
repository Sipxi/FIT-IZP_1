#include "types.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * Determine whether the provided character is alphabetic.
 *
 * @param c character
 *
 * @return true when the provided character `c` is alphabetic;
 *    false otherwise
 */
bool is_alpha(char c)
{
    //* Over and over again
    //* This time we just have the return value
    //* return value is true or false it means that after the function is done
    //* It will return true or false and you can use it /save it in a variable
    //* a = is_alpha('a')
    //* (a will be true)
    if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))) {

        return true;
    }
    return false;
}

/**
 * Determine whether all characters of the provided `string`
 *    (character array) are alphabetic.
 *
 * @param string input string
 *
 * @return true when all characters in the provided string are alphabetic;
 * 	  false otherwise
 */
bool is_name(char string[])
{
    //* Iterate through the string and call is_alpha on each character
    int length = 0;
    while (string[length] != '\0') {
        if (!is_alpha(string[length])) {
            return false;
        }
        length++;
    }
    return true;
}

#ifndef TEST_BUILD

int main()
{
    // Limit the size of names to 20 characters + terminating '\0'
    char name[21];
    char surname[21];

    // Let the user specify their name
    printf("Please provide your name: ");
    scanf("%20s", name);

    // Call our new function that checks if the name contains only alphabetic symbols
    // The argument supplied to the function can have a different name than the one
    // specified in the function definition.
    if (!is_name(name)) {
        printf("Provided name contains non-alphabetic characters!\n");
        return 1;
    }

    printf("Please provide your surname: ");
    scanf("%20s", surname);
    if (!is_name(surname)) {
        printf("Provided surname contains non-alphabetic characters!\n");
        return 1;
    }

    printf("Your full name is: %s %s\n", name, surname);
    return 0;
}

#endif
