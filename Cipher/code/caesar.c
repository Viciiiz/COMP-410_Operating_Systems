#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "read_file.h"
#include "write_file.h"
#include "cipher.h"
#include "linkedlist.h"

#define MAX 100

// empty a file
void empty_all_capital_file()
{
  fclose(fopen("../all_capital.txt", "w"));
}

// read each character, convert to uppercase, write to new text file all_capital.txt
void uppercase_to_file()
{
  FILE *file;
  char c;
  file = fopen("../pseudocode.txt", "r");
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

// read each line of all_capital.txt, 

int main(){
  empty_all_capital_file();
  uppercase_to_file();
}
