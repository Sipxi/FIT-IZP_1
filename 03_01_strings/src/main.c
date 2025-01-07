#include <stdio.h>

#include "types.h"

void read_print_string() {
    //* Read a string from stdin of max-length of 100 characters.
    //* 101 is for the null terminator '\0'
    char string[101];

    //* %100s means read 100 characters so it cannot overflow
    scanf("%100s", string);
    printf("%s", string);
    return;
}

void read_print_string_length() {
    //* That's pretty simple
    //* Read the string from stdin of max-length of 100 characters.
    //* and iterate through it and count the number of characters
    //* if you have a null terminator '\0' while loop will stop
    //* Null terminator is in the end of each string
    char string[101];

    scanf("%100s", string);

    int length = 0;

    while (string[length] != '\0') {
        length++;
    }

    return;
}

void read_print_string_alphnum() {
    //* It's based on ASCII table
    //* https://www.asciitable.com
    //* You can think of it as "in range check"
    //* Every character has an ascii table value
    //* ascii table value of a is 97 and z is 122
    //* ascii table value of A is 65 and Z is 90
    //* if you input b it's ascii value is 98
    //* so it is in range of a-z in other words 97-122
    //* Same for numbers 48-57 they are in range of 0-9
    //* So as character '0' is essentially 48 as digit and '9' is 57 etc.
    //*
    char string[101];

    scanf("%100s", string);

    int length = 0;

    while (string[length] != '\0') {
        if ((string[length] >= '0') && (string[length] <= '9')) {
            printf("%c", string[length]);
        } else {
            printf("%d", string[length]);
        }
        length++;
    }
}

void read_print_string_lower() {
    //* Same, based on ASCII table
    //* Manipulation of ascii table value
    //* https://www.asciitable.com
    //* It's just a little bit more complicated
    //* if you input B it's ascii value is 66
    //* but if you input b it's ascii value is 98
    //* So you need to add 32 to it
    //* So you get 66+32=98 =>
    //* How do we get 32 => 'A'-'a' = 32 my doing that we will pass the magic constant check

    char string[101];

    scanf("%100s", string);
    int length = 0;

    while (string[length] != '\0') {
        if ((string[length] >= 'A') && (string[length] <= 'Z')) {
            printf("%c", string[length] + 'A' - 'a');
        } else {
            printf("%c", string[length]);
        }
        length++;
    }


    return;
}

void read_print_string_replace() {

    //* Over and over again
    //* Find and replace
    char string[101];
    char replace;
    scanf("%c", &replace);
    scanf("%100s", string);

    int length = 0;
    while (string[length] != '\0') {
        if (string[length] == replace) {
            string[length] = '_';
        }
        printf("%c", string[length]);
        length++;
    }

    return;
}

void read_print_string_compare() {
    //* We actually don't have to compare their sizes.
    //* Just compare each character one by one
    //* If you have a null terminator '\0' IN BOTH STRINGS
    //* The loop will stop
    //* So if you have a null terminator '\0' in one of the string
    //* the loop will not stop but will continue and compare the next character
    //* which is '\0' in the other string

    char string1[101];
    char string2[101];
    scanf("%100s", string1);
    scanf("%100s", string2);
    int length = 0;

    while (string1[length] != '\0' && string2[length] != '\0') {
        if (string1[length] != string2[length]) {
            printf("Not same");
            return;
        }
        length++;
    }
    printf("Same");
    return;
}


int main() {
    read_print_string_alphnum();
    return 0;
}


