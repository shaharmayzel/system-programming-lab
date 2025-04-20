#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
 * Removes spaces, tabs and newlines from input string,
 * and checks if it is a palindrome (case-sensitive).
 * Returns 1 if it is, 0 otherwise.
 */
int palindrome(char s[]);

int main() {
    char input[81];

    printf("Please enter a string (up to 80 characters):\n");
    fgets(input, sizeof(input), stdin);

    printf("Input string: %s\n", input);

    if (palindrome(input))
        printf("The string IS a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}

int palindrome(char s[]) {
    char clean[81];
    int i, j = 0;

    /* copy characters excluding spaces, tabs and newlines */
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n') {
            clean[j++] = s[i];
        }
    }
    clean[j] = '\0';

    /* check if clean string is a palindrome */
    for (i = 0; i < j / 2; i++) {
        if (clean[i] != clean[j - i - 1]) {
            return 0;
        }
    }

    return 1;
}
