#include "types.h"
#include <stdio.h>

void print_2d(int matrix[MAT_ROWS][MAT_COLUMNS])
{
    //* Iterate over the 2D array
    for (int row = 0; row < MAT_ROWS; row++) {
        for (int column = 0; column < MAT_COLUMNS; column++) {
            printf("%d ", matrix[row][column]);
        }
        printf("\n");
    }
}

bool save_to(FILE *output, int matrix[MAT_ROWS][MAT_COLUMNS])
{
    //* Iterate over the 2D array and write to the file using fprintf
    for (int row = 0; row < MAT_ROWS; row++) {
        for (int column = 0; column < MAT_COLUMNS; column++) {
            fprintf(output, "%d ", matrix[row][column]);
        }
        fprintf(output, "\n");
    }

    // TODO: return true when successful
    return true;
}

bool save_to_file(const char *filename, int matrix[MAT_ROWS][MAT_COLUMNS])
{
    //* FILE * is the type used to represent files and data streams
    //* The FILE type is defined in stdio.h, open file with fopen() and mode "w" for writing
    //* Use our function save_to() to write the matrix to the file
    //* and fclose() to close the file


    FILE *output = fopen(filename, "w");


    bool result = save_to(output, matrix);

    fclose(output);

    // TODO: 4. Don't forget to close the file!
    return result;
}

bool load_from(FILE *input, int matrix[MAT_ROWS][MAT_COLUMNS])
{
    //* Same as save_to()

    for (int row = 0; row < MAT_ROWS; row++) {
        for (int column = 0; column < MAT_COLUMNS; column++) {
            fscanf(input, "%d", &matrix[row][column]);
        }
    }

    return true;
}

bool load_from_file(const char *filename, int matrix[MAT_ROWS][MAT_COLUMNS])
{
    //* Same as save_to_file()
    FILE *input = fopen(filename, "r");

    // TODO: 1. open the source file
    // TODO: 2. validate that the stream has opened correctly

    bool result = load_from(input, matrix);

    fclose(input);

    // TODO: 4. Don't forget to close the file!
    return result;
}

#ifndef TEST_BUILD

int main(int argc, char *argv[])
{
    // Create and initialize a matrix
    int matrix[MAT_ROWS][MAT_COLUMNS];
    for (int row = 0; row < MAT_ROWS; row++) {
        for (int column = 0; column < MAT_COLUMNS; column++) {
            matrix[row][column] = (row + 1) * (column + 1);
        }
    }

    // Save the matrix to a file
    if (save_to_file(MAT_FILE_PATH, matrix) == false) {
        printf("Error during saving matrix to file!\n");
        return 1;
    }

    // Load matrix contents from a file
    int matrix_loaded[MAT_ROWS][MAT_COLUMNS];
    if (load_from_file(MAT_FILE_PATH, matrix_loaded) == false) {
        printf("Error during loading matrix from file!\n");
        return 1;
    }

    // Print the matrix contents
    print_2d(matrix_loaded);

    return 0;
}

#endif
