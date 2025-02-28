/**
 * Hlavičkový soubor types.h
 *
 *     OBSAH V TOMTO SOUBROU NEUPRAVUJTE!
 */
#include <stdbool.h>

#ifndef TYPES_H
#define TYPES_H

// DEKLAROVANÉ HLAVIČKY FUNKCÍ A STRUKTUR NIJAK NEMĚŇTE

#define MAT_ROWS 3
#define MAT_COLUMNS 3

/**
 * Structure representing coordinates in a generic 2D matrix;
 */
struct mat_coords_t {
  /** Row index in the matrix */
  int row;
  /** Column index in the matrix row */
  int column;
};

// create `MatCoords` type as an alias for `struct mat_coords_t`
typedef struct mat_coords_t MatCoords;

/**
 * Print the contents of the provided 2D matrix.
 *
 * @param matrix 2D matrix
 */
void print_2d(int matrix[MAT_ROWS][MAT_COLUMNS]);

/**
 * Search for a value in the provided 2D matrix.
 *
 * @param matrix 2D matrix
 * @returns 1 when found, 0 otherwise
 */
bool contains_value(int matrix[MAT_ROWS][MAT_COLUMNS], int value);

/**
 * Search for a value in the provided 2D matrix.
 *
 * @param matrix 2D matrix
 * @param value the value to find in the matrix
 *
 * @return coordinates of the value in the matrix when found;
 *     corrdinates {-1, -1} otherwise
 */
MatCoords find_value(int matrix[MAT_ROWS][MAT_COLUMNS], int value);

#endif
