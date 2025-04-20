#ifndef MAGIC_H
#define MAGIC_H

/* matrix size */
#define N 3

/* 
 * Reads N x N integers into the matrix from input.
 * Returns 1 if input is valid, 0 otherwise.
 */
int read_matrix(int matrix[N][N]);

/*
 * Checks if the matrix is a magic square.
 * Returns 1 if it is, 0 otherwise.
 */
int is_magic_square(int matrix[N][N]);

/*
 * Prints the matrix in grid format.
 */
void print_matrix(int matrix[N][N]);

#endif
