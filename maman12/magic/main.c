#include <stdio.h>
#include "magic.h"

/*
 * Main function to run the magic square checker.
 * Reads a matrix from input, prints it, and checks if it's a magic square.
 */
int main() {
    int matrix[N][N];

    printf("Enter %d values (1-%d) for a %dx%d matrix:\n", N * N, N * N, N, N);
    
    /* read matrix from user input */
    if (!read_matrix(matrix)) {
        printf("Failed to read matrix.\n");
        return 1;
    }

    /* print the matrix */
    print_matrix(matrix);

    /* check if the matrix is a magic square */
    if (is_magic_square(matrix)) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is NOT a magic square.\n");
    }

    return 0;
}
