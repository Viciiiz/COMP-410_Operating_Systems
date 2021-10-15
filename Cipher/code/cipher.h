#include <stdio.h>

// function to convert all lowercase characters in a sentence to uppercase. It ignores non-letter characters.
char * convert_to_uppercase(char * sentence);

// function to shift upper case letters to the left (since we shift to the right to encrypt, we shift to the right to decrypt)
char * shift_left(char * sentence);

// function to decrypt cypher. It will only treat alphabet letters
void cipher_decrypt(char * sentence);

