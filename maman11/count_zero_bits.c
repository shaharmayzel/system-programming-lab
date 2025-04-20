#include <stdio.h>

/*
 * Counts the number of 0 bits in the binary representation
 * of an unsigned integer.
 * Returns the total number of zero bits.
 */
int count_zero_bits(unsigned int n);

int main() {
    unsigned int number;

    printf("Enter an unsigned integer:\n");
    scanf("%u", &number);

    printf("The number: %u\n", number);
    printf("Number of zero bits: %d\n", count_zero_bits(number));

    return 0;
}

int count_zero_bits(unsigned int n) {
    int count = 0;
    unsigned int mask = 1;
    int i;

    /* iterate over all bits of the integer */
    for (i = 0; i < sizeof(unsigned int) * 8; i++) {
        if ((n & mask) == 0)
            count++;
        mask <<= 1;
    }

    return count;
}
