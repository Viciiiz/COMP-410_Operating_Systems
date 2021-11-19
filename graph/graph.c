#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "graph.h"

#define MAX_NODE 1000


// node
typedef struct node
{
   char value[MAX_LENGTH];
   node_** successors;
} node_;



// graph
typedef struct graph
{
   node_* head;
   int size;
   list_* vertices;
   node_** nodes; // same as the vertices list above, but list of nodes instead of list of strings
   list_* visited;
} graph_;



// node constructor
node_* node_constructor(){
  node_* n;
  n = malloc(sizeof(node_));
  n->successors = malloc(MAX_NODE * sizeof(node_*));
  return n;
}



// graph constructor
graph_* graph_constructor (){
  graph_* g;
  g = malloc(sizeof(graph_));
  g->head = malloc(sizeof(node_));
  g->head = node_constructor();
  g->vertices = malloc(sizeof(list_)); 
  g->nodes = malloc(MAX_NODE * sizeof(node_*));
  g->visited = malloc(sizeof(list_)); 
  strcpy(g->head->value, "\0");
  g->size = 0;
  return g;
}



// returns the number of element in a node_* array
int node_array_length(node_** n){
  int len = 0;
  while(n[len]!='\0'){
    len++;
  }
  return len;
}



// add new node with its successors. The first element of the list 
// is the node to add, and the other elements are its successors // DONE
void add_new_node(graph_* g, list_* nodes){
    // if nodes are not yet in graph, add them
  for(int i = 0; i < nodes->size; i++){
      if(element_exists(access_index(nodes, i), g->vertices, g->vertices->size)==0) {
        add_value(g->vertices, access_index(nodes, i), g->vertices->size);
        node_* n = node_constructor();
        strcpy(n->value, access_index(nodes, i));
        add_to_list_of_node(g, n);
        // if this is the first element added, it's the head
        if(node_array_length(g->nodes) == 1) g->head = n;
    }
  }
  // add the elements from index 1 to the end to the first element's successors
  node_* first = node_constructor();
  first = search_node(g, access_index(nodes, 0));
  for(int i = 1; i < nodes->size; i++){
    node_* temp = node_constructor();
    strcpy(temp->value, access_index(nodes, i));
    first->successors[node_array_length(first->successors)] = temp;
  }
  printf("Node added successfully with its successors!\n");
}



// make it easier to use the function above
void add_new_node_driver(graph_* g, char* line){
  list_* li = list_constructor();
  li = separate_two(line);
  add_new_node(g, li);
}



// add node n to node_** nodes of graph_* g
void add_to_list_of_node(graph_* g, node_* n){
  g->nodes[node_array_length(g->nodes)] = n;
  g->size++;
}



// searching for a node in graph // DONE
node_* search_node(graph_* g, char* element) {
  int index = 0;
  node_** m;
  m = malloc(MAX_NODE * sizeof(node_*));
  while(strcmp(g->nodes[index]->value, element) != 0){  
    index++;
    if (index == node_array_length(g->nodes)) {
      index--;
      break;
    }
  }
   if(strcmp(g->nodes[index]->value, element) == 0) {
     m = &g->nodes[index];
   } else {
     printf("node of value %s not found\n", element);
     node_* n = node_constructor();
     strcpy(n->value, "node_not_found");
     return n;
   }
  return m[0];
}



// deleting a node
void delete_node(graph_* g, node_* n){
  for (int i = 0; i < node_array_length(g->nodes); i++){
    printf("nodes in graph before deletion: %d. %s\n", i, g->nodes[i]->value);
  }
  // remove n from all the successors lists
  for (int i = 0; i < node_array_length(g->nodes); i++){ // go over each node of g
    node_* current_node = node_constructor();
    current_node = search_node(g, g->nodes[i]->value); // current node in g
    if(is_in_node_list(current_node->successors, n)==0) {
      continue; // in not in the list of successors of the current node, break
    } 
    for(int j = 0; j < node_array_length(current_node->successors); j++){ // go over the successors of each node of g

      int index = node_index(g->nodes, current_node);
      // move all the nodes after that index once to the left
      for(int k = index; k < node_array_length(current_node->successors)-1;k++){
        copy_node(g->nodes[k+1], g->nodes[k]);
      }
    }
  }
  // remove n from list of node
  int index = node_index(g->nodes, n);
  // move all the nodes after that index once to the left
  for(int k = index; k < node_array_length(g->nodes)-1;k++){
    copy_node(g->nodes[k+1], g->nodes[k]);
  }
  // free last node
  free(g->nodes[node_array_length(g->nodes)-1]);
  // decrement size of graph
  g->size--; 
  // remove from list
  remove_index(g->vertices, find_element_index(n->value, g->vertices, g->vertices->size), g->vertices->size);
  printf("\n");
  for (int i = 0; i < g->size; i++){
    printf("nodes in graph after deletion: %d. %s\n", i, g->nodes[i]->value);
  } 
}


