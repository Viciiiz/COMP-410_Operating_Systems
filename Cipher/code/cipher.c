#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "my_header.h"

#define ALPHABET 26
#define A_ASCII 65
#define Z_ASCII 90

// function to convert all lowercase characters in a sentence to uppercase. It ignores non-letter characters.
char * convert_to_uppercase(char * sentence)
{
  char *all_upper_case;
  all_upper_case = malloc(strlen(sentence));
  for(int i = 0; i < strlen(sentence); i++)
  {
    if(sentence[i] >= 97 && sentence[i] <= 122) // if current character is lower case
      * (all_upper_case + i) = sentence[i] - 32;
    else *(all_upper_case + i) = sentence[i];
  }
  return all_upper_case;
}

// function to decrypt cypher. It will only treat alphabet letters
void cipher_decrypt(char * sentence)
{
  char * to_decrypt = convert_to_uppercase(sentence);
  
  char * decrypted;
  for(int i = 0; i < strlen(sentence); i++)
  {
      if(sentence[i] < A_ASCII || sentence[i] > Z_ASCII) // if not a capital letter 
      {
        continue;
      } else {
        // else, decrypt
      }
  }
}

// int main ()
// {
//   printf("%s", convert_to_uppercase("Char *sentence"));
//   cipher_decrypt("char *sentence");
// }

