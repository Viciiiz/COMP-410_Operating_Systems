#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cipher.h"
#include "read_file.h"
#include "write_file.h"

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

}

// function to convert a lowercase character to uppercase. It ignores non-letter characters.
char convert_char_to_uppercase(char c)
{
  if(c >= 97 && c <= 122) // if current character is lower case
    c -= 32;
  return c;
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

// read each character, convert to uppercase, write to new text file all_capital.txt
void uppercase_to_file()
{
  FILE *file;
  char c;
  file = fopen("../encrypted_text.txt", "r");
  if (file == NULL) printf("File is not available \n");
  else
    while ((c = fgetc(file)) != EOF)
    {
      // convert to capital letter
      c = convert_char_to_uppercase(c);
      // write to all_capital file
      write_to_text_file(c, "all_capital.txt");
    }
  fclose(file);
}

// function that reads each line from a text file
// void read_each_line()
// {
//   int c;
//   int index = 0;
//   while((c = read_char_from_file(index))!= EOF){
//     index++;
//     printf("%c", c);
//     if(c == '\n') printf("\nhere\n");
//   }
// }

// function to read entire file
void read_file(char * file, char * ch)
{
  FILE *fr;
    fr = fopen (file, "r");
    char c;
    int index = 0;
    while((c = getc(fr)) != EOF)
    {
        // printf("%c", c);
        *(ch+index) = c;
        index++;
    }
    fclose(fr);
}

// get the number of lines in a file
int number_of_lines(char * file)
{
  int num = 0;
  for(int i = 0; i < strlen(file); i++){
    if(file[i] == '\n') num++;
  }
  return num+1;
}

// if word is in dictionary, return 1. else return 0
int word_is_in_dictionary(char * dictionary, char * word)
{
  int number_lines = number_of_lines(dictionary);
  for(int i = 0; i < number_lines; i++){
    // get current word
    char c;
    char current[100];
    int index = 0;
    while((c = dictionary[i]) != '\n' || (c=dictionary[i])!= EOF){
      current[index] = c;
      printf("here: %s", current);
      index++;
      i++;
    }
    i++;
    printf("hello %s", current);
    if(current==word) return 1;
  }
  return 0;
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

