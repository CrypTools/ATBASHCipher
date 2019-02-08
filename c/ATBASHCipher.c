/**
 * CrypTools - GitHub
 * Friday, 8 February 2019 
 * ATBASH Cipher C Implementation
 */

/****
Compile with:
$ make
Encrypt with:
$ ./ATBASHCipher < input.txt
****/

#include <stdio.h>
#include <stdlib.h>

// ASCII VALUES LATIN ALPHABET
#define MINCAP 65
#define MAXCAP 90

#define MINLOW 97
#define MAXLOW 122

void encode (char letter);

int main (int argc, const char *argv[]) {
    int c = 0;
    while ((c = getchar()) != EOF) {
       encode(c);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

void encode (char letter) {
    int result_letter;
    if (letter >= MINCAP && letter <= MAXCAP) {
        result_letter = MAXCAP - (letter - 65);
    } else if (letter >= MINLOW && letter <= MAXLOW) {
        result_letter = MAXLOW - (letter - 97);
    } else {
        putchar(letter);
        return;
    }
    putchar(result_letter);
}
