#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

// create new node with a value
char_node_t * new_char_node(char value)
{
  char_node_t* new_char_node = (char_node_t*) malloc(sizeof(char_node_t));
  new_char_node->value = value;
  new_char_node->next = NULL;
  return new_char_node;
}

// create linkedlist
char_queue_t* new_queue()
{
  char_queue_t* new_queue = (char_queue_t*) malloc(sizeof(char_queue_t));
  new_queue->head = new_queue->tail = NULL;
  return new_queue;
}

// add char to a linkedlist
void add_to_queue(char_queue_t* queue, char value)
{
  char_node_t* new_node = new_char_node(value);
  if(queue->head == NULL) {
    queue -> head = queue -> tail = new_node;
  } else {
    queue -> tail -> next = new_node;
    queue -> tail = new_node;
  }
}

// print each element of a linkedlist
void print_queue(char_queue_t* queue)
{
  for(char_node_t* current=queue->head; current != NULL; current = current->next){
    printf("queue item %c\n", current->value);
  }
}

// delete linkedlist
void delete_queue(char_queue_t* queue)
{
  char_node_t* current = queue-> head;
  while(current != NULL)
  {
    char_node_t* next_node = current->next;
    free(current);
    current = next_node;
  }
  free(queue);
}

int contains_in_queue(char_queue_t* queue, char value)
{
  int pos = 0;
  for (char_node_t* current=queue->head; current != NULL; current=current->next)
  {
    if (current->value == value) return pos;
    pos++;
  }
  return -1;
}

void get_line(char_node_t* node, char* string)
{
  int count = 0;
  while (node != NULL)
  {
    if (node->value == '\n')
      break;
    string[count] = node->value;
    count++;
    node = node->next;
  }
  string[count] = '\0';
}

// get next node
char_node_t* next_node(char_node_t* node)
{
  if (node->next == NULL) return NULL;
  return node->next;
}

// delete a node
char_node_t* delete_node(char_queue_t* queue)
{
  char_node_t* current = queue->head;
  if (current == NULL) return NULL;   
  queue->head = current->next;
  free(current);
  return queue->head;
}


// int main(){
//   char_queue_t* queue = new_queue();
//   for(int i = 65; i < 75; i++){
//     add_to_queue(queue, i);
//   }
//   print_queue(queue);
// }