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
  // printf("Path to write: %s\n", name_of_file);
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

// empty a file
void empty_all_capital_file()
{
  fclose(fopen("../all_capital.txt", "w"));
}