#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "cipher.h"
#include "write_file.h"


// function to convert a lowercase character to uppercase. It ignores non-letter characters.
char convert_char_to_uppercase(char c)
{
  if(c >= 97 && c <= 122) // if current character is lower case
    c -= 32;
  return c;
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