// check if a node is present in a list of node.
// return 1 if present. Return 0 otherwise
int is_in_node_list(node_** list, node_* n){
  for(int i = 0; i < node_array_length(list); i++){
    if(strcmp(list[i]->value, n->value) == 0) return 1;
  }
  return 0;
}


// copy a node into another
void copy_node(node_* from, node_* to){
  strcpy(to->value, from->value);
  for(int i = 0; i < node_array_length(from->successors); i++){
    to->successors[i] = from->successors[i];
  }
}


// freeing the entire structure // DONE
void free_graph(graph_* g) {
  free(g);
  printf("Deleted graph.\n");
}


// return the index of a node in a list of node. Return -1 if not found
int node_index(node_** list, node_* n){
  int index = 0;
  for(int i = 0; i < node_array_length(list); i++){
    if(strcmp(list[i]->value, n->value) == 0) {
      return index;
    }
    index++;
    if(index == node_array_length(list)){
      printf("Node of value %s not found in the list.\n", n->value);
      break;
    }
  }
  return -1;
}



// editing a node // DONE
void editing_node(graph_* g, node_* n, char* new_value){
  // find the node
  node_* node = node_constructor();
  node = search_node(g, n->value);
  // edit the node
  strcpy(node->value, new_value);
  // go over the successors
  for(int i = 0; i < g->size; i++){
    for(int j = 0; j < node_array_length(g->nodes[i]->successors); j++){
      if (strcmp(g->nodes[i]->successors[j]->value, n->value)==0){
        strcpy(g->nodes[i]->successors[j]->value, new_value);
      } 
    }
    
  }
  printf("Node edited successfully!\n");
}






int main(){
  printf("Starting...\n");
  
  graph_* g = graph_constructor();

  char* one = "T1 -> {T2, T3, T7}";
  char* two = "T2 -> T4";
  char* three = "T3 -> T4";
  char* four = "T4 -> T5";
  char* five = "T6 -> {T5, T8}";
  char* six = "T7 -> T6";

  // add node
  printf("\nAdding nodes:-------------------------------\n");
  add_new_node_driver(g, one);
  add_new_node_driver(g, two);
  add_new_node_driver(g, three);
  add_new_node_driver(g, four);
  add_new_node_driver(g, five);
  add_new_node_driver(g, six);

  // printing nodes and their successors after nodes were added to graph
  printf("\nHere is a list of the current nodes in the graph:-----------\n");
  for(int i = 0; i < node_array_length(g->nodes); i++){
    printf("Node number %d: %s ->", i, g->nodes[i]->value);
    for(int j = 0; j < node_array_length(g->nodes[i]->successors); j++){
      printf(" %s,", g->nodes[i]->successors[j]->value);
    }
    printf("\n");
  }

  // edit a node (here, we are replacing changing the name of a node from T5 to T10)
  printf("\nEditing a node-----------------------------\n");
  editing_node(g, search_node(g, "T5"), "T10");
  for(int i = 0; i < g->size; i++){
    printf("Node number %d: %s\n", i, g->nodes[i]->value);
  }

  // deleting a node (here, we are deleting T4)
  printf("\nDeleting a node:-------------------------------\n");
  node_* node = node_constructor();
  node = search_node(g, "T4");
  delete_node(g, node);

  printf("\n...done\n");
  free_graph(g);
}




