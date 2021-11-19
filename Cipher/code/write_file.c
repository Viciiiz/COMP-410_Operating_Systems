#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "write_file.h"

// function to append to file
void write_to_text_file(char input, char* file_name)
{
   // create path to file
   char* name_of_file;
   name_of_file = malloc(30);
   char* path = "../";
   for(int i = 0; i < strlen(path); i++)
   {
      *(name_of_file + i) = path[i];
   }
   for(int i = 0; i < strlen(file_name); i++)
   {
      *(name_of_file + strlen(path) + i) = file_name[i];
   }
   // handle file
   FILE *file;
   file = fopen(name_of_file,"a");

   if(file == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   fprintf(file,"%c", input);
   fclose(file);
}

// write to decrypted.txt file
void write_to_decrypted_file(FILE *output, int value)
{
  FILE *out = output;
  char c[10];
  sprintf(c, "%d", value);
  for (int i = 0; i < sizeof(c); i++)
  {
    if (c[i] == '\0') break;
    putc(c[i], out);
  }
  putc('\n', output);
}

// empty a file
void empty_all_capital_file()
{
  fclose(fopen("../all_capital.txt", "w"));
}

// create file
FILE* create_decrypted_file()
{
  FILE *output;

  if ((output = fopen("../decrypted.txt", "w+")) == NULL)
  {
    fprintf(stderr, "error in creating file (decrypted.txt).\n");
    exit(2);
  }

  return output;
}

// closing decrypted.txt file
void close_file(FILE *output)
{
  if (fclose(output) != 0)
  {
    fprintf(stderr, "Error in closing file (decrypted.txt).\n");
  }
}