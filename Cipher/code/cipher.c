#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cipher.h"

#define ALPHABET 26
#define A_ASCII 65
#define Z_ASCII 90

// function to convert all lowercase characters in a sentence to uppercase. It ignores non-letter characters.
char * convert_to_uppercase(char * sentence)
{
  for(int i = 0; i < strlen(sentence); i++)
  {
    if(sentence[i] >= 97 && sentence[i] <= 122) // if current character is lower case
      * (sentence + i) = sentence[i] - 32;
    else *(sentence + i) = sentence[i];
  }
 // printf("result: %s\n", sentence);
  return sentence;
<<<<<<< HEAD
}

// function to convert a lowercase character to uppercase. It ignores non-letter characters.
char convert_char_to_uppercase(char c)
{
  if(c >= 97 && c <= 122) // if current character is lower case
    c -= 32;
  return c;
=======
>>>>>>> a54d519a81031033c19cd1a1cecfc6353fdf5155
}

// function to shift upper case letters to the left (since we shift to the right to encrypt, we shift to the right to decrypt). If not uppercase, ignore (eg: punctuation...)
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

// int main ()
// {
//  // printf("%s", convert_to_uppercase("Char *sentence"));
//  // cipher_decrypt("char *sentence");
//  char *alpha = "BUJI JHO IECUJXYDW";
//  int count = 0;
//  for(int i = 0; i < ALPHABET; i++)
//  {
//    alpha = shift_left(alpha);
//    count++;
//    printf("%s   number of shift = %d\n", shift_left(alpha), count);
//  }
//  //printf("%s\n", shift_left(alpha));
// }

