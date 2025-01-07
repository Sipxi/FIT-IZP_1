/**
 * Hlavičkový soubor types.h
 *
 *     OBSAH V TOMTO SOUBROU NEUPRAVUJTE!
 */

#include <stdbool.h>
#include <stdio.h>

#ifndef TYPES_H
#define TYPES_H

// DEKLAROVANÉ HLAVIČKY FUNKCÍ NIJAK NEMĚŇTE

#define MAT_ROWS 3
#define MAT_COLUMNS 3

#define MAT_FILE_PATH "matrix.txt"

void print_2d(int matrix[MAT_ROWS][MAT_COLUMNS]);

bool save_to_file(const char *filename, int matrix[MAT_ROWS][MAT_COLUMNS]);

bool save_to(FILE *output, int matrix[MAT_ROWS][MAT_COLUMNS]);

bool load_from_file(const char *filename, int matrix[MAT_ROWS][MAT_COLUMNS]);

bool load_from(FILE *input, int matrix[MAT_ROWS][MAT_COLUMNS]);

#endif
