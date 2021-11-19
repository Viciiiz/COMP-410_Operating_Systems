#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <ctype.h>

#include "list.h"

// constructor
list_* list_constructor(){
  list_* li;
  li = malloc(sizeof(li));
  return li;
}

// add string in list
void add_value(list_* n, char* val, int size){
   if(val[0]=='\0') return;
   strcpy(n[size].name, val);
   n->size++;
}

// print each string of list
void print_values(list_* n, int size){
   if(n->size == 0) {
     printf("Empty list. Nothing to print.\n");
     return;
   }
   for (int i = 0; i < size; i++){
        printf("%s\n", n[i].name);
   }
}

// return string at index 
char * access_index(list_* n, int index) {
   return n[index].name;
}

// empty list
void empty_list (list_* n, int size){
   for(int i = 0; i < size; i++){
        n[i].name[0] = '\0';
   }
   n->size = 0;
}

// remove element at index
void remove_index (list_* n, int index, int size) {
   for(int i = index; i < size-1; i++){
        strcpy(n[i].name, n[i + 1].name);
   }
   n->size--;
}

// return index of an element. If not found, return -1
int find_element_index(char* element, list_* n, int size) {
   for(int i = 0; i < size; i++){
        if(strcmp(n[i].name, element) == 0) return i;
   }
   return -1;
}

// return 1 if element is in list. return 0 if not.
int element_exists(char* element, list_* n, int size) {
   if(find_element_index(element, n, size) != -1) return 1;
   return 0;
}

// return 1 if empty. return 0 if not empty
int is_empty(list_* n){
  return (n->size == 0 ? 1 : 0);
}


// takes one line of input and separates each task. The first task is a node that is added to the graph, and the other tasks are its successors
list_* separate_two(char* str){
    char str2[100];
    strcpy(str2, str);
    char *token = strtok(str2, " ->{},");
    list_* li = list_constructor();  
    while (token != NULL)
    {
        add_value(li, token, li->size); 
        token = strtok(NULL, " ->{},");
    }
    return li;
}
