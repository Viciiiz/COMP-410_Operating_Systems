#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#include "read_file.h"
#include "write_file.h"
#include "cipher.h"
#include "linkedlist.h"

#define ALPHABET 26
#define A_ASCII 65
#define Z_ASCII 90
#define WORD 100

// read each char from dictionary file and store to linkedlist
char_queue_t* load_dictionary_to_linkedlist()
{
  char ch;
  FILE *file;
  char_queue_t* dictionary_list = new_queue();
  long count = 0;
  if ((file = fopen("../dictionary.txt", "r")) == NULL)
  {
    printf("error with file");
    exit(1);
  }
  while ((ch = getc(file)) != EOF)
  {
    add_to_queue(dictionary_list, ch);
    count++;
  }
  fclose(file);
  return dictionary_list;
}

// read each char from file and store them in a linkedlist
char_queue_t* load_encrypted_to_linkedlist()
{
  char ch;
  FILE *file;
  char_queue_t* encrypted_list = new_queue();
  long count = 0;
  if ((file = fopen("../all_capital.txt", "r")) == NULL)
  {
    printf("error with file");
    exit(1);
  }
  while ((ch = getc(file)) != EOF)
  {
    add_to_queue(encrypted_list, ch);
    count++;
  }
  fclose(file);
  return encrypted_list;
}

// function to check if a given word is in dictionary
int word_is_in_dictionary(char_queue_t* dictionary, char* word)
{
  char dictionary_word[WORD];
  int index = 0;
  char_node_t* node = dictionary->head;
  while (node != NULL)
  {
    if (node->value == '\n')
    {
      if (index > 0)
      {
        dictionary_word[index] = '\0';
        if (strcmp(dictionary_word, word) == 0) return 1;
      }
      index = 0;
      node = next_node(node);
      continue;
    }
    dictionary_word[index] = node->value;
    index++;
    node = next_node(node);
  }

  return 0;
}

// function to implement word_is_in_dictionary()
int string_verify(char_queue_t* dictionary, char* string)
{
  int in_word = 0;
  int index = 0;
  for (int i = 0; i <= strlen(string); i++)
  {
    char word[WORD];
    if (isalpha(string[i]))
    {
      in_word = 1;
      word[index] = string[i];
      index++;
    } else {
      if (in_word)
      {
        word[index] = '\0';
        if (!word_is_in_dictionary(dictionary, word)) return 0;
      }
      in_word = 0;
      index = 0;
    }
  }
  return 1;
}

// function to shift a given string to the right
void shift_input(char* string)
{
  int index = 0;
  while (string[index] != '\n')
  {
    if (string[index] >= A_ASCII && string[index] <= Z_ASCII)
    {
      string[index] = string[index] + 1;
      if (string[index] > Z_ASCII) string[index] = string[index] + A_ASCII - Z_ASCII - 1;
    }
    index++;
  }
}

// decrypt cipher and write the shifts to file
void cipher_decrypt(FILE *output, char_queue_t* encrypted_list, char_queue_t* dictionary)
{
  char string[1000];
  get_line(encrypted_list->head, string);
  char_node_t* encrypted;
  int counter = 1;
  int line = 0; //////////
  while (encrypted_list->head != NULL)
  {
    int shift = 1, found = 0;
    for (; shift < ALPHABET; shift++)
    {
      shift_input(string);
      if (string_verify(dictionary, string))
      {
        found = 1;
        break;
      }
    }
    if (found)
    {
      //write_to_output(output, ALPHABET - shift);
      write_to_output(output, ALPHABET - shift); //////////
      counter++;
    }
    else write_to_output(output, -1); /////////
    for (int i = 0; i < strlen(string)+1; i++) encrypted = delete_node(encrypted_list);
    get_line(encrypted, string);
    printf("decrypting line: %d\n", ++line);
  }
}



int main(){

  //int max = 100000000;
  // store dictionary in string
  // char * dictionary;
  // dictionary = malloc(max);
  // dictionary = malloc(max);
  // read_file("../dictionary.txt", dictionary);
  // printf("%s", dictionary);
  
  // read encrypted file input, convert to capital letters and store to all_capital.txt
  printf("Converting to upper case...\n");
  empty_all_capital_file();
  uppercase_to_file();

  // store uppercase encrypted text in string
  // char * encrypted;
  // encrypted = malloc(max);
  // read_file("../all_capital.txt", encrypted);
  // printf("%s", encrypted);
  
 // printf("%d", number_of_lines(dictionary));
  //printf("%d", word_is_in_dictionary(dictionary, "TODAY"));

  // load dictionary words in linkedlist
  // char_queue_t* dictionary_list = load_dictionary_to_linkedlist();
  // print_queue(dictionary_list);

  // load encrypted words in linkedlist
  char_queue_t* encrypted_contents = load_encrypted_to_linkedlist();
  
  // loading dictionary in linkedlist
  char_queue_t* dictionary = load_dictionary_to_linkedlist();
  
  // opening
  FILE *output = create_output_file();

  // decrypt words and writing to output file
  printf("Decrypting... this may take a few seconds.\n");
  cipher_decrypt(output, encrypted_contents, dictionary); 

  // closing file
  close_file(output);
  delete_queue(encrypted_contents);
  delete_queue(dictionary);

  printf("View result in decrypted.txt.\n");
}

