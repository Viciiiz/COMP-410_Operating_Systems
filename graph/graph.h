#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "list.h"


typedef struct node node_;
typedef struct graph graph_;

// node constructor
node_* node_constructor();

// graph constructor
graph_* graph_constructor ();

// add node to graph
void add_new_node(graph_* g, list_* nodes);

// make it easier to use the function above
void add_new_node_driver(graph_* g, char* line);

// searching for a node in graph
node_* search_node(graph_* g, char* element);

// deleting a node
void delete_node(graph_* g, node_* n);

// freeing the entire structure
void free_graph(graph_* g);

// editing a node
void editing_node(graph_* g, node_* n, char* new_value);




// printing the graph

// get the number of elements in a node_**
int node_array_length(node_** n);

// add node n to node_** nodes of graph_* g
void add_to_list_of_node(graph_* g, node_* n);

// check if a node is present in a list of node.
// return 1 if present. Return 0 otherwise
int is_in_node_list(node_** list, node_* n);

// return the index of a node in a list of node. Return -1 if not found
int node_index(node_** list, node_* n);

// copy a node into another
void copy_node(node_* from, node_* to);



