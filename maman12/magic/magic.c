#include <stdio.h>
#include "magic.h"

/* 
 * Reads N x N integers into the matrix from standard input.
 * Ensures values are in range [1, N*N] and not duplicated.
 * Returns 1 if successful, 0 otherwise.
 */
int read_matrix(int matrix[N][N]) {
    int seen[N * N + 1];
    int count;
    int val;
    int i;

    /* initialize seen values to 0 */
    for (i = 0; i <= N * N; i++) {
        seen[i] = 0;
    }

    count = 0;
    while (count < N * N && scanf("%d", &val) == 1) {
        if (val < 1 || val > N * N) {
            fprintf(stderr, "Error: Value out of range: %d\n", val);
            return 0;
        }
        if (seen[val]) {
            fprintf(stderr, "Error: Duplicate value: %d\n", val);
            return 0;
        }

        matrix[count / N][count % N] = val;
        seen[val] = 1;
        count++;
    }

    if (count < N * N) {
        fprintf(stderr, "Error: Not enough values\n");
        return 0;
    }

    return 1;
}

/*
 * Checks if the given matrix is a magic square.
 * All rows, columns and diagonals must sum to the same value.
 * Returns 1 if it's a magic square, 0 otherwise.
 */
int is_magic_square(int matrix[N][N]) {
    int i, j;
    int sum, row_sum, col_sum;
    int diag1, diag2;

    sum = 0;
    for (j = 0; j < N; j++) {
        sum += matrix[0][j];
    }

    for (i = 1; i < N; i++) {
        row_sum = 0;
        for (j = 0; j < N; j++) {
            row_sum += matrix[i][j];
        }
        if (row_sum != sum) {
            return 0;
        }
    }

    for (j = 0; j < N; j++) {
        col_sum = 0;
        for (i = 0; i < N; i++) {
            col_sum += matrix[i][j];
        }
        if (col_sum != sum) {
            return 0;
        }
    }

    diag1 = 0;
    diag2 = 0;
    for (i = 0; i < N; i++) {
        diag1 += matrix[i][i];
        diag2 += matrix[i][N - 1 - i];
    }

    return diag1 == sum && diag2 == sum;
}

/*
 * Prints the matrix in a formatted grid.
 */
void print_matrix(int matrix[N][N]) {
    int i, j;

    printf("Matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}
