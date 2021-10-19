#include <stdio.h>
#include <stdlib.h>
#include "read_file.h"

// function to read each char from a text file
char read_char_from_file(int char_index)
{
   char current_char;
   FILE *file;

   // if ((file = fopen("../encrypted_text.txt","r")) == NULL){
   if ((file = fopen("../pseudocode.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

  for(int i = 0; i <= char_index; i++)
  {
   fscanf(file,"%c", &current_char);
  }

  // printf("Value of n=%c", current_char);
   fclose(file); 
   return current_char;
}

// function to store line to linkedlist. Each char will be within a node until \n
void store_line_to_linkedlist()
{

}


// int main()
// {
//   for(int i = 1; i < 50; i++)
//   {
//     printf("%c", read_char_from_file(i));
//   }
// }