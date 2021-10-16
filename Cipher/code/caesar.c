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
<<<<<<< HEAD
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
=======
  char * current_line;
  current_line = malloc(MAX);
  // read file and store line into current_line string
  char current_char;
  int count = 0;
  while ((current_char = read_char_from_file(count)) != '\n')
  {
    *(current_line + count) = current_char;
    count++;
  }
 
  // convert current_line to all capital letter
  current_line = convert_to_uppercase(current_line);
  printf("%s\n", current_line);
  // write current_line to all_capital.txt
  // for(int i = 0; i < strlen(current_line); i++)
  //   write_to_text_file(current_line[i], "all_capital.txt");
}
>>>>>>> a54d519a81031033c19cd1a1cecfc6353fdf5155
