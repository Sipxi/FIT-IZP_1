#include <stdio.h>
#include <stdlib.h>

#include "types.h"

//* Actully I don't really remember what's going on here
//* Safely probably means that if something goes wrong, the program will crash
//* So you can always check the argc and so on. To check if arguments are provided or not and etc...


/**
 * Safely print first argument provided to the program. Determine its meaning.
 *
 * @param argc total number of arguments provided to the program
 *
 * @param argv array/vector of arguments
 */
void print_first_argument(char *argv[]) {
    //* It seems complicated, but it's not
    //* Comments above clearly explain what's going on
    //* I will give you an example
    //* if we run ./main hello_program
    //* argc = 2
    //* argv[0] = "./main"
    //* argv[1] = "hello_program"

    printf("%s", argv[0]);

    return;
}

/**
 * Safely print first 4 arguments provided to the program while converting them
 * to their corresponding data type.
 *
 * ./main <int> <double> <string>
 *
 * To convert <string> to <int>, use function atoi()
 * (https://cplusplus.com/reference/cstdlib/atoi/)
 *
 * To convert <string> to <double>, use function atof()
 * (https://cplusplus.com/reference/cstdlib/atof/)
 *
 * Use the following commmand to execute your program with set of arguments:
 *
 *      ./main 42 13.37 hello_program
 *
 * @param argc total number of arguments provided to the program
 *
 * @param argv array/vector of arguments
 */
void print_parse_arguments(char *argv[]) {
    //* No explanations, just do it
    //* Hope i understood it clearly... -_-
    int int_arg = atoi(argv[1]);
    double double_arg = atof(argv[2]);
    printf("%d %f %s", int_arg, double_arg, argv[3]);
    return;
}

/**
 * Safely print ALL arguments provided to the program without any conversion.
 *
 * ./main <int> <double> <string>
 *
 * @param argc total number of arguments provided to the program
 *
 * @param argv array/vector of arguments
 */
void print_all_arguments(int argc, char *argv[]) {
    //* I don't really remember what actually we need here
    //* I just printed out all arguments without any conversion
    for (int idx = 0; idx < argc; idx++) {
        printf("%s ", argv[idx]);
    }
    return;
}


int main(int argc, char *argv[]) {

    print_all_arguments(argc, argv);


    return 0;
}


