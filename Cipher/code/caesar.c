#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "read_file.h"
#include "write_file.h"
#include "cipher.h"
#include "linkedlist.h"

#define MAX 100

int main()
{
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