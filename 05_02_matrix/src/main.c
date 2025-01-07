#include "types.h"
#include <stdio.h>

/**
 * Print the contents of the provided 2D matrix.
 *
 * @param arr 2D matrix
 */
void print_2d(int arr[MAT_ROWS][MAT_COLUMNS])
{
    //* Iterate over the 2D array
    //* 2 nested for loops
    for (int row = 0; row < MAT_ROWS; row++) {
        for (int col = 0; col < MAT_COLUMNS; col++) {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");
}

/**
 * Search for a value in the provided 2D matrix.
 *
 * @param arr 2D matrix
 * @returns true when found, false otherwise
 */
bool contains_value(int arr[MAT_ROWS][MAT_COLUMNS], int value)
{
    //* Iterate over the 2D array
    //* Return true when found
    for (int row = 0; row < MAT_ROWS; row++) {
        for (int col = 0; col < MAT_COLUMNS; col++) {
            if (arr[row][col] == value) {
                return true;
            }
        }
    }
    return false;
}

/**
 * Search for a value in the provided 2D matrix.
 *
 * @param arr 2D matrix
 * @param value the value to find in the matrix
 *
 * @return coordinates of the value in the matrix when found;
 *     corrdinates {-1, -1} otherwise
 */
MatCoords find_value(int arr[MAT_ROWS][MAT_COLUMNS], int value)
{
    //* Iterate over the 2D array
    //* Return coordinates
    for (int row = 0; row < MAT_ROWS; row++) {
        for (int col = 0; col < MAT_COLUMNS; col++) {
            if (arr[row][col] == value) {
                return (MatCoords){row, col};
            }
        }
    }

    return (MatCoords){-1, -1};
}

#ifndef TEST_BUILD

int main(void)
{
    // Create 3x3 array (matrix, table, ...)
    // The array has 3 rows and in each row, 3 columns
    // MAT_ROWS and MAT_COLUMNS are defined in ./types.h
    int matrix[MAT_ROWS][MAT_COLUMNS], value;

    // TODO: Initialize the 2d array by setting each element to 0, i.e.:
    // --- C_0 C_1 C_2
    // R_0  0   0   0
    // R_1  0   0   0
    // R_2  0   0   0

    print_2d(matrix);

    int identity_matrix[MAT_ROWS][MAT_COLUMNS];
    // TODO: Create and initialize an identity matrix, i.e.:
    // --- C_0 C_1 C_2
    // R_0  1   0   0
    // R_1  0   1   0
    // R_2  0   0   1

    print_2d(identity_matrix);

    // Set new value to row = 1, col = 2
    value = matrix[1][2] = 5;

    // Try to find the value
    bool contains_result = contains_value(matrix, value);
    if (contains_result) {
        printf("Value: %d found!\n", value);
    } else {
        printf("Value: %d not found!\n", value);
    }

    // Try to find the value and obtain its coordinates in the matrix
    MatCoords coords = find_value(matrix, value);
    if (coords.row == -1 || coords.column == -1) {
        printf("Value: %d not found!\n", value);
    } else {
        printf("Value: %d found at [%d, %d].\n", value, coords.row, coords.column);
    }

    return 0;
}

#endif
