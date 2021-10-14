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

// function to shift upper case letters to the left (since we shift to the right to encrypt, we shift to the right to decrypt)
char * shift_left(char * sentence)
{
  char *shifted;
  shifted = malloc(strlen(sentence));
  for(int i = 0; i < strlen(sentence); i++)
  {
    if(sentence[i] >= A_ASCII && sentence[i] <= Z_ASCII) // if char is a capital letter 
    {
      if(sentence[i] == A_ASCII) // if current char is == Z
        *(shifted + i) = sentence[i] + 25;
      else *(shifted + i) = sentence[i] - 1;
    } else {
      *(shifted + i) = sentence[i];
    }
  }
  return shifted;
}

// function to decrypt cypher. It will only treat alphabet letters
void cipher_decrypt(char * sentence)
{
  char * to_decrypt = convert_to_uppercase(sentence);
  
  char * decrypted;
  decrypted = malloc(strlen(to_decrypt));
  for(int i = 0; i < strlen(sentence); i++)
  {
      if(sentence[i] < A_ASCII || sentence[i] > Z_ASCII) // if not a capital letter 
      {
        *(decrypted + i) = to_decrypt[i];
      } else {
        // else, shift and check if each word is in dictionary
        // if yes, print decrypted sentence and number of right shift that was used to encrypt it.
        // if no, continue. If no happens more than 26 times, return error for the line.

      }
  }
}

int main ()
{
 // printf("%s", convert_to_uppercase("Char *sentence"));
 // cipher_decrypt("char *sentence");
 char *alpha = "BUJI JHO IECUJXYDW";
 int count = 0;
 for(int i = 0; i < ALPHABET; i++)
 {
   alpha = shift_left(alpha);
   count++;
   printf("%s   number of shift = %d\n", shift_left(alpha), count);
 }
 //printf("%s\n", shift_left(alpha));
}

