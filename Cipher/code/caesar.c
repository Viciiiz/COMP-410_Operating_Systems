#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "read_file.h"
#include "write_file.h"
#include "cipher.h"
#include "linkedlist.h"


int main(){

  int max = 100000000;
  // store dictionary in string
  char * dictionary;
  dictionary = malloc(max);
  dictionary = malloc(max);
  read_file("../dictionary.txt", dictionary);
  // printf("%s", dictionary);
  
  // read encrypted file input, convert to capital letters and store to all_capital.txt
  // empty_all_capital_file();
  // uppercase_to_file();

  // store uppercase encrypted text in string
  // char * encrypted;
  // encrypted = malloc(max);
  // read_file("../all_capital.txt", encrypted);
  // printf("%s", encrypted);
  
 // printf("%d", number_of_lines(dictionary));
  printf("%d", word_is_in_dictionary(dictionary, "TODAY"));
}

  